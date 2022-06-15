#include <iostream>
#include <array>

int main(){

    std::array<float, 4> f_arr_{1.5, 2.3, 5.1, 8.9};
    std::cout << "Last element : " << f_arr_.back() << std::endl;
    return 0;

}
