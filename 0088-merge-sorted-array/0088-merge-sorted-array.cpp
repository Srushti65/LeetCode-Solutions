class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int size = m+n;
        for(int i=m,j=0;i<m+n && j<n;i++,j++)
        {
            nums1[i] = nums2[j];
        }
        
        int gap = (m+n)/2;
        
        while(gap>0)
        {
            int i=0; 
            int j = gap;
            while(i<m+n && j<m+n)
            {
                if(nums1[i]>nums1[j])
                {
                    swap(nums1[i],nums1[j]);
                }
                    i++;
                    j++;
            }
            if(gap==1) break;
            if(gap%2==0) 
                gap = gap/2;
            else 
                gap = gap/2+1;
        }
//         return nums1;
        
    }
};