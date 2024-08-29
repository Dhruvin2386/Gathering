#include <stdio.h>

int Trianglearea(int length,int height) {
    return (length * height) / 2;
}

int main() {
    int length, height, area;

    printf("Enter the length of the triangle: ");
    scanf("%d", &length);

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    area = Trianglearea(length, height);


    printf(" %d and %d is %.d\n",length, height, area);

  
}
