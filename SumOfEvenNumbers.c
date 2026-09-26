#include<stdio.h>


int main(){

    int n;
    printf("Give me your number: ");
    scanf("%d",&n);

    int i = 0;
    int sum = 0;
    while(i <= n){
        sum = sum + i;
        i+=2;
    }

    printf("%d",sum);


}