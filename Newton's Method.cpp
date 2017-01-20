#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return (x*x*x - 2*x*x + x -2);
}
double f1(double x)
{
    return (3*x*x - 4*x +1);
}
main()
{
    double x0=1.5,x1;
    int flag=1;
    while(flag)
    {
        x1=x0 - (f(x0)/f1(x0));
        if(f(x1)==0)
            flag=0;
        else
            x0=x1;
    }
    cout<<"Root at "<<x0;
}

