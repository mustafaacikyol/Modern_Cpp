#include <iostream>
#include <any>

int main(){

    std::any a;                                                         //any type
    a = 1;                                                              //int
    std::cout << std::any_cast<int>(a) << std::endl;

    a = 3.14;                                                           //double
    std::cout << std::any_cast<double>(a) << std::endl;

    a = true;                                                           //bool
    std::cout << std::boolalpha << std::any_cast<bool>(a) << std::endl;                 

    return 0;

}
