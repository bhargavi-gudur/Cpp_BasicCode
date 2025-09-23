#include <iostream>
using namespace std;

int const n = 10;

class Base {
public:
    int b_var;
};

int main() {
    Base *bp = new Base[n];   // allocate an array of Base objects

    delete[] bp;              // delete the entire array safely

    return 1;
}