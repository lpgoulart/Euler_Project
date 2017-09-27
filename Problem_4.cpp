// Made by Leonardo Goulart
// IT student Bachelor at UFRN
// implemented in C++ programming language
// Problem four
// the bigest palindrom number

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int big = 0;
    
    for(int i = 901; i <= 999; i++) {
        for(int j = 902; j <= 999; j ++) {
            std::string normal = std::to_string(i*j);
            std::string copy(normal);
            std::reverse(copy.begin(), copy.end());
            if( normal == copy ) {
                big = i*j;
            }
            
        }
    }
    std::cout << big << std::endl;
    return 0;
}



