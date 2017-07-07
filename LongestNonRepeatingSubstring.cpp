//#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unordered_map<char, int> m;
    int n = a.length();
    if(n==1)
        return 1;
    int currlength=0;
    int maxlength = 1;
    int lastindex =0;

    for(int i=0;i<n;i++)
    {
        if(m.count(a[i]) ==0 || m[a[i]]==0)
        {
            currlength++;
            if(maxlength < currlength)
            {
                maxlength = currlength;
            }
            m[a[i]] =1;
            cout<<a[i]<<" Inside if :"<<currlength<<" \n";
        }
        else
        {
            currlength++;
            while(a[lastindex] && a[lastindex]!=a[i])
            {
                m[a[lastindex]] =0;
                lastindex++;
                currlength--;
            }
               // m[a[lastindex]] =0;
                lastindex++;
                currlength--;
            cout<<a[i]<<" Inside else :"<<currlength<<" \n";
            cout<<"lastindex : "<<a[lastindex]<<"\n";

        }
    }
    return maxlength;

}
int main()
{
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
}
