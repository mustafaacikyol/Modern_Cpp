#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){

    int i;
    double a,b;
    string s;

    //Create an input file stream
    ifstream in("test_cols.txt", ios_base::in);
    
    //Read data, until it is there
    while(in >> s >> i >> a >> b){

        cout << i << "," << a << "," << s << "," << b << endl;

    }

    return (0);

}
