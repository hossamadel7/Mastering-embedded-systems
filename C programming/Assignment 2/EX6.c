#include "stdio.h"

void main(){
    int x;
    printf("\nEnter an integer: ");
    scanf("%d",&x);
    
    int sum = 0;
    for(int i = 1; i<=x; i++){
        sum+=i;
    }

    printf("\nSum = %d",sum);
}