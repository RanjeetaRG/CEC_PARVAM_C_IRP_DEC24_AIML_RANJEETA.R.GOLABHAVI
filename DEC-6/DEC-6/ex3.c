// to find odd number and even number

#include<stdio.h>
int main(){
    int num;
    printf("enter a number to find even or odd:");
    scanf("%d",&num);
    if(num%2==0)
    printf("even number");
    else
    printf("odd number");
    return 0;
}