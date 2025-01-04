#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout<<"Enter three numbers: " <<endl;
    cin>> num1 >> num2 >> num3;

    int* p1 = new int;
    int* p2 = new int;
    int* p3 = new int;

    *p1 = num1;
    *p2 = num2;
    *p3 = num3;

    cout<< "Values and Pointers:" << endl;
    cout<<"First value: " << num1 <<" new value: "<< *p1 <<endl;
    cout<<"Second value: " << num2 <<" new value: "<< *p2 <<endl;
    cout<<"Third value: " << num3 <<" new value: "<< *p3 <<endl;

    delete p1;
    delete p2;
    delete p3;

    cout<<"Memory has been realesed"<< endl;
    return 0;

}