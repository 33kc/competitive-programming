#include <iostream>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int minimum = a[0];
        for(int i=0;i<n;i++) minimum = min(a[i], minimum);
        int count = 0;
        for(int i=0;i<n;i++) if(a[i] == minimum) count++;
        cout<<n-count<<endl;
    }

}
