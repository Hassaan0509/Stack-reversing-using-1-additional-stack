#include "pch.h"
#include "Stack.h"

bool stack::reverse(stack& s)
{
	stack s1;
	int x = top;
	while (!isEmpty())
	{
		s1.push(s.pop());
	}
	s = s1;
	return true;
}