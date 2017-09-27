// Made by Leonardo Goulart
// IT student Bachelor at UFRN
// implemented in C++ programming language
// Problem five
// find the smaller number that divide all numbers between 1 and 20

#include <iostream>
using namespace std;

bool check  ( int val ) {
    for (int j = 1; j <= 20; j++){
        if(val%j != 0) return false;
    }
    return true;
}

int main() {
    
    int i = 20;
    while (check(i) != true) {
        i++;
    }
    std::cout << i << std::endl;
    return 0;
}




