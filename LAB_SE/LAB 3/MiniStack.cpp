#include "MiniStack.h"
#include <iostream>
using namespace std;
MinStack::MinStack() :stack(100),min(100)
{}

void MinStack::push(int value)
{
	if (min.top() == -1 || min.top() > value)
	{
		min.push(value);
	}
	stack.push(value);
}

void MinStack::pop()
{
	if (stack.top() == min.top())
	{
		min.pop();
	}
	stack.pop();
}
int MinStack::top()
{
	return stack.top();
}
int MinStack::getMin()
{
	int minValue;
	if (stack.isEmpty())
	{
		cout << "Stack is Empty!";
		minValue = -1;
	}
	else
	{
		minValue = min.top();
	}
	return minValue;
}