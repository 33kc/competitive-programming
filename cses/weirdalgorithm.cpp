#include <iostream>
using namespace std;
 
int main()
{
    long n; cin>>n;
    cout<<n;
    while(n>1)
    {
        if(n%2!=0)n=n*3+1;
        else n/=2;
        cout<<" "<<n;
    }