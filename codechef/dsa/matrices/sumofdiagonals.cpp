#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n; cin>>n;
	int r[n][n];
	for(int i=0; i<n; i++)
	{
	    for(int j= 0; j<n; j++)cin>>r[i][j];
	}
	int s = 0;
	for(int i=0; i<n; i++)
	{
	    for(int j=0; j<n; j++) if(i==j || i==n-1-j)s += r[i][j];
	}
	cout<<s<<'\n';
}
