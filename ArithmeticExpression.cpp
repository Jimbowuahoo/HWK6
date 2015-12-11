#include "ArithmeticExpression.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Division.h"
#include "Multiplication.h"


string ArithmeticExpression::evaluate()
{
	cout << Express.find_first_of("*/()+-");
	parser();
	
	if (Express.find_first_of("* /()+-") == 0)
	{
		Express = numNode;
		return numNode;
	}
	return "hi";
}

string ArithmeticExpression::trimWS(string str)
{
	if (str.empty())
		return str;

	std::size_t firstScan = str.find_first_not_of(' ');
	std::size_t first = firstScan == std::string::npos ? str.length() : firstScan;
	std::size_t last = str.find_last_not_of(' ');
	str = str.substr(firstScan, last - firstScan+ 1);
	return str;
}

void ArithmeticExpression::parser()
{
	trimWS(Express);
	for (int i = 0; i < Express.length(); i++)
	{
		string subString = Express.substr(i);
		std::size_t nextBracket = subString.find_first_not_of(" 1234567890+-*/.");
		if (nextBracket > 1000)
		{
			nextBracket = 0;
		}
		if (Express[0] = '(')
		{
			if (Express[i] == ')' && Express[nextBracket] != ')')
			{
				std::size_t next = subString.find_first_not_of(" /*1234567890.");//find the first + or -
				if (next > 1000)//if not found
				{
					next = subString.find_first_not_of(" 1234567890.");//find the first * or /
				}
				left = &Expression(Express.substr(0, next)); //left expression goes up to the next operator
				right = &Expression(Express.substr(i + next + 1));//right expression is after the next operator
				switch (Express[next + i])
				{
				case '+':
					old = new Addition(left, right);
					old->evaluate();
					break;
				case '-':
					old = new Subtraction(left, right);
					break;
				case '/':
					old = new Division(left, right);
					break;
				case '*':
					old = new Division(left, right);
					break;
				default:
					break;
				}
			}
		}	
	}
	if (Express[0] != '(')
	{
		std::size_t next = Express.find_first_not_of(" /*1234567890.");//find the first + or -
		if (next > 1000)//if not found
		{
			next = Express.find_first_not_of(" 1234567890.");//find the first * or /
		}
		left = &Expression(Express.substr(0, next)); //left expression goes up to the next operator
		right = &Expression(Express.substr(next + 1));//right expression is after the next operator
		switch (Express[next])
		{
		case '+':
			old = new Addition(left, right);
			break;
		case '-':
			old = new Subtraction(left, right);
			break;
		case '/':
			old = new Division(left, right);
			break;
		case '*':
			old = new Division(left, right);
			break;
		default:
			break;
		}
	}
}