#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &A)
{
    cout<<"\n\n";
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n\n";
    }
    cout<<"\n";
}
void setZeroes(vector<vector<int> > &A) {
    vector<vector<int>> temp = A;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(A[i][j] == 0 && !(i==0 || j==0))
            {
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    print(A);
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if((A[i][0] ==0 || A[0][j] ==0) && A[i][j]!=0)
            {
                A[i][j] =-1;
            }
        }
    }
    print(A);
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(A[i][j] == -1)
            {
                A[i][j] =0;
            }
        }
    }
}
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> A;
    for(int i=0;i<r;i++)
    {
        vector<int> temp;
        for(int j=0;j<c;j++)
        {
            int tmp;
            cin>>tmp;
            temp.push_back(tmp);
        }
        A.push_back(temp);
    }
    setZeroes(A);
    print(A);
}
