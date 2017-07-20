#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int i=0;
/*int MaxDistTree(vector<int> &v,int root,int n,int si,int &depth )
{
    cout<<" function call : "<<++i;
    if(si==n-1)
        return 0;
    int i;
    if(root!=-1)
    {
        while(v[i]!=root && i<n)
        i++;
    }

    if(i==n)
        return 0;
    int maxdepth = INT_MIN;
    int maxdepth2 = INT_MIN;
    int maxdist = INT_MIN;
    cout<<" root : "<<root<<endl;
    getch();
    for(i=si;v[i]==root;i++)
    {
        int tempdepth = depth;
        int tempdist = MaxDistTree(v,si,n,si,tempdepth);
        if(tempdepth > maxdepth)
        {
            maxdepth2 = maxdepth;
            maxdepth = tempdepth;
        }
        if(tempdepth < maxdepth && tempdepth > maxdepth2)
        {
            maxdepth2 = tempdepth;
        }
        if(tempdist > maxdist)
        {
            maxdist;
        }
    }
    depth = max(maxdepth,maxdepth2)+1;
    return max(maxdepth+maxdepth2+2,maxdist);
}*/
pair<int,int> ans;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int depth = 0;
    cout<<"Press Enter to call function";
    getch();
    cout<<MaxDistTree(v,-1,n,0,depth);

}
