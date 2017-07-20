#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &ans)
{
    cout<<"\n\n";
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n\n";
}
int UniqueBST(int n)
{
    vector<vector< int>> ans(n+2, vector<int>(n+1,0));
    ans[0][0] =1;
    ans[1][1] =1;
    ans[n+1][0] =1;
    ans[n+1][1] =1;
    print(ans);
    for(int j=2;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(i<=j)
            {
                if(i!=1 || j!=1)
                {
                    cout<<"ans[n+1][j-i] : "<<ans[n+1][j-i]<<"  ans[n+1][j-1]  "<<ans[n+1][i-1]<<"\n";
                    ans[i][j] = ans[n+1][j-i]*ans[n+1][i-1];
                    ans[n+1][j]+=ans[i][j];
                    print(ans);
                }
            }
        }

    }
    return ans[n+1][n];
}



int main()
{
    int n;
    cin>>n;
    cout<<UniqueBST(n);
}
