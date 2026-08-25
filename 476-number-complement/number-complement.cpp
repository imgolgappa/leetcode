class Solution {
public:
    int findComplement(int num) {

        if(num==0)
        return 1;

        long long  mul=1;
        bool rem;
        int ans=0;


        while(num>0)
        {
            rem=num%2;
            rem=rem^1;
            num/=2;
            ans=ans+ rem*mul;
            mul*=2;

        
        }
        return ans;
        
    }
};