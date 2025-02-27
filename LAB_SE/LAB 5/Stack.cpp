#include "Stack.h"
template <typename T>
Stack<T>::Stack(int newSize):topIndex(-1),capacity(newSize)
{
	if (newSize <= 0)
	{
		cout << "Invalid Capacity!";
		return;
	}
	stack = new T[newSize];
}
template<typename T>
bool Stack<T>::isEmpty()
{
	return (topIndex == -1) ? true : false;
}
template<typename T>
bool Stack<T>::isFull()
{
	return (topIndex == (capacity - 1)) ? true : false;
}
template<typename T>
T Stack<T>::top()
{
	return (isEmpty())?  - 1 : stack[topIndex];
}
template<typename T>
T Stack<T>::pop()
{
	if (isEmpty())
	{
		T value = -1;
		return value;
	}
	else
	{
		T value = top();
		topIndex--;
		return value;
	}
	//return (isEmpty()) ? -1 : stack[topIndex--];
}
template<typename T>
void Stack<T>::push(T x)
{
	if (isFull())
	{
		cout << "Full!";
		return;
	}
	else
	{
		stack[topIndex++] = x;
	}
}
template<typename T>
Stack<T>::~Stack()
{
	if (stack != nullptr)
	{
		delete[] stack;
	}
	capacity = 0;
	topIndex = 0;
}