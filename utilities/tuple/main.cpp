#include <iostream>
#include <tuple>
#include <string>

void PrintStudent(std::tuple<double, char, std::string> student){

    std::cout << "GPA : " << std::get<0>(student) << " , " << "grade : " << std::get<1>(student) << " , " << "name : " << std::get<2>(student) << std::endl;

}

int main(){

    std::tuple <double, char, std::string> student1;
    using Student = std::tuple<double, char, std::string>;
    Student student2{1.4, 'A', "Jose"};
    PrintStudent(student2);
    std::cout << std::get<std::string>(student2) << std::endl;
    std::cout << std::get<2>(student2) << std::endl;

    //c++17 structured binding:
    auto[gpa, grade, name] = std::make_tuple(4.4, 'B', " ");


    return 0;

}
