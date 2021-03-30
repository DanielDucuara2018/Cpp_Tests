#include <iostream>

int main()
{
    std::cout << "Enter your favorite number between 1 and 100: ";
    int favoriteNumber;
    std::cin >> favoriteNumber;
    if(favoriteNumber == 24) {
        std::cout << "Amazing !! That is my favorite number too!" << std::endl;
    } else {
        std ::cout << "Not really!!, 24 is my favorite number!" << std::endl;
    }
    return 0;
}