#include<stdio.h>

int main(){
    int r;
    printf("give me a radius: ");
    scanf("%d",&r);

    // int dia = r * 2;

    float area = 3.1416 * r * r;
    printf("%.10f",area);





    return 0;
}