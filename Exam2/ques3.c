#include <stdio.h>

int main(){
    int a[10]={1,5,7,3,2,9};
    int n=6;
    int temp;

printf("Original array:");
for(int  i=0;i<n;i++){
    printf("%d",a[i]);

}
for(int i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;


}
printf("\n Reverse array:");
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;

}
