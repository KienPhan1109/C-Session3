#include <stdio.h>

int main(){
    int length, height, area;
    printf("Nhập vào chiều dài cạnh: ");
    scanf("%d", &length);
    printf("Nhập vào chiều cao tam giác: ");
    scanf("%d", &height);
    area = (length * height) / 2;
    printf("Diện tích tam giác là: %d",area);
}