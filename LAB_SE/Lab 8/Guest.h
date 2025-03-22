#ifndef GUEST_H
#define GUEST_H
#include"String.h"
class Guest
{
	String name;
	String affiliation;
	String contactNumber;
public:
	Guest()
	{}
	Guest(String a, String b, String c) : name(a), affiliation(b), contactNumber(c)
	{}
	void displayGuest()
	{
		cout << "Name: " << name << endl;
		cout << "Affiliation: " << affiliation << endl;
		cout << "Contact: " << contactNumber << endl;
	}
};
#endif // !GUEST_H
