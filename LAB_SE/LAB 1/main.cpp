#include"Date.h"
#include"Complex.h"
#include"Dog.h"
#include"Cat.h"
#include"Mouse.h"
int f(int k, int n)
{
	if (n == k)
		return k;
	else if (n > k)
		return f(k, n - k);
	else
		return f(k - n, n);
}
int mystery(int x, int y)
{
	if (x < 0)
	{
		return -mystery(-x, y);
	}
	else if (y < 0)
	{
		return -mystery(x, -y);
	}
	else if (x == y)
	{
		return  0;
	}
	else
	{
		return 100 * mystery((x / 10), (y / 10)) + 10 * (x % 10) + y % 10;
	}
}
int main()
{
	//cout << f(6, 8);
	//cout << mystery(135, 246);

	Mouse m;
	Dog d;
	Cat c;
	Animal* p = &c;
	p->makeSound();

	/*Date d{1,1,2024};
	d.subtractDays(1);
	d.displayDate();
	cout << endl;*/
	return 0;
}