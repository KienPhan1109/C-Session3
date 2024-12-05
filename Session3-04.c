#include <stdio.h>

int main(){
    float toan, van, anh, average, sum;
    printf("Nhập vào điểm Toán");
    scanf("%f", &toan);
    printf("Nhập vào điểm Văn");
    scanf("%f", &van);
    printf("Nhập vào điểm Anh");
    scanf("%f", &anh);
    sum = toan + van + anh;
    average = (toan + van + anh) / 3;
    printf("Tổng điểm 3 môn là: %.2f\n", sum);
    printf("Điểm trung bình 3 môn là: %.2f\n", average);
}