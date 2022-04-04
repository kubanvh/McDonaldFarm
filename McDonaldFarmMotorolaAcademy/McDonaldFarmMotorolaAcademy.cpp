// McDonaldFarmMotorolaAcademy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int metres;
    std::cout << "Enter how many metres of fence is avaible: ";
    while (!(std::cin >> metres && metres > 0))
    {
        std::cout << "Error ... enter again: ";
        std::cin.clear();
        std::cin.ignore(123, '\n');
    }
    std::cout << "Your fence has: " << metres << "m\n";
    int a{ -metres / -4 };
    int b{ metres - 2 * a };
    std::cout << "Length of fence segment a: " << a << "m\n";
    std::cout << "Length of fence segment b: " << b << "m\n";
    int p{ a * b };
    std::cout << "Optimal area of McDonald's farm is: " << p << "m2";
}
