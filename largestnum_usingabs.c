#include <stdio.h>
#include <stdlib.h>

int findMax(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int num1 , num2 ;
    printf("Enter two numbers:\n");
    scanf("%d%d", &num1,&num2);

    printf("The largest number is: %d\n", findMax(num1, num2));
    return 0;
}
