// what is up with all the problems on codechef related to arrays under 1000 difficulty :sob: (non-premiun)
#include<iostream>
using namespace std;

int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        int max = arr[0];
        for (int i = 0; i <n; i++) if (arr[i] > max) max = arr[i];
        cout<<max<<endl;
    }
}
