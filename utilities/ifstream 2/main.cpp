#include <fstream>
#include <iostream>
using namespace std;

int main(){

    string line, file_name;
    ifstream input("test_bel.txt", ios_base::in);
    
    //Read data line-wise
    while(getline(input, line)){
        cout << "read : " << line << endl;
        //string has a find method
        string::size_type loc = line.find("filename", 0);

        if (loc != string::npos)
        {
            file_name = line.substr(line.find("=",0) + 1, string::npos);
        }
        
    }

    cout << "Filename found : " << file_name << endl;
    return(0);
    
}
