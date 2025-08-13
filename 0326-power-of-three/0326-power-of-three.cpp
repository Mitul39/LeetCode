class Solution {
public:
    bool isPowerOfThree(int n) {
         long ans=1;
       while(ans!=n)
       {
        if(ans>n)
        {
            return false;
        }
            ans=ans*3;
       }
       return (ans==n);
    }
};