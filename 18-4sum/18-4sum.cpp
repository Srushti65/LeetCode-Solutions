#include<vector>

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) 
    {
        /*
         int n = nums.size();
        if(n<4) return {};
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                int ptr1=j+1, ptr2=n-1;
                while(ptr1<ptr2){
                    if((long long)nums[i]+nums[j]+nums[ptr1]+nums[ptr2]==target){
                        vector<int> temp{nums[i], nums[j], nums[ptr1], nums[ptr2]};
                        ans.push_back(temp);
                        while(ptr1<ptr2 and nums[ptr1]==temp[2]) ptr1++;
                        while(ptr1<ptr2 and nums[ptr2]==temp[3]) ptr2--;
                    }
                    else if((long long)nums[i]+nums[j]+nums[ptr1]+nums[ptr2]<target)
                        ptr1++;
                    else ptr2--;
                }
                while(j<n-1 and nums[j]==nums[j+1]) j++;
            }
            while(i<n-1 and nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
        */
        sort(a.begin(), a.end());
        vector<vector<int>> op;
        int n = a.size();
        if(n==0) return op;
        
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int start = j+1;
                int end = n-1;
                long long int target2 = (long long int)target - a[i] - a[j];
                while(start < end)
                {
                    long long int twosum = (long long int)a[start] + (long long int)a[end];
                    if(twosum==target2)
                    {
                        vector<int> t(4,0);
                        t[0] = a[i];
                        t[1] = a[j];
                        t[2] = a[start];
                        t[3] = a[end];
                        op.push_back(t);
                        
                        while(start<end && a[start]==t[2]) start++;
                        while(start<end && a[end]==t[3]) end--;
                    }
                    else if(twosum<target2)
                    {
                        start++;
                    }
                    else
                    {
                        end--;   
                    }
                }
                while(j+1<n && a[j]==a[j+1]) j++;
                
            }
            while(i+1<n && a[i]==a[i+1]) i++;
        }
        return op;
        
    }
};