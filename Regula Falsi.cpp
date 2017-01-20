#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return (x*x*x - 3*x + 1);
}
main()
{
    double x0=0,x1=0.5,x2;
    int flag=20000;
    while(flag)
    {
        if(f(x0)*f(x1)<0 )
        {
            double c;
            double m = (f(x1)-f(x0))/(x1-x0);
            c=f(x1)-m*x1;
            x2=-(c/m);
        }

            flag--;
           if(f(x0)*f(x2)<0)
                 x1=x2;
            else
                x0=x2;

    }
    cout<<"Root at "<<x2;
}
