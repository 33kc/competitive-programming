#include<iostream>
using namespace std;

int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];
        int happyDays = 0;
        
        for (int k = 0; k < n; k++)
        {
            if( a[k] <= 2 * b[k] && b[k] <= 2 * a[k] ) happyDays++;
            
        }
        
        cout<< happyDays << endl;
    }
}
