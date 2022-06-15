#include <iostream>
#include <vector>

int main(){

    std::vector<int> empty_vec_{};
    std::cout << "Array empty : " << empty_vec_.empty() << std::endl;

    std::vector<int> full_vec_{1,2,3,4,5};
    std::cout << "Array empty : " << full_vec_.empty() << std::endl;

    return 0;
    
}
