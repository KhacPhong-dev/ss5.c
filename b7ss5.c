#include <stdio.h>

int main() {
    int so1, so2, ucln, a;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &so2);
    if (so1 > 0 && so2 > 0) {
        while (so2 != 0) {
            d = so2;
            so2 = so1 % so2;
            so1 = d;
        }
        ucln = so1;
        printf("Uoc chung lon nhat la: %d\n", ucln);
    } else {
        printf("Vui long nhap hai so nguyen duong.\n");
    }
}