#include<stdio.h>

void swapWithout(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
 	
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);


       swapWithout(&x, &y);;

    printf("After swapping: x = %d, y = %d\n", x, y);
}