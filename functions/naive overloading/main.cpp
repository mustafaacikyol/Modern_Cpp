#include <cmath>
#include <iostream>
using namespace std;

int main(){

    double x_double = 0.0;
    float x_float = 0.0;
    long double x_long_double = 0.0;

    cout << "cos(0) = " << cos(x_double) << '\n';
    cout << "cos(0) = " << cosf(x_float) << '\n';
    cout << "cos(0) = " << cosl(x_long_double) << '\n';

    return 0;

}
