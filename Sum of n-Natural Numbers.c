#include <stdio.h>
int main () {
    int n;
    printf("Enter a Number:\n");
    scanf("%d", &n);
    
//Sum of n-Natural Numbers (using formula)
    int sum1=(n*(n+1))/2;
    printf("Sum of First %d natural numbers is: %d \n", n, sum1);
    
//Sum of n-Natural Numbers (using logic)
    int sum2=0, x;
    for (x=0; x<=n; x++) {
        sum2 = x + sum2;
    }
    printf("The sum of first %d natural numbers is %d \n", n, sum2);
    return 0;
}