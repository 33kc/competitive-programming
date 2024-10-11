// 600 difficulty but problem solving is problem solving

#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    bool p = false;
    for (int i = 0; i < n; i++)
    {
        int l; cin>>l;
        if (l == x) p = true;
        
    }
    cout<< (p ? "YES" : "NO");
}
