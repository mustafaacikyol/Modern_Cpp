#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> nums{3,4,3,8,15,267};

    //lambda expression, lecture_9
    auto print = [](const int& n){ std::cout << " " << n; };

    std::cout<< "Numbers : ";
    std::for_each(nums.begin(), nums.end(), print);
    std::cout << std::endl;

    return 0;
    
}
