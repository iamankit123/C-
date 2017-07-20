#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
struct petrolPump
{
    int petrol;
    int distance;
};
int tour(petrolPump p[],int n)
{
   //Your code here
   int start=0;
   int sumpetrol=0;
   int sumdist=0;
   int i=0;
   do
   {
    restart:
       sumpetrol+=p[i].petrol;
       sumdist+=p[i].distance;
       getch();
       cout<<" start :"<<start<<"i:  "<<i<<"\n"<<" sumpetrol :"<<sumpetrol<<endl;
       cout<<" sumdistance :"<<sumdist;
       cout<<"\n";
       if(sumpetrol < sumdist)
       {
            if(start==i)
            {
                start = (start+1)%n;
                i=(i+1)%n;
                sumpetrol=0;
                sumdist=0;
                getch();
                cout<<" start :"<<start<<"i:  "<<i<<"\n"<<" sumpetrol :"<<sumpetrol<<endl;
                cout<<" sumdistance :"<<sumdist;
                cout<<"\n";
                continue;
            }
            sumpetrol-=p[start].petrol;
            sumdist-=p[start].distance;
            getch();
                cout<<" start :"<<start<<"i:  "<<i<<"\n"<<" sumpetrol :"<<sumpetrol<<endl;
                cout<<" sumdistance :"<<sumdist;
                cout<<"\n";
            start++;
            getch();
                cout<<" start :"<<start<<"i:  "<<i<<"\n"<<" sumpetrol :"<<sumpetrol<<endl;
                cout<<" sumdistance :"<<sumdist;
                cout<<"\n";
            /*while(sumpetrol < sumdist)
            {
                if(start ==i)
                {
                     start = (start+1)%n;
                    i=(i+1)%n;
                    getch();
                cout<<" start :"<<start<<"i:  "<<i<<"\n"<<" sumpetrol :"<<sumpetrol<<endl;
                cout<<" sumdistance :"<<sumdist;
                cout<<"\n";
                    sumdist=0;
                    sumpetrol=0;
                    goto restart;
                }
                sumpetrol-=p[start].petrol;
                sumdist-=p[start].distance;
                getch();
                cout<<" start :"<<start<<"i:  "<<i<<"\n"<<" sumpetrol :"<<sumpetrol<<endl;
                cout<<" sumdistance :"<<sumdist;
                cout<<"\n";
                start++;
                if(start==n)
                    return -1;
                if(start ==i)
                {
                    if(sumdist > sumpetrol)
                    {
                        start = (start+1)%n;
                        i=(i+1)%n;
                        getch();
                cout<<" start :"<<start<<"i:  "<<i<<"\n"<<" sumpetrol :"<<sumpetrol<<endl;
                cout<<" sumdistance :"<<sumdist;
                cout<<"\n";
                        continue;
                    }
                    else
                        i++;
                    continue;
                }
            }*/
           i++;
           if(start==n)
                return -1;
           if(i==n)
                i=0;
           continue;
       }
       i++;
       if(i==n)
                i=0;
        if(start%n == (i+1)%n)
        {
            getch();
                cout<<" start :"<<start<<"i:  "<<i<<"\n"<<" sumpetrol :"<<sumpetrol<<endl;
                cout<<" sumdistance :"<<sumdist;
                cout<<"\n";
            return start;
        }
   }while(start<n);
   return -1;
}
int main()
{
    int n;
    cin>>n;
    petrolPump p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].petrol;
    }
    for(int i=0;i<n;i++)
    {
        cin>>p[i].distance;
    }
    cout<<tour(p,n);

}
