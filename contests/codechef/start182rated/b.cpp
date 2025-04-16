#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int N;cin>>N;
        string s;cin>>s;
        int countB=0,countG=0,allowed=0;
        for(char c: s)
        {
            if(c=='B') countB++;
            else countG++;
            allowed++;
            if(countB>2*countG)
                break;
        }
        cout<<allowed<<"\n";
    }
    return 0;
}
