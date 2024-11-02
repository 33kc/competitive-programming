class Solution 
{
public:
    bool checkRecord(string s) 
{
        int a = 0;
        bool p = true;
        int c = 0;
        int t = s.length();

        for(int i=0;i<s.length();i++)    
        {
            if(s[i]!='L') c=0;
            if(s[i]=='A') a++;
            else if(s[i]=='L') c++;
            if(c==3) p=false;
            
        } 

        if(p && a<2) return true;
        
        return false;
    }
};
