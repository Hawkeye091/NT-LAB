//f1=y+x^2-1-x=0
//f2=x^2-2*y^2-y=0
#include <bits/stdc++.h>
using namespace std;
double f[2][1];
double fd[2][2];
double mult[2][1];
void fx(double x,double y)
{
    double a,b;
    a=(y+x*x-1-x);
    b=(x*x-2*y*y-y);
    f[0][0]=a;
    f[1][0]=b;
}
/*void fDash(double x,double y)
{
    double a=2*x-1,b=1.0,c=2*x,d=-4*y-1;
        fd[0][0]=a;
        fd[0][1]=b;
        fd[1][0]=c;
        fd[1][1]=d;
}*/
void InversefDash(double x,double y)
{
    double d=2*x-1,b=-1.0,c=-2*x,a=-4*y-1;
        fd[0][0]=a/(a*d-b*c);
        fd[0][1]=b/(a*d-b*c);
        fd[1][0]=c/(a*d-b*c);
        fd[1][1]=d/(a*d-b*c);
}
void Multiply()
{
    int i,j,k;
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 1; ++j)
        {
            mult[i][j]=0.0;
        }
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 1; ++j)
            for(k = 0; k < 2; ++k)
            {
                mult[i][j] += fd[i][k] * f[k][j];
            }
}
main()
{
    int flag=5;
    double Xi[2][1]={{0.0},{0.0}},Xin[2][1];
    while(flag)
    {
        fx(Xi[0][0],Xi[1][0]);
        /*for(int i=0;i<2;i++)
           for(int j=0;j<1;j++)
            cout<<f[i][j]<<"\n";*/

        InversefDash(Xi[0][0],Xi[1][0]);
        /*for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
            cout<<fd[i][j]<<"\t";*/
            cout<<"\n";
        Multiply();
        /*for(int i=0;i<2;i++)
            for(int j=0;j<1;j++)
            cout<<mult[i][j]<<"\n";*/
        Xin[0][0]=Xi[0][0]-mult[0][0];
        Xin[1][0]=Xi[1][0]-mult[1][0];
        Xi[0][0]=Xin[0][0];
        Xi[1][0]=Xin[1][0];
        cout<<Xin[0][0]<<"\n"<<Xin[1][0]<<"\n";
       flag--;
    }
    cout<<"Root at\n"<<Xin[0][0]<<"\n"<<Xin[1][0]<<"\n";

}
