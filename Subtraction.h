#pragma once
#include "ArithmeticExpression.h"

class Subtraction : public ArithmeticExpression
{
public:
	string evaluate();
	void print();
	Subtraction(Expression *l, Expression *r)
	{
		left = l;
		right = r;
	}
};