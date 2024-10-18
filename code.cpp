#include <stdio.h>

int main() {
    int a, b, sum, tru;


    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);


    sum = a + b;
    tru= a-b;
    nhan=a*b;
    chia=a/b;

   
    printf("Tong cua %d và %d là: %d\n", a, b, sum);
    printf("Hieu cua %d và %d là: %d\n", a, b, tru);
	printf("Tich cua %d và %d là: %d\n", a, b, nhan);
	printf("Thuong cua %d va %d là: %d\n", a, b, chia);
	
    return 0;
}

