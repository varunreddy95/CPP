#include <iostream>

unsigned long long factorial(int);
unsigned long long fibonacci(int);

int main()
{
    int num {0};
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Factorial of  " << num << " is " << factorial(num) << std::endl;
    std::cout << "Fibonacci value of " << num << " is " << fibonacci(num) << std::endl;


    return 0;
}


//Factorial
unsigned long long factorial(int num)
{
    if (num==0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num-1);
    }
}


//Fibonacci
unsigned long long fibonacci(int num)
{
    if(num <= 1)
    {
        return num;
    }
    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}