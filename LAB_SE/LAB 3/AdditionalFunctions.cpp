#include"Stack.h"
#include"String.h"
int* nextGreaterToLeft(int array[], int size)
{
	Stack<int> st{ 100 };
	int* resultant = new int[size];
	for (int i = 0; i < size; ++i)
	{
		while (!st.isEmpty() && st.top() <= array[i])
		{
			st.pop();
		}

		if (st.isEmpty())
		{
			resultant[i] = -1;
		}
		else
		{
			resultant[i] = st.top();
		}
		st.push(array[i]);
	}
	return resultant;
}
bool isValid(const String& str)
{
	Stack<char> st{ 100 };
	for (int i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];
		if (c == '(' || c == '[' || c == '{') {
			st.push(c);
		}
		else
		{
			if (st.isEmpty() || (c == ')' && st.top() != '(') || (c == ']' && st.top() != '[') || (c == '}' && st.top() != '{'))
			{
				return false;
			}
			else
			{
				st.pop();
			}
		}
	}
	return st.isEmpty();
}