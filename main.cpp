#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;

    int x = 56;
    int y = 98;
    cout << "GCD of " << x << " and " << y << " = " << nonRecursiveGCD(x, y) << endl;
    cout << "Recursive GCD of " << x << " and " << y << " = " << recursiveGCD(x, y) << endl;
    return 0;
}
