#pragma once
#include "ArithmeticExpression.h"

class Addition : public ArithmeticExpression
{
public:
	//Addition::Addition(Expression *left, Expression *right);
	string evaluate();
	void print();
	Addition(Expression *l, Expression *r)
	{
		left = l;
		right = r;
	}
};