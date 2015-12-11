#include "Division.h"

string Division::evaluate()
{
	string value = to_string(stof(left->evaluate()) / stof(right->evaluate()));
	return value;
}