#include <stdio.h>

int main() {
    int so1, so2;
    int lua_chon;
    int ket_qua;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    do {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);
        switch (lua_chon) {
            case 1:
                ket_qua = so1 + so2;
                printf("Tong 2 so la: %d\n", ket_qua);
                break;
            case 2:
                ket_qua = so1 - so2;
                printf("Hieu 2 so la: %.d\n", ket_qua);
                break;
            case 3:
                ket_qua = so1 * so2;
                printf("Tich 2 so la: %d\n", ket_qua);
                break;
            case 4:
                if (so2 != 0) {
                    ket_qua = so1 / so2;
                    printf("Thuong 2 so la: %d\n", ket_qua);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (lua_chon != 5);
}