class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        int n = stones.size();
        
        priority_queue<int> heap;
        
        for(int i=0;i<n;i++)
        {
            heap.push(stones[i]);
        }
        
        int f,s;
        while(n>=2)
        {
            f = heap.top();
            heap.pop();
            s = heap.top();
            heap.pop();
            
            if(f!=s)
            {
                heap.push(abs(f-s));
                n+=1;
            }
            n-=2;
        }
        if(n==0) return 0;
        return heap.top();
        
    }
};