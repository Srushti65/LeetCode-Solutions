//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array.
    // void print(vector<pair<int,int>> &v)
    // {
    //     int n = v.size();
    //     for(auto i : v)
    //     {
    //         cout<<i.first<<" "<<i.second<<endl;
    //     }
    // }
	int minSwaps(vector<int>&nums)
	{
	    int n = nums.size();
	    int count = 0;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        
        int index = 0;
        while (index<n)
        {
            if(index<n && v[index].second==index)
            {
                index++;
            }
            else
            {
                swap(v[index],v[v[index].second]);
                count++;
            }
        }
        return count;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends