#include<bits/stdc++.h>
using namespace std;

int nCr(int n,int r)
{
    int c[n+1][r+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,r);j++)
        {
            if(i==j || j==0)
                c[i][j]=1;
            /*else if(i==0)
            {
                c[i][j] =1;
            }*/
            else
            {
                c[i][j] = c[i-1][j-1]+c[i-1][j];
            }
        }
    }
    return c[n][r];
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<" nCr = "<<nCr(n,r);
}
