#include <iostream>
#include <algorithm>
using namespace std;

bool isFascinating(int x) 
{
    string s;
    for (int i = 1; i <= 3; i++) s += to_string(x * i); 
    if (s.size() != 9) return false;
    sort(s.begin(), s.end());
    return s == "123456789";
}

int main()
{
    int x; cin >> x;
    cout << ((isFascinating(x)) ? "It's a fascinating number" : "It's not a fascinating number");

    return 0;
}
