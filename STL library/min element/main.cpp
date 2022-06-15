#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> v{3,1,4,1,0,5,9};
    
    auto result = std::min_element(v.begin(), v.end());
    auto min_location = std::distance(v.begin(), result);

    std::cout << "min at : " << min_location << std::endl;

    return 0;
    
}
