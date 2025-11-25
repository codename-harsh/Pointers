#include<stdio.h>
int main(){
    int a = 789; // simply variable initialization .
    int* x = &a; //isse x me jo "a" ka address hai wo store ho jayega .
    printf("%d",x); // %d use kia yaha pe for x yani ki bas x me jo a ka address hai wo print hoga .
    printf("\n\n"); // for two lines space .
    //now isme :/
    printf("%p",&x); // %p krne se jo x variable ka address hai wo print hoga 
    // we can also edit the value of the variable using this pointer / address shit :0
    printf("\n");
    *x = 330;
    printf("%d",a); // note kro kii a ko hi print krana hai x ko nhi :)
}