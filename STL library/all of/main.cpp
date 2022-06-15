#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


inline bool even(int i){ return i%2 == 0 ;};

void Print(std::vector <int> x){

    for(const auto& elem : x){

        std::cout << elem << " ";

    }

    std::cout << std::endl;
}

int main(){

    std::vector<int> v(10,2);
    std::partial_sum(v.cbegin(), v.cend(), v.begin());
    Print(v);

    bool all_even = all_of(v.cbegin(), v.cend(), even);
    if(all_even){
        std::cout<< "All numbers are even" << std::endl;
    }

    return 0;

}
