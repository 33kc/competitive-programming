#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        char s[6], t[6];
        string m = "";
        cin >> s >> t;
        
        for ( int i = 0; i < 5; i++)
        {
            (t[i] == s[i]) ? m+="G" : m+="B";
        }
        
        cout<<m<<endl;
    }
    
    return 0;
}
