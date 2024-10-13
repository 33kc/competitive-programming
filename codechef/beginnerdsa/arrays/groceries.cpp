#include <iostream>
using namespace std;

int main() 
{
	int t; cin>>t;
	while(t--)
	{
	    int n,x; cin>>n>>x;
	    int a[n];
	    int b[n];
	    for(int i = 0;i<n;i++) cin>>a[i];
	    for(int i = 0;i<n;i++)cin>>b[i];
	    int total = 0;
	    for(int i = 0; i < n; i++) if(a[i]>=x)total+=b[i];
	    cout<<total<<endl;
	    
	}
	return 0;
}
