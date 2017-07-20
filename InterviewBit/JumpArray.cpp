#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

bool isPossible(vector<int> A, int start, int end)
{
    if(start==end )
        return true;
    if(A[start]==0)
        return false;
    for(int i=start+1;i<=end && i<=start+A[start];i++)
    {
        getch();
        cout<<i<<" "<<end<<"\n";
        if(isPossible(A,i,end))
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    cout<<"Press for function call";
    getch();
   if(isPossible(A,0,A.size()-1))
        cout<<" Yes";
    else
        cout<<" Not Possible";
    cin>>n;
    }
    return 0;
}
