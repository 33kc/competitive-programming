#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> vec(n+1);
        vector<int> store;
        int a = 0;
        for (int i = 0; i <= n; i++)
        {
            cin>>vec[i];
            a += vec[i];
            if (i == n) continue;
            store.push_back(vec[i]);
        }
        sort(store.begin(), store.end());
        int i = 0, s = vec[n];
        while (i<n)
        {
            if (store[i] <= 2*s && store[i]>s)
            {
                s = store[i];
                i++;
            }
            else i++;
        }
        a -= s;
        cout<< a<< endl;
    }

}
