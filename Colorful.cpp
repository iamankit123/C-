#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int digits(int num)
{
    int count=0;
    while(num>0)
    {
        num/=10;
        count++;
    }
    return count;
}
int colorful(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unordered_map<int,int> m;
    int len = digits(A);
    int temp = A;
    int arr[len];
    int prod = 1;
    for(int i=0;i<len;i++)
    {
        arr[len-i-1] = temp%10;
        temp=temp/10;
    }

    for(int i=1;i<=len;i++)
    {
        int lastindex = i-1;
        prod =1;
        for(int j=0;lastindex<len;j++,lastindex++)
        {
            prod =1;
            for(int k=j;k<=lastindex;k++)
            {
                prod*=arr[k];
                cout<<arr[k]<<" ";
            }
            cout<<"Product : "<<prod<<" \n";
            if(m.count(prod) ==0)
        {
            m[prod] =1;
        }
        else
             return 0;
        }
        if(m.count(prod) ==0)
        {
            m[prod] =1;
        }
        else
             return 0;
    }
    return 1;

}
int main()
{
    int n;
    cin>>n;
    cout<<"\n"<<colorful(n);
    return 0;
}
