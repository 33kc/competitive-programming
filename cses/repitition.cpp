#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s; cin>>s;
	int n = 1,c = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[i-1])
		{
			c = max(c, n);
			n = 1;
		}
		else n++;
	}
	cout << max(c,n) << '\n';
	return 0;
}
