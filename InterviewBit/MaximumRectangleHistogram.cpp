#include<bits/stdc++.h>
using namespace std;
int MaxRec(vector<int> &A)
{
    int maxarea=-1;
    int top;
    stack<int> s;
    int i=0;
    for(i=0;i<A.size();)
    {
        int area;
        if(s.empty() || A[s.top()] <= A[i])
        {
            s.push(i++);
        }
        else
        {
                int temp = s.top();
                s.pop();
                if(s.empty())
                {
                    area = A[temp]*(i);
                }
                else
                {
                    area = A[temp]*(i-s.top()-1);
                }
                if(area > maxarea)
                {
                    maxarea = area;
                }
        }
    }
    int area;
    while(!s.empty())
            {
                int temp = s.top();
                s.pop();
                if(s.empty())
                {
                    area = A[temp]*(i);
                }
                else
                {
                    area = A[temp]*(i-s.top()-1);
                }
                if(area > maxarea)
                {
                    maxarea = area;
                }
            }
            return maxarea;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<" Maximum area is : "<<MaxRec(a);
}
