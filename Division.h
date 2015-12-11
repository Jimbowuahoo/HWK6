#pragma once
#include "ArithmeticExpression.h"

class Division : public ArithmeticExpression
{
public:
	string evaluate();
	void print();
	Division(Expression *l, Expression *r)
	{
		left = l;
		right = r;
	}
};