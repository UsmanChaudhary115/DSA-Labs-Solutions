#include<iostream>
using namespace std;
class Guest
{
public:
    string name;
    string affiliation;
    string contactNumber;
    void display()
    {
        cout << "Name is : " << name << endl;
        cout << "Affliliation is : " << affiliation << endl;
        cout << "Contact Number is : " << contactNumber << endl;
    }

};
class GuestList
{
    static const int maxSize = 100;
    Guest* guests[maxSize];
    int priorities[maxSize];
    int rear;
    int front;
public:
    GuestList()
    {
        rear = -1;
        front = 0;
    }
    ~GuestList()
    {
        rear = -1;
        front = 0;
    }
    void enQueue(Guest* guest, int priority)
    {
        if (isFull())
            cout << "GuestList is Full\n";
        int i;
        for (i = rear; i >= 0; i--)
        {
            if (priority > priorities[i])
            {
                guests[i + 1] = guests[i];
                priorities[i + 1] = priorities[i];
            }
            else
                break;
        }
        guests[i + 1] = guest;
        priorities[i + 1] = priority;
        rear++;

    }
    Guest* deQueue()
    {
        Guest a{ "","","" };
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return &a;
        }
        Guest* temp = guests[front];
        front++;
        return temp;
    }
    Guest* top()
    {
        Guest a{ "-","-","-" };
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return &a;
        }
        Guest* temp = guests[front];
        front++;
        return temp;
    }
    bool isEmpty() const
    {
        return (front > rear);
    }
    bool isFull() const
    {
        return (rear == maxSize - 1);
    }

};