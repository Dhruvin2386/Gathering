#include <stdio.h>
#define PI 3.14

double Circle( double radius) {
    return PI * radius * radius;
}

int main() {
    float radius, area;

    printf( "Radius of the circle: ");
    scanf("%f", &radius);

    area = Circle(radius);


    printf(" %.2f is %.2f\n", radius, area);

    return 0;

}


