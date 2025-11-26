#include <stdio.h>

int main() {
    char str[] = "PointersAreCool";
    char *p = str;
    int c = 0;

    while(*p) {
        char x = *p | 32; // lowercase
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
            c++;
        p++;
    }

    printf("Vowels = %d\n", c);
}
