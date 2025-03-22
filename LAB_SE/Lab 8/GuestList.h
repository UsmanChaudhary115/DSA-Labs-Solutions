#ifndef GUESTLIST_H
#define GUESTLIST_H
#include"Guest.h"
class GuestList
{
	static const int maxSize = 100;
	Guest* guests[maxSize];
	int priorities[maxSize];
	int rear;
public:
	GuestList() :rear(0)
	{
		for (int i = 0; i < maxSize; i++)
		{
			guests[i] = nullptr;
			priorities[i] = 0;
		}
	}
	void enQueue(Guest* guest, int priority)
	{
		if(!isFull())
		{
			guests[rear] = guest;
			priorities[rear++] = priority;
			guest = nullptr;
		}
		else
		{
			cout << "Full!!" << endl;
		}
	}
	Guest* deQueue()
	{
		if (!isEmpty())
		{
			int index = 0;
			int maxPriority = priorities[index];
			for (int i = 1; i < rear; i++)
			{
				if (priorities[i] > maxPriority)
				{
					index = i;
					maxPriority = priorities[i];
				}
			}
			Guest* temp = guests[index];
			for (int i = 0; i < (rear - 1); i++)
			{
				if (i >= index)
				{
					guests[i] = guests[i + 1];
					priorities[i] = priorities[i + 1];
				}
			}
			guests[rear--] = nullptr;
			return temp;
		}
		else
		{
			cout << "Empty!!" << endl;
			exit(0);
		}
	}
	Guest* top()
	{
		int index = 0;
		int maxPriority = priorities[index];
		for (int i = 1; i < rear; i++)
		{
			if (priorities[i] > maxPriority)
			{
				index = i;
				maxPriority = priorities[i];
			}
		}
		return guests[index];
	}
	bool isEmpty() const
	{
		return (rear == 0) ? true : false;
	}
	bool isFull() const
	{
		return (rear == (maxSize - 1)) ? true : false;
	}

	~GuestList()
	{
		rear = 0;	
	}
};
#endif // !GUESTLIST-H
