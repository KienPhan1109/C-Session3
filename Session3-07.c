#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("Nhập vào số nguyên có 4 chữ số: ");
    scanf("%d", &n);

    if (n < 1000 || n > 9999) {
        printf("Số nhập vào không phải số nguyên có 4 chữ số");
        return 1;
    }

    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    
    printf("Tổng các chữ số của số nguyên nhập vào là: %d", sum);
    return 0;
}