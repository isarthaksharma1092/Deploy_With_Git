class Solution {
public:
    int mySqrt(int x)
    {
        long long int start = 0,end = x,mid,ans;
        
        unsigned long long int square ;
        
        while(start <= end )
        {
            mid = start +(end - start )/2;
            square = mid * mid;
            
            if(square>x){end=mid-1;}
            else if(square<x){ans=mid;start=mid+1;}
            else{return mid;}
        }
        return ans;
    }
};