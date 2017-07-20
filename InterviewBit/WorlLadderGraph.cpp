#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
 int IsDistOne(string s1, string s2)
 {
     int len = s1.length();
     int difference =0;
     for(int i=0;i<len;i++)
     {
         if(s1[i] != s2[i])
         {
             difference++;
         }

     }
     /*if(difference==1);
        return true ;
     else
        return false;*/
        return difference;
 }

 /*int WordLadder(vector<string> &dict, string start, string end,map<string, bool> &visited)
 {
     if(IsDistOne(start, end)==1)
     {
          cout<<" Base Case : ";
          cout<<" start : "<< start<<", end : "<<end<<endl;
          getch();
          return 1;

     }

        int flag =0;
    for(int i=0;i<dict.size();i++)
    {
        cout<<" dict["<<i<<"]  "<<dict[i]<<", start : "<<start<<", end : "<<end<<endl;
        getch();
        if(IsDistOne(dict[i], start)==1 && ((visited.count(dict[i])==0)|| visited[dict[i]] ==false))
        {
            cout<<" condition TRUE  \n";
            getch();
            flag = 1;
            visited[dict[i]] =true;
            int tempdist = WordLadder(dict,dict[i],end,visited);
            if(tempdist!=-1)
                return tempdist+1;
            else
                continue;

        }
    }
    if(flag==0)
        return -1;
 }*/
struct item
{
    string s;
    int len;
};
 int WordLadder(vector<string> &dict, string start, string end)
 {

 queue<item> q;
 item word = {start,1};
 q.push(word);
 //int count=0;
 while(!q.empty())
 {
     item curr = q.front();
     q.pop();
     for(int i=0;i<dict.size();i++)
     {
         if(IsDistOne(dict[i], curr.s))
         {
             word.s=dict[i];
             word.len = curr.len+1;
             //q.push(dict[i]);
             q.push(word);
            // count++;
             if(dict[i] == end)
                return word.len;
             dict.erase(dict.begin()+i);


         }
     }

 }
 return 0;
 }
    int ladderLength(string start, string end, vector<string>& dict) {
 queue<string> q;
 /*item word ;
        word.s = start;
        word.len =1;
 q.push(word);*/
 q.push(start);
 int count=0;
 while(!q.empty())
 {
     string temp = q.front();
     q.pop();
     for(int i=0;i<dict.size();i++)
     {
         if(IsDistOne(dict[i], temp))
         {
             /*word.s=dict[i];
             word.len = curr.len+1;*/
             q.push(dict[i]);
            // q.push(word);
            count++;
             if(dict[i] == end)
                return count;
             dict.erase(dict.begin()+i);


         }
     }

 }
 return 0;
};

int main()
{
    vector<string> dict;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        dict.push_back(temp);
    }
    string start,end;
    cout<<"Enter Start and end words ";
    cin>>start;
    cin>>end;
    cout<<ladderLength(start,end,dict);
}
