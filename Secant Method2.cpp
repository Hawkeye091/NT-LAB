#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return (x*x*x - 3*x + 1);
}
main()
{
    double x0=0.5,x1=1,x2;
    int flag=1000;
    while(flag)
    {
          if(f(x1)-f(x0)==0)
                break;
        x2=  (x0*f(x1) - x1*f(x0))/(f(x1)-f(x0));
              x0=x1;
              x1=x2;
              flag--;
    }
    cout<<"Root at "<<x2;
}

