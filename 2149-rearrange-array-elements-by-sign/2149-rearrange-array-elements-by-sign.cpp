class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        //move all the negative element at the end og the array then swap it
        
        //3 1 -2 -5 2 4 
        int n = nums.size();
        vector<int> ans(n,0);
        int pos = 0;
        int neg = 1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[pos] = nums[i];
                pos += 2;
            }
            else
            {
                ans[neg] = nums[i];
                neg+=2;
            }
        }
        return ans;
//         int i=0;
//         int j = n-1;
//         while(i<j && i<n && j>=0)
//         {
//             if(nums[i]>0 && nums[j]<0)
//             {
//                 i++;
//                 j--;
//             }
//             else if(nums[i]<0 && nums[j]>0)
//             {
//                 swap(nums[i],nums[j]);
//                     i++;
//                 j--;
//             }
//             else if(nums[i]>0 && nums[j]>0)
//             {
//                 i++;
//             }
//             else if(nums[i]<0 && nums[j]<0)
//             {
//                 j--;
//             }
            
//         }
//         //i will be at negative ka first index
//         j = i;
//         i=1;
        
//         while(i<n && j<n)
//         {
//            swap(nums[i],nums[j]);
//             i = i+2;
//             j = j+1;
//         }
//         return nums;
    }
};