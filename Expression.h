#pragma once
#include <iostream>

using namespace std;

class Expression {
public:
	string Express = "1+1";
	virtual string evaluate() { return Express; };
	Expression()
	{

	}
	Expression(string str)
	{
		Express = str;
	}

	//virtual void print();
};