#include <stdio.h>

int main(){
    int n, temp, inverse = 0;
    printf("Nhập vào số nguyên có 4 chữ số: ");
    scanf("%d", &n);

    if (n < 1000 || n > 9999) {
        printf("Số nhập vào không phải số nguyên có 4 chữ số");
        return 1;
    }

    while (n != 0){
        temp = n % 10;
        inverse = inverse * 10 + temp;
        n = n / 10;
    }
    
    printf("Số nghich đảo là: %d", inverse);
    return 0;
}