class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) 
    {
        int r = mat.size();
        int c = mat[0].size();
        if(r==1 && c==1) return (target==mat[0][0]);
        
        int low = 0;
        int high = r-1;
        int col;
        if(r==1) 
            col=0;
        else
        {
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            
            if(mat[mid][0]==target)
            {
                return true;
            }
            else if(mat[mid][0]<target)
            {
                col = mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        }
        
        low = 0;
        high = c-1;
        
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(mat[col][mid]==target)
            {
                return true;
            }
            else if(mat[col][mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high= mid-1;
            }
        }
        return false;
    }
};