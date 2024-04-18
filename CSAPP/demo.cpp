#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int number = -4;
    int number1 = 7;
    std::bitset<4> binaryRepresentation(number);
    std::cout << binaryRepresentation << std::endl; // 1110
    std::bitset<8> binaryRepresentation1(number);
    std::cout << binaryRepresentation1 << std::endl; // 0111
    return 0;
}