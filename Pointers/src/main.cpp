#include <iostream>

int main()
{
    int x {10};
    int* ptr= &x;

    std::cout << "x value: " << x << std::endl;
    std::cout << "x address: " << ptr << std::endl;

    return 0;
}