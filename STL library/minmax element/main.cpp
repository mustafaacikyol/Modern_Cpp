#include <iostream>
#include <algorithm>

int main(){


    auto v = {3,9,1,4,2,5,9};
    auto [min, max] = std::minmax_element(begin(v),end(v));

    std::cout << "min = " << *min << std::endl;
    std::cout << "max = " << *max << std::endl;

    return 0;
    
}
