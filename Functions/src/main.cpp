#include <iostream>
#include <cmath>
#include <cstdlib>   //required for rand(), for precise distributions use <random> header file
#include <ctime>  // required for time()

int main()
{
    // double num {0};
    // std::cout << "Enter a number (double): ";
    // std::cin >> num;

    // std::cout << "The sqrt of " << num << " is " << sqrt(num) << std::endl;
    // std::cout << "The cubed root of " << num << " is " << cbrt(num) << std::endl;

    // std::cout << "The sine of " << num << " is " << sin(num) << std::endl;
    // std::cout << "The cosine of " << num << " is " << cos(num) << std::endl;

    // std::cout << "The ceil of " << num << " is " << ceil(num) << std::endl;
    // std::cout << "The floor of " << num << " is " << floor(num) << std::endl;
    // std::cout << "The round of " << num << " is " << round(num) << std::endl;


    // double power {};
    // std::cout << "\nEnter a pwer to raise "<< num << " to: ";
    // std::cin >> power;
    // std::cout << num << " raised to the " << power << " power is " << pow(num, power) << std::endl;

    int random_number {0};
    size_t count {10};  //Number of random numbers to generate
    int min {1}; // Lower bound inclusive
    int max {6}; //upper bound inclusive

    //seed the random number generator
    std::cout << "RAND_MAX on my system is: " << RAND_MAX << std::endl;
    srand(time(nullptr));

    for(size_t i=1; i <= count; ++i)
    {
        random_number = rand() % max + min;
        std::cout << random_number << std::endl;
    }

    std::cout << std::endl;
    return 0;
}