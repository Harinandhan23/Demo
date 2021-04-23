#include<stdio.h>

void arrayPrinter(char* a, int b){
char* ptr;
ptr = &a;
int i=0;
printf("value with ptr = %p", ptr);
printf("value without ptr = %d",b);
}
void main(){
char z[]="hello";
int i=0;
for(;i<=5;i++){
    arrayPrinter(z[i], z[i]);
}
}