#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    
    while (T--) 
    {
        int n, x;
        cin >> n >> x;
        int e = n / 2;
        int o = n - e;
        if (x % 2 == 0) cout << e - 1 << endl;
        else cout << o - 1 << endl;
        
    }
    return 0;
}
