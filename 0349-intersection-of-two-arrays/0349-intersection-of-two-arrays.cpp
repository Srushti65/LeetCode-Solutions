class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> op;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        
        int i=0;
        int j=0;
        int ref = INT_MAX;
        while(i<n && j<m)
        {
            if(nums1[i]==nums2[j] && nums1[i]!=ref)
            {
                op.push_back(nums1[i]); 
                // while(i+1<n && nums1[i]==nums1[i+1]) i++;
                ref = nums1[i];
                i++;
                j++;
                // while(j+1<m && nums2[j]==nums2[j+1]) j++;
                
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return op;
        
    }
};