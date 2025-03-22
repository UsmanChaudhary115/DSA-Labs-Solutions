#include"GuestList.h"
#include"Guest.h"
int main()
{
	GuestList gl;
	Guest guest1{ "Usman","Student","03266180749" };
	Guest guest2{ "Arslan","Student","03266180749" };
	Guest guest3{ "Kamran","Student","03266180749" };
	Guest guest4{ "Noman","Student","03266180749" };
	Guest guest5{ "Ali","Student","03266180749" };
	gl.enQueue(&guest1, 1);
	gl.enQueue(&guest2, 2);
	gl.enQueue(&guest3, 6);
	gl.enQueue(&guest4, 2);
	gl.enQueue(&guest5, 0);
	Guest* temp = gl.deQueue();
	temp->displayGuest();
	return 0;
}