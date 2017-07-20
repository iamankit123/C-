#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int isPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string s;
    cout<<A;
    cout<<"\n";
    int count=0;
    for(int i=0;A[i];i++)
    {
        if((A[i]>='a'&& A[i] <='z') ||(A[i]>='A'&& A[i] <='Z'))
        {
            s[count++] = A[i];
        }


    }
    s[count] = '\0';
    cout<<"s formed ";
    cout<<s;
    getch();
    for(int i=0;i<count/2;i++)
    {
        if(s[i] != s[count-i-1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    string s;
    cin>>s;
    cout<<s;
    getch();
    cout<<isPalindrome(s);
}
