#ifndef MOUSE_H
#define	MOUSE_H
#include"Animal.h"
class Mouse :public Animal
{
public:
	void makeSound() override final;
};
#endif // !MOUSE_H
