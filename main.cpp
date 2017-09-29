#include <iostream>
#include "MyMatrix.h"

using namespace std;

int main() {
    MyMatrix M1(4,5,"Random");
    MyMatrix M2(4,5, "Random");
    MyMatrix M3(4,5);

    M3 = M1+M2;

    cout<<M3;
    return 0;
}