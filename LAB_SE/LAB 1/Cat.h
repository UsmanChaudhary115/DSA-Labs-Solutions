#ifndef CAT_H
#define	CAT_H
#include"Animal.h"
class Cat :public Animal
{
public:
	void makeSound() override final;
};
#endif // !CAT_H
