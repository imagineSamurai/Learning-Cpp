#include <iostream>
#include <cctype>
#include <limits>

int main() {
    char type;
    double temp;
    double converted;

    std::cout << "==========================================================================\n";
    std::cout << "\n";
    std::cout << "      Super INTELLIGENT TEMPRATURE CALCULATOR powered by AI!!!!!!!!!!!!!!!!\n";
    std::cout << "\n";
    std::cout << "==========================================================================\n";
    std::cout << "  The author name is unknown because USA will fuck me up to work for them\n" << "\n";

    std::cout << "Temperature measurement unit? (C/F) \n";
    std::cin >> type;

    if(type != 'C' && type != 'F' && type != 'c' && type != 'f') {
        std::cout << "This isn't a Temperature measurement unit\n";
        std::cout << "Press enter to exit";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
        return 0;
    }
    
    std::cout << "Enter a number:";
    std::cin >> temp;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (tolower(type))
    {
    case 'c':
        converted = (temp * 1.8) + 32;
        std::cout << "The Temperature is " << converted << "° F";
        break;
    
    case 'f':
        converted = (temp - 32) / 1.8;
        std::cout << "The Temperature is " << converted << " ° C";
        break;
    
    default:
        break;
    }

    std::cout << "\n Press enter to exit";
    
    std::cin.get();
    return 0;
}
