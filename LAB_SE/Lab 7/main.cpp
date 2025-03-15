#include"Queue.h"
#include"Stack.h"
#include"Array.h"
int ToyCollectionQueue(Array children, Array toys)
{
	Stack st;
	int j = 0;
	int count = 0;
	for (int i = 0; i < children.getCapacity(); i++)
	{
		if (children[i] == toys[j])
		{
			j++;
		}
		else
		{
			st.push(children[i]);
			count++;
		}
	}
	while (!st.empty())
	{
		if (st.top() != toys[j])
		{
			return count;
		}
		else
		{
			st.pop();
			j++;
			count--;
		}
	}
	return 0;
}							 
int main()
{
	Array children = {6,1, 1, 1, 1, 0, 1};
	Array toys =	 {6,1, 0, 0, 0, 1, 1};
	cout << ToyCollectionQueue(children, toys);
	/*Stack st;
	st.push(10);
	st.push(12);
	st.push(13);
	st.push(16);
	cout << st.pop();
	cout << st.pop();*/

	//Queue data{ 100 };
	//data.enQueue(1);
	//cout << data.isEmpty();
	return 0;
}