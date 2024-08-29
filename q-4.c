#include <stdio.h>

int RectangleArea(int length,int height) {
    return length * height;
}

int main() {
    int length, height, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);

    area = RectangleArea(length, height);
    
    printf("Rectangle with length %d and height %d is %d\n", length, height, area);


}