#include <iostream>

int main(){

    int some_number;
    std::cout << "Please input any number : " << std::endl;
    std::cin >> some_number ;
    std::cout << "Number : " << some_number << std::endl;
    std::cerr << "Boring error message" << std::endl;

    return 0;
}
