#include <stdio.h>

// คำนวณส่วนลด
float calculate_Discount(int age, int vip_level, float purchase_amount) {
    float discount_rate = 0.0;

    // อายุเกิน 60 ปี หรือเป็นสมาชิก VIP ระดับ 3 หรือ 4
    if (age > 60 || (vip_level == 3 || vip_level == 4)) {
        discount_rate = 0.20; // ส่วนลด 20%
    }

    // อายุ 30-40 ปี และยอดซื้อสินค้าเกิน 2000 บาท
    else if ((age >= 30 && age <= 40) && purchase_amount > 2000) {
        discount_rate = 0.15; // ส่วนลด 15%
    }

    // อายุ 18-25 ปี และยอดซื้อสินค้าเกิน 1000 บาท
    else if ((age >= 18 && age <= 25) && purchase_amount > 1000) {
        discount_rate = 0.10; // ส่วนลด 10%
    }
    // vip ระดับ 5 หรือยอดซื้อสินค้าเกิน 50,000 บาท
    else if (vip_level == 5 || purchase_amount > 50000) {
        discount_rate = 0.25; // ส่วนลด 25%
    }
    return  discount_rate; // คืนค่าอัตราส่วนลด
}

int main() {
    int age, vip_level;
    float purchase_amount;
    float discount_rate, discount_amount, final_price;

    // รับค่าตัวเเปล age, vip_level, purchase_amount
    printf("กรุณาป้อนอายุของคุณ: "); // ใส่ข้อมูลอายุ
    scanf("%d", &age);
    printf("กรุณาป้อนระดับสมาชิก VIP (1-5): "); // ใส่ข้อมูลระดับสมาชิก VIP
    scanf("%d", &vip_level);
    printf("กรุณาป้อนยอดซื้อสินค้า: "); // ใส่ข้อมูลยอดซื้อสินค้า
    scanf("%f", &purchase_amount);

    // คำนวณส่วนลด
    discount_rate = calculate_Discount(age, vip_level, purchase_amount);

    // คำนวณจำนวนเงินส่วนลดและยอดชำระเงินสุดท้าย
    discount_amount = purchase_amount * discount_rate;
    final_price = purchase_amount - discount_amount;

    // แสดงผลลัพธ์
    printf("\n---ข้อมูลสมาชิกลูกค้า---\n");
    printf("อายุปี: %d | ระดับสมาชิก VIP : %d | จำนวนเงิน: %.2f บาท\n", age, vip_level, purchase_amount);

    // โครงสร้าง if-else ถูกต้อง
    // เงื่อนไขซับซ้อน (ใช้ && เเละ ||)
    if (discount_rate > 0) {
    printf("ส่วนลดที่ได้รับ: %.0f%%\n", discount_rate *100);
    printf("จำนวนส่วนลด: %.2f บาท\n", discount_amount);
    printf("ราคาสุดท้าย: %.2f บาท\n", final_price);
    }  else {
        printf("No discount applied\n");
    }

    printf("\nขอบพระคุณลูกค้าที่น่ารักมากๆ ครับที่อุดหนุนร้านของเรา โอกาสหน้าเชิญใหม่ครับ ทางร้านยินดีต้อนรับครับ!\n"); //ขอบคุณที่ใช้บริการ

    return 0;
}