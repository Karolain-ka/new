#include<iostream>
#include<map>

int main() {
    srand(time(0));
    int sum;
    std::map<int, int> m;
    for (int i = 1; i < 7; i++) m[i] = 0;
    for (int i = 0; i < 1000; i++) {
        sum = rand() % 6 + 1;
        m[sum] += 1;
    }
    for (int i = 1; i < 7; i++)
        std::cout << i << '\t' << m[i] << '\n';
}
