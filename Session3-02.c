#include <stdio.h>

int main(){
    float Celsius;
    float Fahrenheit;
    printf("Nhập vào độ Celsius: ");
    scanf("%f", &Celsius);
    Fahrenheit = (Celsius * 9/5) + 32;
    printf("Độ Fahrenheir là: %.2f", Fahrenheit);
}