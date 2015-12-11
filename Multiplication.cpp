#include "Multiplication.h"

string Multiplication::evaluate()
{
	string value = to_string(stof(left->evaluate()) * stof(right->evaluate()));
	return value;
}