class Solution {
public:
    int mySqrt(int x) {

        int n=1;

        if (x==0)
        return 0;

        while (n<=x/n)
        n++;
        return n-1;
    }
    
};