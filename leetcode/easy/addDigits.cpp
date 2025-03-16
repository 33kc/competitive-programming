class Solution {
public:
    int addDigits(int num) 
    {
        int ds = 0;
        while(num>0)
        {
            ds+=num%10;
            num/=10;
        }
        if (ds < 10) return ds;
        else return addDigits(ds);
    }
};
