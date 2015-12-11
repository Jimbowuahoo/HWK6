#include "Expression.h"
#include "ArithmeticExpression.h"
#include "Addition.h"
#include "Subtraction.h"

void main()
{
	string enter = "hi";
	while (enter == "hi")
	{
		Expression *x;
		Expression *a = new Expression("3.2+1");
		Expression *b = new Expression("1");
		Addition a1(a,b);
		ArithmeticExpression ae1("2 + 2");
		
		cout << a1.evaluate() << endl;
		cout << ae1.evaluate();
		//cout << pos;
		cin >> enter;
	}
}
