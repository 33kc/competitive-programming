#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,k; cin>>x>>y>>k;
    cout<<(abs(x-y) <= k ? "Yes" : "No");
}
