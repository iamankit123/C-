#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int fibSum(vector<int> &fib, int num,int &lastindexfib)
{
    if(num==1 || num==2)
    return 1;
    if(num==0)
    return 0;

    int n = fib.size();
    int i=lastindexfib;
    while(i>=0 && fib[i]>num)
    {
        i--;
    }
    lastindexfib = i;
    cout<<" fib[i] "<<fib[i] <<" num "<<num<<endl;
    getch();
    int mincount = fibSum(fib,num-fib[i],lastindexfib);
    return mincount+1;
}
int fibsum(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(1);
    int num = 0;
    int i=2;
    cout<<"fib : ";
    while(num<=A)
    {
        num = fib[i-1] + fib[i-2];
        cout<<num<<" ";
        if(num<=A)
            i++;
        fib.push_back(num);
    }
    getch();
    int lastindexfib = fib.size()-1;
    return fibSum(fib,A,lastindexfib);
}
 int main()
 {
     int n;
     cin>>n;
     cout<<fibsum(n);
     return 0;
 }
