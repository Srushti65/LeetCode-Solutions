//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends

bool bs(int start, int end, int arr[], int target, int n)
{
    // int n=arr.size();
    if(start<0 || end>=n) return 0;
    
    int l=start;
    int h = end;
    while(l<=h)
    {
        int mid = l + (h-l)/2;
        if(arr[mid]==target)
            return 1;
        else if(arr[mid]<target)
        {
            l = mid+1;
        }
        else
        {
            h = mid-1;
        }
    }
    return 0;
}
bool findPair(int arr[], int size, int n)
{
    //code
    sort(arr,arr+size);
    for(int i=0;i<size-1;i++)
    {
        int target = n + arr[i];
        // cout<<target<<endl;
        int start = i+1;
        int end = size-1;
        if(bs(start,end,arr,target,size))
            return 1;
    }
    return 0;
    
}