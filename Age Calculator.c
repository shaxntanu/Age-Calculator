#include<stdio.h>

int main(){
    printf("Welcome to the 'Age Calculator'\n");
    int by; //birth year
    printf("Enter birth year: ");
    scanf("%d", &by);
    int cy; // current year
    printf("\nEnter current year: ");
    scanf("%d", &cy);
    printf("\nYour current age is: %d y.o.", cy - by);
    printf("\nThankyou for using the 'Age Calculator'!");
    return 0;
}