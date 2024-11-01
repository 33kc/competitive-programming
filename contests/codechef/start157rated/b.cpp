#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin>>t;
    while(t--)
    {
    int n,m; cin>>n>>m;
    string a; cin>>a;
    string b; cin>>b;
    set<char>st;
    for(int i=0;i<a.size();i++) st.insert(a[i]);
    for(int i=0;i<b.size();i++)st.insert(b[i]);
    bool check=true;
    for(char ch='a';ch<='z';ch++)
    {
        if(st.find(ch)==st.end())
        {
            check=false;
            break;
        }
    }
 
    cout << (check ? "no" : "yes")<<endl;
 
 
    }
    return 0;

}
