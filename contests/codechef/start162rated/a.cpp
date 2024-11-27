#include <iostream>
using namespace std;

int main() 
{
    int X, Y, Z; cin >> X >> Y >> Z;
    int k = Y * Z;
    if (k > X) cout << -1 << endl;
    else cout << X - k << endl;
    

    return 0;
}
