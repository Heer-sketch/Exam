#include <stdio.h>

int findsquare(int num){
    return num * num;

}
int main(){
    int num,square;


printf("Enter no:");
scanf("%d",&num);

square = findsquare(num);

printf("The square of %d is %d.\n,num,square");

return 0;

}
