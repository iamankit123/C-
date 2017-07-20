#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int MinJump(vector<int> &A,int end)
{
    if(end<=1)
        return 0;
    if(A[0]==0)
        return -1;
    int step=A[0];
    int maxreach = A[0];
    int jump=1;
    for(int i=1;i<end;i++)
    {
        if(i==end-1)
            return jump;
       /* if(i + A[i] ==end-1 )
            return jump;*/
        step--;
        maxreach  = max(maxreach, i+A[i]);
        if(step==0)
        {
            jump++;
            if(i>=maxreach)
                return -1;
            step = maxreach-i;
        }
    }
    return maxreach;
}

int main()
{
    int n;
    cin>>n;
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
   /* cout<<"Press for function call";
    getch();*/
cout<<MinJump(A,A.size());
    return 0;
}
