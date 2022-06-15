#include <iostream>
#include <unordered_map>
#include <string>

int main()
{

    std::unordered_map<int, std::string> students{{1509, "John"}};

    students.emplace(1000, "Claire");
    students.emplace(500, "Steven");
    students.emplace(1700, "Peter");

    for (const auto &[id, name] : students)
    {

        std::cout << "id : " << id << " " << name << std::endl;
    }

    std::cout << "Size : " << students.size() << std::endl;

    return 0;
}
