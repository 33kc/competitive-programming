#include<iostream>
using namespace std;

int main()
{
    int k = 0; // (i+j) % 2 == 0
    for (int i = 1; i <= 5; i++)
    {
        k = 1;
        for ( int j =1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i && k) {cout << "8"; k= 0;}
            else {cout<< " "; k = 1;}
        }
        cout<<"\n";
    }
}
