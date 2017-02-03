#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
    int n;
    cout<<"No. of Rows\n";
    cin>>n;
    double ar[n][n+1];
    cout<<"Matrix 1\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>ar[i][j];
    cout<<"Matrix 2\n";
    for(int i=0;i<n;i++)
        cin>>ar[i][n];
    int count =0;
    for(int i=1;i<n;)
    {
        for(int j=0;j<n+1;j++)
        {
        ar[i][j]=ar[i][j]-(ar[i][j]/ar[i-1][j])*ar[i-1][j];
        if(ar[i][j]==0)
            count++;
        }
        if (count==i)
            i++;
    }
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n+1;j++)
            cout<<ar[i][j]<<"\t";
        cout<<"\n";
     }
}
