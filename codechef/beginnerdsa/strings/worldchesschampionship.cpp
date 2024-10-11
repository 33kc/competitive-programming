#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() 
{
    int T;
    cin >> T;  
    while (T--) 
    {
        int X;
        cin >> X;  
        string S;
        cin >> S;  
        unordered_map<char, int> scoreMap = 
      {
            {'C', 2}, 
            {'N', 2}, 
            {'D', 1}  
        };
        int carlsenPoints = 0, chefPoints = 0;
        for (char result : S) 
        {
            if (result == 'C') 
                carlsenPoints += scoreMap['C'];
            else if (result == 'N') 
                chefPoints += scoreMap['N'];   
            else if (result == 'D') 
            {
                carlsenPoints += scoreMap['D'];   
                chefPoints += scoreMap['D'];    
            }
        }
        int prizeMoney;
        if (carlsenPoints > chefPoints) {
            prizeMoney = 60 * X; 
        } 
        else if (chefPoints > carlsenPoints) 
        {
            prizeMoney = 40 * X; 
        } 
        else 
        {
            prizeMoney = 55 * X;  
        }

        cout << prizeMoney << endl; 
    }

    return 0;
}
