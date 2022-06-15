#include <iostream>
#include <array>
#include <algorithm>

using std::array;
using std::cout;
using std::endl;

void Print(array <int,10> x){

    for(const auto& elem : x){

        cout << elem << " ";

    }

    cout << endl;
}

int main(){

    array<int, 10> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
    cout << "Before sorting : ";
    Print(s);

    std::sort(s.begin()+2, s.end());
    cout << "After sorting : ";
    Print(s);

    return 0;

}
