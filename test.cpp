#include <iostream>
using namespace std;

int main(){
    string firstName = "Miguel";
    string lastName = "Medrano";
    string address = "123 wood rd";
    string city = "Los Angeles";
    int zipCode = 90030;

    cout << "Welcome to my program!" << endl;
    cout <<"My full name is " + firstName + " " + lastName << endl;
    cout <<"My address is " + address + " " + city << endl;
    cout <<"zipcode: " << zipCode <<endl;
    return 0;
}