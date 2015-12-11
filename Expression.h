#pragma once
#include <iostream>

using namespace std;

class Expression {
public:
	string Express;
	virtual string evaluate();
	Expression()
	{

	}
	Expression(string str)
	{
		Express = str;
	}

	//virtual void print();
};