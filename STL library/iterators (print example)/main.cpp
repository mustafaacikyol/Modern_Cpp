#include <iostream>
#include <array>
#include <vector>

void print(const std::array <int,10> &arr){

    for(const auto & value:arr){
        std::cout<< value << " ";
    }

    std::cout<< std::endl;
}

void print(const std::vector<int> &vec){

    for (const auto &value : vec)
    {
        std::cout << value << " ";
    }

    std::cout << std::endl;
}

int main(){

    std::array<int, 10> arr = {0,1,2,3,4,5,6,7,8,9};
    std::vector<int> vec = {0,1,2,3,4,5,6,7,8,9};

    std::cout<< "array : ";
    print(arr);
    std::cout<< "vector : ";
    print(vec);

    return 0;

}
