#include<stdio.h>
int main(){
    int num, sum=0,rem=0;
    printf("enter the number to get sum of digits:");
    scanf("%d",&num);
    do{
        rem=num%10; 
        sum=sum+rem;
        num=num/10;
    }while(num>0);
    printf("sum of digits=%d",sum);
    return 0;
}