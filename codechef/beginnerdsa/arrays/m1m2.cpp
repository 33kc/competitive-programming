#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++) cin>>a[i];
        int m1 = a[0], m2 = 0;
          for (int i = 0; i < n; i++) {
            if (a[i] > m1)
            { 
                m2 = m1;
                m1 = a[i];
            } else if (a[i] > m2 && a[i] < m1) 
            {
                m2 = a[i];
            }
        }
        cout << m1 + m2 << endl;
    }
}
