#include <stdio.h>
#define Pi 3.14;

int main() {
    float area;
    float perimeter;
    float radius;
    printf("Nhập vào bán kính R: ");
    scanf("%f", &radius);
    area = Pi * radius * radius;
    perimeter = 2 * Pi * radius;
    printf("Diện tích hình tròn là: %.2f\n", area);
    printf("Chu vi hình tròn là: %.2f\n", perimeter);
}
