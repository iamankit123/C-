#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
unordered_map<string, int> mapreturn(string s,vector<string> v)
{
    unordered_map<string ,int> m;
    for(int i=0;i<v.size();i++)
{
    if(m.count(v[i]) ==0)
    {
        m[v[i]] =1;
    }
    else
    {
        m[v[i]]++;
    }
}
return m;
}
vector<int> SubstringConcatenation(string s, vector<string> v)
{
unordered_map<string ,int> m =mapreturn(s,v);
vector<int> ans;
int llen = v.size();
int wlen = v[0].length();
int startindex=0;
for(int i=0;i<(s.size()-wlen+1);i++)
{
    startindex=i;
    string temp;
    int j;
    temp = s.substr(i,wlen);
    if(m.count(temp) ==0 || m[temp] ==0)
    {
       m = mapreturn(s,v);
        continue;
    }
    else
    {
        int flag=1;
        startindex =i;

        for(int k=i,count=0;count<llen /*&& k+wlen < s.length()*/;count++,k+=wlen)
        {
            if(m.count(s.substr(k,wlen))==0 || m[s.substr(k,wlen)]==0)
            {
                flag=0;
                break;
            }
            else
            {
                m[s.substr(k,wlen)]--;
            }
        }
        if(flag==1)
        {
            ans.push_back(startindex);
            m=mapreturn(s,v);
        }
        else
        {
            m=mapreturn(s,v);
        }
    }
}
return ans;

}
int main()
{
    string s;
    cin>>s;
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int> ans = SubstringConcatenation(s,v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}
