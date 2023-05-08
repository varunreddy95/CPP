#include <iostream>
#include <string>
#include <vector>


// Function prototypes
void pass_by_ref1(int &num);
void pass_by_ref2(std::string &s);
void pass_by_ref3(std::vector<std::string> &v);
void print_vector(const std::vector<std::string> &v);


int main()
{
    int num {10};
    int another_num {20};


    std::cout << "num  before calling pass_by_ref1 :" << num<< std::endl;
    pass_by_ref1(num);
    std::cout << "num after calling pass_by_ref1 :" << num << std::endl;

    std::cout << "\nanother num before calling pass_by_ref1: " << another_num << std::endl;
    pass_by_ref1(another_num);
    std::cout << "another_num after calling pass_by_ref1: " << another_num << std::endl; 


    std::string name {"Varun"};
    std::cout << "\nname before calling pass_by_ref2: " << name << std::endl;
    pass_by_ref2(name);
    std::cout << "name after calling pass_ref_2: " << name << std::endl; 

    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    std::cout << "\nstooges before calling pass_by_ref3:" << std::endl;
    print_vector(stooges);
    pass_by_ref3(stooges);
    std::cout << "stooges after calling pass_by_ref3:" << std::endl;
    print_vector(stooges);


    std::cout << std::endl;
    return 0;
}




// Function definitions
void pass_by_ref1(int &num)
{
    num = 1000;
}

void  pass_by_ref2(std::string &s)
{
    s="Changed";
}

void pass_by_ref3(std::vector<std::string> &v)
{
    v.clear();
}

void print_vector(const std::vector<std::string> &v)
{
    for(auto s:v)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}