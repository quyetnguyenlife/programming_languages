#include<stdio.h>
#include<math.h>
void main() {

    int a, b;
    int tong, hieu, tich;

    printf("Nhap vao so nguyen thu nhat: \n");
    scanf("%d", &a);
    printf("Nhap vao so nguyen thu hai: \n");
    scanf("%d", &b);
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    printf("Tong cua 2 so vua nhap vao la: %d \n", tong);
    printf("Hieu cua 2 so vua nhap vao la: %d \n", hieu);
    printf("Tich cua 2 so vua nhap vao la: %d \n", tich);

}
