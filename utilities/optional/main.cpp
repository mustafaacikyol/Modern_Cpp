#include <iostream>
#include <optional>
#include <string>

std::optional <std::string> StringFactory(bool create){

    if (create)
    {
        return "Modern C++ is awesome";
    }

    return{};
    
}

int main(){

    std::cout << StringFactory(true).value() << '\n';
    std::cout << StringFactory(false).value_or("(:") << '\n';

    return 0;

}
