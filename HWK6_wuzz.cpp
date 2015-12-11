#include "Expression.h"
#include "ArithmeticExpression.h"
#include "Addition.h"
#include "Subtraction.h"

void main()
{
	string enter = "hi";
	while (enter == "hi")
	{
		Expression *x = new Expression("1+1");
		cout << x->evaluate();
		//cout << pos;
		cin >> enter;
	}
}
