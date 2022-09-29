class Solution {
public:
    double func(double x, long n)
    {
        double ans = 1;
        while(n>0)
        {
            if(n%2==0)
            {
                x = x*x;
                n = n/2;
            }
            else
            {
                ans = ans*x;
                n = n-1;
            }
        }
        return ans;
    }
    double myPow(double x, int nn) 
    {
        //corner cases
        long n = nn;
        
        if(x==0) return 0;
        if(n==0) return 1;
        if(n==1) return x;
        if(n<0)
        {
            {
                n = (-1)*n;
                return 1/func(x,n);
            }
        }
        //main
        double ans = func(x,n);
        return ans;
    }
};