#include <iostream>
#include <string>
#include <vector>

int main(){

    std::string str = "Hello";
    std::vector<std::string> v; 

    //uses the push_back(const T&&) overload, which means we'll incur the cost of copying str

    v.push_back(str);
    std::cout << "After copy, str is " << str << std::endl;

    //uses the rvalue reference push_back(T&&) overload, which means no strings will be copied; intstead, the contents of str will be moved into the vector. This is less expensive, but also means str might now be empty

    v.push_back(move(str));
    std::cout << "After move, str is " << str << std::endl;   

    return 0;

}
