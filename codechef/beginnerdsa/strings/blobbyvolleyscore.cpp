#include<iostream>
using namespace std;

int main()
{
    int T; cin >>T;
    string s;
    while (T--)
    {
        int n;
        cin>> n >> s;
        int ap = 0 , bp = 0;
        if (s[0] == 'A') ap++;
        for (int i = 0; i < n; i++)
        {
           if (s[i] == 'A' && s[i + 1] == 'A') ap++;
           else if (s[i] == 'B' && s[i + 1] == 'B') bp++;
            
        }
        cout << ap << " " << bp << endl;
    }
}
