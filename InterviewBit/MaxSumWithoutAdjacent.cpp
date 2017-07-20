#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int maxsum(int A[],int si, int n,int prev)
{
    if(si==n-1)
    {
        if(prev==1)
            return 0;
        return A[si];
    }
    int ans1 = maxsum(A,si+1,n,0);
    int ans2;
    if(prev==0)
    {
        ans2 = maxsum(A,si+1,n,1) + A[si];
    }
    if(prev==1)
    return ans1;
    else
    return max(ans1,ans2);
}
int maxsum2(int A[],int n)
{
    int inc = A[0];
    int exc =0;
    for(int i=1;i<n;i++)
    {
        int temp = max(inc,exc);
        inc = exc+A[i];
        exc = temp;
    }
    return max(inc,exc);
}
int main()
{
    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    cout<<max(maxsum(A,0,n,0) ,maxsum(A,0,n,1) + A[0] );
	    cout<<maxsum2(A,n);
    return 0;
}
