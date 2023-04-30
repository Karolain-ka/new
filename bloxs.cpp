//Нужно переделать для 2 кубиков(границы от 2 до 12 включительно).
#include<iostream>
#include<map>
#include <ctime>

int main() {
    srand(time(0));
    int sum;
    std::map<int, int> m;
    for (int i = 2; i < 13; i++) m[i] = 0;
    for (int i = 0; i < 1000; i++) {
        sum = rand() % 6 + 1 + rand() % 6 + 1;
        std::cout << sum << " ";
        if ((i + 1) % 10 == 0) {
           std::cout << std::endl;
        }
        if (m.find(sum) != m.end()) {
            m[sum] += 1;
        }
    }
        std::cout << std::endl << "Results:" << std::endl;
        for (auto n : m) {
            std::cout << "Total points: " << n.first << ", Number of outcomes: " << n.second << std::endl;
        }
        return 0;
    
}