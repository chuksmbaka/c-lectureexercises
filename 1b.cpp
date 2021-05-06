#include <iostream>

int main()
{
    int number;
    std::cout << "Input a number: ";
    std::cin >> number;

    if (number > 0)
    {
        std::cout << "\ninput is greater than 0.\n"
                  << std::endl;

        if(number%4 == 0){
            std::cout << "input is also divisible by 4\n";
            

            if(number % 3 == 0){
                std::cout << "input ius also divisible by 3\n";
            }
        }
    }

    return 0;
}