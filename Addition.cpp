#include "Addition.h"

string Addition::evaluate()
{
	string value = to_string(stof(left->evaluate()) + stof(right->evaluate()));
	return value;
}

