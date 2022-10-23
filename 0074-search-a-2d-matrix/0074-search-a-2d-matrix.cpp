class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int r = matrix.size();
        int c = matrix[0].size();
        
        //corner case
        if(r==1 &&c==1)
        {
            return ( matrix[0][0]==target);
        }
        //numeber of less than
        
        int low = 0;
        int high = r-1;
        int key;
        if(r==1) key=0;
        else
        {
            while(low<=high)
            {
                int mid = low + (high-low)/2;
                if(matrix[mid][0]==target)
                    return true;
                else if(matrix[mid][0]<target)
                {
                    key = mid;
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        //search for target in row no. = key
        
        low = 0;
        high = c-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(matrix[key][mid]==target)
            {
                return true;
            }
            else if(matrix[key][mid] <target)
            {
                low = mid+1;
            }
            else
                high = mid-1;
        }
        return false;
    }
};