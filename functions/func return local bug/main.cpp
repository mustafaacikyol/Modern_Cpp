#include <iostream>
using namespace std;

int &MultiplyBy10( int num ){ //This is reference           retval is created

    int retval = 0;
    retval = 10 * num;
    //cout << "retval is : " << retval << endl; You should add this code
    return retval;

} //retval is destroyed, it's not accessible anymore

int main(){

    int out = MultiplyBy10(10);
    cout << "Out is " << out << endl;
    return 0;

}
