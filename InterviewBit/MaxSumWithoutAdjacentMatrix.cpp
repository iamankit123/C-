#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int maxsum2(vector<vector<int>> A,int n)
{
    int inc = max(A[0][0],A[1][0]);
    int exc =0;
    for(int i=1;i<n;i++)
    {
        int temp = max(inc,exc);
        inc = exc+max(A[0][i] , A[1][i]);
        exc = temp;
    }
    return max(inc,exc);
}
int main()
{
    int n;
	    cin>>n;
	    vector<vector<int>> A;

	    for(int i=0;i<2;i++)
	    {
	        vector<int> temp;
	        for(int j=0;j<n;j++)
            {
                int temp1;
                cin>>temp1;
                temp.push_back(temp1);
            }
            A.push_back(temp);
	    }

	    cout<<maxsum2(A,n);
    return 0;
}
