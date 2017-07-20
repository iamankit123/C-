#include<bits/stdc++.h>
using namespace std;
void AddEdge(vector<int> edge[], int x, int y)
{
    edge[x].push_back(y);
    edge[y].push_back(x);
}


void DFS(vector<int> edge[])
{

    map<int, bool> m;
    queue<int> q;
    q.push(0);
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        cout<<top<<" ";
        for(int i=0;i<edge[top].size();i++)
        {
            q.push(edge[top][i]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> edge[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter vertex connected to (-1 to exit):"<<i;
        int temp;
        cin>>temp;
        while(temp!=-1)
        {
            AddEdge(edge, i, temp);
            cin>>temp;
        }

    }
    DFS(edge);
    return 0;
}
