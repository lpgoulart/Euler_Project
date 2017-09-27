#include <iostream>
using namespace std;

bool check ( int val ) {
    for ( int i = 2; i < val; i++ ){
        if(val%i == 0) return false;
    }
    return true;
}

int main() {
    int index = 3;
    int cont = 1;
    while (1) {
        if ( check(index) == true ) {
            cont++;
        }
        if(cont == 10001) break;
        index++;
    }
    cout << index << endl;
    return 0;
}


