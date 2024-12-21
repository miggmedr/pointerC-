#include <iostream>
#include <string>

int main(){

    for (int i = 1; i <=3; i++){
        std::string firstWord, secWord;

        std::cout <<"Loop " << i << ": Enter first word: ";
        std::getline(std::cin, firstWord);

        std::cout<<"Loop "<< i <<": Enter second word: ";
        std::getline(std::cin, secWord);

        std::string concateString = firstWord + secWord;
        std::cout<< "new string: "<< concateString << std::endl;
    
    }
    return 0;
}