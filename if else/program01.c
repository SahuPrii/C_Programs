// program to take positive integer and tell if it is divisible by 5 or not 
#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    if(n%5==0){
        printf("Number is divisible by 5");
    }
    else{
        printf("Number is not divisble by 5");
    }
    return 0;
}