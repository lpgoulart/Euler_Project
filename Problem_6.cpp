// Made by Leonardo Goulart
// IT student Bachelor at UFRN
// implemented in C++ programming language
// Problem six
// square of the sum minus the sum of squares

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum = 0;
    int sumsq = 0;
    
    for (int i = 1; i <= 100; i++) {
        sum += i;
        sumsq += pow(i,2);
    }
    sum = pow(sum,2);
    cout << sum - sumsq << endl;
    return 0;
}


