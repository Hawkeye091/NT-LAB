#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x*x*x)-x-1;
}
int main()
{
    double a,b,c=2;
    a=1,b=1.5;
    while(c-a>0.000001)
    {
        b=(a+c)/2;
        if(f(a)*f(b)<0)
         c=b;
        else if(f(a)*f(b)>0)
         a=b;
        else
        {
        cout<<b;
        break;
        }


    }
    cout<<"The root is "<<c;
    return 0 ;
}
