#include <stdio.h>

int main(void) {
    // ตัวเเปลจำนวนเต็ม
    int x, y;

    // รับค่าตัวเเปล x, y
    printf("กรุณาป้อนค่าตัวเลขที่ 1 (x): ");
    scanf("%d", &x);

    // รับค่าตัวเเปล y
    printf("กรุณาป้อนค่าตัวเลขที่ 2 (y): ");
    scanf("%d", &y);

    // if-else if-else เพื่อเปรียบเทียบค่าของ x กับ y
    if (x > y) {
        //x มากกว่า y
        printf("ผลลัพธ์: x  มากกว่า y \n", x, y);
    }
    else if (x < y) {
        //x น้อยกว่า y
        printf("ผลลัพธ์: x  น้อยกว่า y \n", x, y);
    }
    else {
        //x เท่ากับ y
        printf("ผลลัพธ์: x  เท่ากับ  y \n", x, y);
    }

    return 0;
}