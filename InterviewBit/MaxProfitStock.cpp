#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int MaxProfit(vector<int> &a, int n)
{
    int i=0;
    int profit=0;
    while(i<n-1)
    {
        while(i<n-1 && a[i] >= a[i+1])
        {
            i++;
        }
        cout<<"buy :"<<a[i]<< " i "<<i<<endl;
        getch();
        if(i==n-1)
            {
                return profit;
            }
        profit-=a[i];
        i++;
        while(i<n && a[i] >= a[i-1])
        {
            i++;
        }
        i--;


        profit+=a[i];
        cout<<"sell :"<<a[i]<< " i "<<i << " profit : "<<profit<<"\n";
        getch();
    }
    return profit;
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
cout<<MaxProfit(A,A.size());
    return 0;
}
