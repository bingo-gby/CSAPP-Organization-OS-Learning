#include<iostream>
#include<bitset>
using namespace std;


namespace J1{
int main(){
    int number = -4;
    int number1 = 7;
    std::bitset<4> binaryRepresentation(number);
    std::cout << binaryRepresentation << std::endl; // 1110
    std::bitset<8> binaryRepresentation1(number);
    std::cout << binaryRepresentation1 << std::endl; // 0111
    return 0;
}
}
// 打印数字顺序
namespace J2{
    typedef unsigned char * byte_pointer;  // 用指针数组
    void show_bytes(byte_pointer start, size_t len){
        size_t i;
        for(i = 0; i < len; i++){
            printf("%.2x\n", start[i]);
        }
        printf("\n");
    }
    int main(){
        int number = 15213;
        show_bytes((byte_pointer) &number, sizeof(int));
        return 0;
    }
}
// 判断大小端
namespace J3{
    int main(){
        union{
            char c;
            int i;
        } u;
        u.i = 0x12345678;
        printf("%x\n", u.c);
        return 0;
    }
}
int main(){
    // J1::main();
    // J2::main();
    J3::main();

    return 0;
}
