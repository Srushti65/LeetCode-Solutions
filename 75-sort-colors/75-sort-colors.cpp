class Solution {
public:
    void sortColors(vector<int>& v) 
    {
        int n = v.size();
        int l = 0;
        int m = 0;
        int h = n-1;
        
        while(m<=h)
        {
            if(v[m]==0)
            {
                swap(v[l],v[m]);
                l++;
                m++;
            }
            else if(v[m]==1)
            {
                m++;
            }
            else if(v[m]==2)
            {
                swap(v[m],v[h]);
               
                h--;
            }
            
            
//         int n = a.size();
//         int low =0;
//         int mid = 0;
//         int high = n-1;
        
//         while(mid<=high)
//         {
//             if(a[mid]==0)
//             {
//                 swap(a[low],a[mid]);
//                 low++;
//                 mid++;
//             }
//             else if(a[mid]==1)
//             {
//                 mid++;
//             }
//             else if(a[mid]==2)
//             {
//                 swap(a[mid],a[high]);
//                 high--;
//             }
//         }
        }
    }
};