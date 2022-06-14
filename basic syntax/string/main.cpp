#include <iostream>
#include <string>

int main(){

    const std::string source{"Copy this!"};
    std::string destination = source;

    std::cout << source << '\n';
    std::cout << destination << '\n';

    return 0;
}
