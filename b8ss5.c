#include <stdio.h>

int main() {
    int so1, so2, a, b, ucln, bcnn;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &so2);

    if (so1 > 0 && so2 > 0) {
        a = so1;
        b = so2;

        while (b != 0) {
            int c = b;
            b = a % b;
            a = c;
        }
        ucln = a;
        bcnn = (so1 * so2) / ucln;

        printf("Boi chung nho nhat la: %d\n", bcnn);
    } else {
        printf("Vui long nhap hai so nguyen duong.\n");
    }

    return 0;
}