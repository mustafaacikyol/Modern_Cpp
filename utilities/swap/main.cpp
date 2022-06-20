#include <iostream>

int main(){

    int a = 3;
    int b = 5;

    //before 
    std::cout << a << ' ' << b << '\n';

    std::swap(a,b);

    //after
    std::cout << a << ' ' << b << '\n';

    return 0;

}
