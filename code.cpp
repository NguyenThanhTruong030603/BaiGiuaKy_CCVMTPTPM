#include <stdio.h>

int main() {
    int a, b, sum, tru;


    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);


    sum = a + b;
    tru= a-b;

   
    printf("Tong cua %d v� %d l�: %d\n", a, b, sum);
    printf("Hieu cua %d v� %d l�: %d\n", a, b, tru);

    return 0;
}

