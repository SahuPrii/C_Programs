/*include<stdio.h>
int main(){
    int i,j;
    for(i = 0 ; i<4 ; i++){
        
        for(j=3 ; j >0 ; j--){
            printf(" ");
        }
        for (j = 0;  j<=i ; j++){
            printf("%d", i+1);
        }
        printf("\n");
    }
    return 0;
} 
*/
 
#include<stdio.h>
int main() {
    int i, j, n;

    // Take input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print spaces for alignment
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        // Print numbers
        for (j = 0; j <= i; j++) {
            printf("%d", i + 1);
        }
        printf("\n");
    }
    return 0;
}
