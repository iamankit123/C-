#include<bits/stdc++.h>
#include<conio.h>

using namespace std;
void show(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
/*vector<vector<int>> helper(vector<int> &A, int si, int n)
{
    if(si==n-1)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> temp1;
        temp1.push_back(A[si]);
        show(temp);
        getch();
        show(temp1);
        getch();
        ans.push_back(temp);
        ans.push_back(temp1);
        return ans;
    }
    vector<vector<int>> ans = helper(A,si+1,n);
    int length = ans.size();
    for(int i=0;i<length;i++)
    {
        vector<int> temp;
        temp.push_back(A[si]);
        for(int j=0;j<ans[i].size();j++)
        {
            temp.push_back(ans[i][j]);
        }
        show(temp);
        getch();
        ans.push_back(temp);
    }
    return ans;
}*/
void helper(vector<vector<int>> &ans,vector<int> &A, int si, int n)
{
    if(si==n)
    {

        return;
    }


    int length = ans.size();
    if(length ==0|| si==0)
    {
        vector<int> temp;
        vector<int> temp1;
        temp1.push_back(A[si]);
        ans.push_back(temp);
        ans.push_back(temp1);
    }
    else{
        for(int i=0;i<length;i++)
        {
            vector<int> temp;

            for(int j=0;j<ans[i].size();j++)
            {
                temp.push_back(ans[i][j]);
            }

                temp.push_back(A[si]);
                ans.push_back(temp);
        }
    }
   /* vector<int> temp;
    vector<int> temp1;
    temp1.push_back(A[si]);
    ans.push_back(temp);
    ans.push_back(temp1);*/

     helper(ans,A,si+1,n);
}



vector<vector<int> > subsets(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len = A.size();
    vector<vector<int>> ans;
    helper(ans,A,0,len);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    vector<vector<int>> ans = subsets(a);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}
