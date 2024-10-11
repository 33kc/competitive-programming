// this was a pretty interesting problem (using strings for handle long num)
#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        string n;
        cin >> n;
        bool carry = true;
        for (int i = n.size() - 1; i >= 0 && carry; i--) 
        {
            if (n[i] == '9') 
            {
                n[i] = '0';
            } 
            else{
                n[i] += 1;
                carry = false;
            }
        }
        if (carry)
        {
            n = "1" + n;
        }
        cout << n << endl;
    }
    return 0;
}
