#include<bits/stdc++.h>
using namespace std;
int Merge(vector<int> &A, vector<int> &temp, int start, int mid, int end)
    {
        int a1=start;
        int a2=mid;
        int a=start;
        int count=0;
        while(a1<=mid-1 && a2<=end)
        {
            if(A[a1] <= A[a2])
            {
                temp[a++] = A[a1++];
            }
            else
            {
                temp[a++] = A[a2++];
                count+=mid-a1;
            }
        }
        while(a1<=mid-1)
        {
             temp[a++] = A[a1++];
        }
        while(a2<=end)
        {
            temp[a++] = A[a2++];
        }
        for(int i=start;i<=end;i++)
        {
            A[i] = temp[i];
        }
        return count;
    }
    int MergeSort(vector<int> &A, vector<int> &temp, int start, int end)
    {
        int mid , count=0;
        if(start<end)
        {
            mid =(start+end)/2;
            count=MergeSort(A,temp,start,mid);
            count+=MergeSort(A,temp, mid+1,end);

            count+=Merge(A,temp, start,mid+1,end);
        }
        return count;
    }

    int countInversions(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> temp;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        temp.push_back(A[i]);
    }
    return MergeSort(A,temp,0,n);
}
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    cout<<" No. of inversions are :"<<countInversions(A);
    cout<<"\n\n Enter next size ";
    cin>>n;
    }
    return 0;
}
