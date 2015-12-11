#include "Subtraction.h"

string Subtraction::evaluate()
{
	string value = to_string(stof(left->evaluate()) - stof(right->evaluate()));
	return value;
}