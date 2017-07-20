
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
vector<vector<int> > prettyPrint(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int a[2*n-1][2*n-1];
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            a[i][j] = 0;
        }
    }


    int temp = n;
    vector<vector<int>> v;
    int up =0,down =2*n-2,left = 0,right = 2*n-2;
    for(int temp =n;temp>0;temp--)
    {
        for(int j=left;j<=right;j++)
        {
            a[up][j] = temp;
        }
        up++;
        for(int j=up;j<=down;j++)
        {
            a[j][right] = temp;
        }
        right--;
        for(int j=right;j>=left;j--)
        {
            a[down][j] = temp;
        }
        down--;
        for(int j=down;j>=up;j--)
        {
            a[j][left] = temp;
        }
        left++;

    }
    for(int i=0;i<2*n-1;i++)
    {

        vector<int> t;
        for(int j=0;j<2*n-1;j++)
        {
            t.push_back(a[i][j]);
        }
        v.push_back(t);

    }
    return v;
}


int main()
{

    vector<vector<int>> a;
    int n;
    cin>>n;
    vector<vector<int>> ans = prettyPrint(n);
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

/*int temp = 0;
    for(int i=0;i<2*n;i++)
    {
       int j=0;
            if(i < A)
            {int count = A;
            int flag = 1;
                for(int k=0;k<i;k++,j++)
                {
                    a[i][j] = count--;
                    flag = 0;
                }
                if(flag ==0)
                {
                    count++;
                }
                for(int k=i;k<n-i;k++,j++)
                {
                    a[i][j] = count++;
                }
                count++;
                for(int k=n-i;k<2*n-i;k++,j++)
                {
                    a[i][j] = count;
                }
                temp = i;
            }
            else
            {int count = A;
            int flag = 1;
                temp-=2;
                for(int k=0;k<=temp;k++,j++)
                {
                    a[temp][j] = count--;
                    flag = 0;
                }
                if(flag ==0)
                {
                    count++;
                }
                for(int k=temp+1;k<n-temp;k++,j++)
                {
                    a[temp][j] = count++;
                }
                for(int k=n-temp;k<n;k++,j++)
                {
                    a[temp][j] = n;
                }
                temp--;
            }

    }

    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        vector<int> m;
        for(int j=0;j<n;j++)
        {
            m.push_back(a[i][j]);
        }
        v.push_back(m);
    }*/

