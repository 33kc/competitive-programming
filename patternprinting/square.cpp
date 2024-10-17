#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 16; i++)
    {
        cout<<"*";
        if (i % 4 == 0) cout<<"\n";
    }
}
