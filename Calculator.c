#include <stdio.h>

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }

int main() {
    int (*op[3])(int,int) = {add, sub, mul};

    printf("%d\n", op[0](10,5)); // add
    printf("%d\n", op[1](10,5)); // sub
    printf("%d\n", op[2](10,5)); // mul
}
