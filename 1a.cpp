#include<iostream>


//program to cheack the range of an integer
int main() {
    int number;
    std::cout << "Type in a number: ";
    std::cin >> number;

    if (number > 0 && number < 100){
        std::cout << "\n" << number << ", is greater than 0 but less than 100.\n";
    }
    else if(number > 0 && number > 100){
        std::cout << number <<", is greater than 100.\n";
    }

return 0;
}