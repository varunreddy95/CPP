#include <iostream>

int main() 
{

    //defining constant conversion in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};


    std::cout << "Enter an amout in cents: ";
    
    int change_amount {};
    std::cin >> change_amount;

    int dollars {};
    int quarters {};
    int dimes {};
    int nickles {};
    int pennies {};
    int balance {};


    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickles = balance  / nickel_value;
    balance %= nickel_value;

    pennies = balance;

    
    std::cout << "\nYour change amout is: " << std::endl;
    std::cout << "Dollars: " << dollars << std::endl;
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}