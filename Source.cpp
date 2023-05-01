#include <iostream>
 
int main() {
    char a;
    std::cin >> a;
    try {
        if (std::isdigit(a))
            throw "you can't enter a number";
    }
    catch (const char* msg) {
        std::cout << msg << std::endl;
        std::cout << "It is a number" << std::endl;
        return 0;
    }
    std::cout << "You entered: " << a << std::endl;
}