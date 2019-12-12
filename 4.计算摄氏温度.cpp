#include <iostream>
#include <cmath>

int main(){
    int f,c;
    std::cin >> f;
    c = 5 * (f - 32) / 9;
    std::cout << "Celsius = " << c << std::endl;
    return 0;
}