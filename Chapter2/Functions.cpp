double soma(double x, double y)
{
    return x + y;
}

//overload - The same function takes a different number of parameters
double soma(double x, double y, double z)
{
    return x + y + z;
}

//overload with different parameter types

bool test(bool x)
{
    return x;
}

bool test(double x)
{
    return x > 0;
}