#pragma once
#include "ArithmeticExpression.h"

class Multiplication : public ArithmeticExpression
{
public:
	string evaluate();
	void print();
	Multiplication(Expression *l, Expression *r)
	{
		left = l;
		right = r;
	}
};