#pragma once
#include "Expression.h"
#include <string>
#include <istream>
#include <cstdlib>
#include <cstdio>     
#include <cstring> 

class ArithmeticExpression : public Expression
{
public:
	char operate;
	string numNode = "";
	Expression *left;
	Expression *right;
	Expression *old;
	string trimWS(string s);
	string evaluate();
	void parser();
	void print();
	float convert(string s);
	ArithmeticExpression() {};
	ArithmeticExpression(string num)
	{
		numNode = num;
	}
};