#include<stdio.h>
int main (){
    int a ,b,c;
    printf("Enter two numbers:");
    scanf("%d%d", &a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping the number the value is %d %d", a,b);

}