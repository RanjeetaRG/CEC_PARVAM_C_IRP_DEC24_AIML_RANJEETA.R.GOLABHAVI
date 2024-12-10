#include<stdio.h>
int main(){
    char name[50];
    int count;
    printf("Enter the name:");
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++)
        count++;
    if(count%2==0)
    printf("your name has even character");
    else
    printf("your name has odd character");
    return 0;    
}
