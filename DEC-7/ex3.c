#include<stdio.h>
int main(){

for(int j=1;j<=5;j++){
    for ( int i =1; i <= j ; i++){
        printf("1 ");
    }
    printf("\n"); 
}
printf("\n -------------------------- \n\n"); 
for(int j=5;j>=1;j--){
    for ( int i =1; i <= j ; i++){
        printf("0 ");
    }
    printf("\n"); 
}
return 0;
}