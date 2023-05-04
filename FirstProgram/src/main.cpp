#include <iostream> //Preprocess Directive


int main() 
{
    
    std::cout << "Please enter two numbers between 1 and 100: ";
    int num1{100};
    int num2{100};
       //Good practice to initialize a variable always
    std::cin >> num1 >> num2;

    std::cout << "Amazing!! That's my favourite number too!" << std::endl;
    std::cout << "No really!!, " << num1 <<" " << num2 << " are my favourite number!" << std::endl;

    return 0;   //Has to return 0 if the build is successful
}