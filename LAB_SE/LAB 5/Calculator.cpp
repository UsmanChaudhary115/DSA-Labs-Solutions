#include"Calculator.h"
#include"Stack.h"
bool Calculator::isOperator(char ch)
{
	return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') ? true : false;
}
int precedence(string op)
{
	if (op == string{'+'} || op == string{ '-' })
	{
		return 0;
	}
	else if (op == string{ '*' } || op == string{ '/' } || op == string{ '%' })
	{
		return 1;
	}
	else if (op == string{ '^' })
	{
		return 2;
	}
	else
	{
		return 3;
	}
}
bool Calculator::isGreaterThanOrEqual(String currentOP, String operatorOnStack)
{
	if (currentOP == '-' || currentOP == '+')
	{
		if (operatorOnStack == '+' || operatorOnStack == '-' || operatorOnStack == '*' || operatorOnStack == '/' || operatorOnStack == '^')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (currentOP == '*' || currentOP == '/')
	{
		if (operatorOnStack == '^' || operatorOnStack == '*' || operatorOnStack == '/')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (operatorOnStack == '^')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
Calculator::Calculator(String i, char ch):infix(i),delimeter(ch)
{}
string Calculator::infixToPostfix()
{
	//String result;
	//Stack<String> st;
	//int size = infix.getLength();
	//for (int i = 0; i < size; i++)
	//{
	//	if (infix[i] == '(')			//A+B^C*D+E^5
	//	{
	//		st.push(infix[i]);
	//	}
	//	else if (isOperator(infix[i]))
	//	{
	//		if (!(isGreaterThanOrEqual(infix[i], st.top())))
	//		{
	//			st.push(infix[i]);
	//		}
	//		else
	//		{
	//			while (isGreaterThanOrEqual(infix[i], st.top()))
	//			{
	//				result += st.pop();
	//			}
	//			st.push(infix[i]);
	//		}
	//	}
	//	else if (infix[i] == ')')
	//	{
	//		while (!(st.top() == '('))
	//		{
	//			result += st.pop();
	//		}
	//		st.pop();
	//	}
	//	else
	//	{	
	//		while (infix[i] != delimeter)
	//		{
	//			result += infix[i];
	//			i++;
	//		}
	//	}
	//}
	//if (!st.isEmpty())
	//{
	//	result += st.pop();
	//}
	//return result;

	string result;
	Stack<string>st;
	int size = infix.getLength();
	for (int i = 0; i < size; i++)
	{
		char ch = infix[i];
		if (!(isOperator(ch)))
		{
			while (infix[i] != delimeter)
			{
				result += infix[i];
				i++;
			}
		}
		else
		{
			while (!st.isEmpty() && (precedence(st.top()) > precedence(string{ ch })))
			{
				result += st.pop();
			}
			if (ch != ')')
			{
				st.push(string{ ch });
			}
			else if (ch == ')')
			{
				st.pop();
			}
		}
	}
	while (!st.isEmpty())
	{
		result += st.pop();
	}
	return result;
}/*
String Calculator::infixToPrefix()
{
	String reversedString = infix;
	reversedString.reverse();
	int size = reversedString.getLength();
	for (int i = 0; i < size; i++)
	{
		if (reversedString[i] == ')')
		{
			reversedString[i] = '(';
		}
		else if (reversedString[i] == '(')
		{
			reversedString[i] = ')';
		}
		else
		{}
	}
	for (int i = 0; i < size; i++)
	{
		if (reversedString[i] == delimeter)
		{
			while (!(isOperator(reversedString[i])) && !(reversedString[i] == ')'))
			{
				reversedString[i] = reversedString[i + 1];
				i++;
			}
			reversedString[i - 1] = ',';
		}
	}
	Calculator cl{ reversedString,delimeter };
	String result = cl.infixToPostfix();
	result.reverse();
	return result;
}
int Calculator::evaluatePostfix()
{
	Calculator cl{ infix,delimeter };
	String postFix = cl.infixToPostfix();

	return -1;
}
int Calculator::evaluatePrefix()
{
	Calculator cl{ infix,delimeter };
	String preFix = cl.infixToPrefix();
	
	return -1;*/
//}