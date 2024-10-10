#include <iostream>
#include <unordered_map>

int main() {
    int T;
    std::cin >> T;


    std::unordered_map<std::string, char> dna = {
        {"00", 'A'},
        {"01", 'T'},
        {"10", 'C'},
        {"11", 'G'}
    };

    while (T--) {
        int N;
        std::cin >> N; 
        std::string s;
        std::cin >> s;
        std::string encoded = ""; 
        for (int i = 0; i < N; i += 2) {
            std::string pair = s.substr(i, 2);
            encoded += dna[pair];
        }

        std::cout << encoded << std::endl;  
    }

    return 0;
}
