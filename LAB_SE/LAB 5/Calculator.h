#ifndef CALCULATOR_H
#define CALCULATOR_H
#include"String.h"
class Calculator
{
private:
	String infix;
	char delimeter;
	bool isGreaterThanOrEqual(String, String);
	bool isOperator(char);
public:
	Calculator(String, char);
	string infixToPostfix();
	String infixToPrefix();
	int evaluatePostfix();
	int evaluatePrefix();
	String returnInfix()
	{
		return infix;
	}
};
#endif // !CALCULATOR_H
