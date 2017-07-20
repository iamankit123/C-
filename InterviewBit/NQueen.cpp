#include <bits/stdc++.h>

using namespace std;

//const int N = 4;
vector<vector<string>> ans;
int fsol(vector<string> &sol,int x, int y,int N);

void print(vector<string> &sol,int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<sol[i][j]<<"";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

int checkcoord(int x, int y,int N)
{
    if(x>=0&&y>=0&&x<N&&y<N)
        return 1;
    return 0;
}

int is_safe(vector<string> &sol, int y, int x,int N)
{
    if(x<0||x>=N||y<0||y>=N||sol[x][y]=='Q')
        return 0;
    for(int i=0;i<N;i++)
    {

        /* Check for Queen presence in same row and column as x,y
        */
        if(sol[i][y]=='Q')
            return 0;
        if(sol[x][i]=='Q')
            return 0;
            /*Check for Queen presence in diagonals
            */
        int xp = x+i;
        int xm = x-i;
        int yp = y+i;
        int ym = y-i;
        if(checkcoord(xp,yp,N))
        {
            if(sol[xp][yp]=='Q')
                return 0;
        }
        if(checkcoord(xp,ym,N))
        {
            if(sol[xp][ym]=='Q')
                return 0;
        }
        if(checkcoord(xm,yp,N))
        {
            if(sol[xm][yp]=='Q')
                return 0;
        }
        if(checkcoord(xm,ym,N))
        {
            if(sol[xm][ym]=='Q')
                return 0;
        }

    }
    return 1;
}
int fsol(vector<string> &sol,int column,int row,int N)
{
    if(column>=N)
    {
        ans.push_back(sol);
        return 1;
    }
    int flag=0;
    for(int row=0;row<N;row++)
    {
        if(is_safe(sol,column,row,N))
        {
            sol[row][column]='Q';
           /* print(sol);
            cout<<"column "<<column;
            cout<<" k "<<k;
            cout<<"\n\n";*/
            if(fsol(sol,column+1,row,N))
                flag=1;
            sol[row][column]='.';
            //else

        }

    }
    if(flag==0)
    return 0;
}

int main()
{
    cout << "----N Queen problem----" << endl;
    cout<<" Place N Queens on N*N chess board so that no 2 Queens threaten each other \n";
    int n;
    cin>>n;
    vector<string> sol;
    for(int i=0;i<n;i++)
    {
        string temp ;
        for(int j=0;j<n;j++)
        {
            temp+='.';
        }
        sol.push_back(temp);
    }
    if(fsol(sol,0,0,n)==0)
    {
        cout<<" No Possible solution ";
        return 0;
    }
    for(int i=0;i<ans.size();i++)
    {
        sol = ans[i];
        print(sol,n);
        cout<<"\n";
    }

    /*int ch = psol();
    if(ch==0)
    {
        cout<<"\n\t SORRY  !!!!! ";
    }*/
        cout<<"\n Congrats !! you got answer ";
    return 0;
}
