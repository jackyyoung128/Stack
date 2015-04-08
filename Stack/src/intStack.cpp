#include "intStack.h"

intStack::intStack(int m)
{
    data = new int [m];
    sp = data;
}

void intStack::push (int in)
{
    *sp++ = in;
}

int intStack::pop ()
{
    return *--sp;
}

bool intStack::isFull (int m)
{
    return sp == data+m;
}

bool intStack::isEmpty ()
{
    return sp == data;
}
