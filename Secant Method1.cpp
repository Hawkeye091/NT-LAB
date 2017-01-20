#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return (x*x*x - 2*x*x + x -2);
}
main()
{
    double x0=1.25,x1=1.5,x2;
    int flag=1;
    while(flag)
    {
        x2=  (x0*f(x1) - x1*f(x0))/(f(x1)-f(x0));
        if(f(x2)==0)
            flag=0;
        else
            {
              x0=x1;
              x1=x2;
            }
    }
    cout<<"Root at "<<x2;
}
