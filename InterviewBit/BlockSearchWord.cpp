#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

bool IsValid(vector<string> &A, int x,int y, int N, int M,char ch)
{
    if(x<0 || y<0 || x>=N|| y>=M || A[x][y] !=ch)
        return false;
    return true;
}

bool convertOnes(vector<string> &A, int x, int y, int n, int m,string &word,int si)
{
    if(si == word.length()-1)
    {
        if(A[x][y]== word[si])
            return true;
        else
            return false;
    }

        char ch = A[x][y];
        if(IsValid(A,x+1, y,n,m,word[si+1]))
        {
            A[x][y] = '$';
            bool found = convertOnes(A,x+1,y,n,m,word,si+1);
            if(found)
                return found;
            A[x][y] = ch;
        }
        if(IsValid(A,x,y+1,n,m,word[si+1]))
        {
            A[x][y] = '$';
            bool found = convertOnes(A,x,y+1,n,m,word,si+1);
            if(found)
                return found;
            A[x][y] = ch;
        }
        if(IsValid(A,x,y-1,n,m,word[si+1]))
        {
            A[x][y] = '$';
            bool found = convertOnes(A,x,y-1,n,m,word,si+1);
            if(found)
                return found;
            A[x][y] = ch;
        }
        if(IsValid(A,x-1, y,n,m,word[si+1]))
        {
            A[x][y] = '$';
            bool found = convertOnes(A,x-1, y,n,m,word,si+1);
            if(found)
                return found;
            A[x][y] = ch;
        }
        return false;
    //}
}
bool IsWordPresent(vector<string> &A, string &word)
{
    int n = A.size();
    int m = A[0].size();
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(A[i][j] == word[0])
        {
            int si=0;
            if(convertOnes(A,i,j,n,m,word,si))
                return true;
        }
    }
}
return false;
}
int main()
{
    vector<string> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        a.push_back(temp);
    }
    cout<<"\n Enter word to be searched ";
    string word;
    cin>>word;
    cout<<IsWordPresent(a,word);
}
