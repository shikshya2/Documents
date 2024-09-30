#include<stdio.h>
#include<math.h>

int main() {
    float p, t, r, i, A;
    
    // Prompting the user for input
    printf("Enter the principal, time (in years), and rate of interest: ");
    scanf("%f%f%f", &p, &t, &r);
    
    // Calculating the total amount
    A = p * pow((1 + r / 100), t);
    
    // Calculating the interest
    i = A - p;
    
    // Output the result
    printf("The interest earned is: %f\n", i);
    printf("The total amount after interest is: %f\n", A);
    
    return 0;
}