#include <stdio.h>

int main() {
    float score = 70.0; //คะแนนสอบ
    float final_score; //คำนวณคะแนนสุดท้าย
    if (score >= 50){//ถ้าคะแนนสอบมากกว่าหรือเท่ากับ 50
        (final_score = score+(score*0.05)); //คะเเนนสอบ + 5%
        printf("คะเเนนรวม: %.1f\n", final_score); //แสดงผลคะแนนสุดท้าย
}

    else if (score < 50.0 ) //ถ้าคะแนนสอบน้อยกว่า 50
    {
        printf("คะเเนนรวม: %.1f\n", score); //แสดงผลคะแนนสอบไม่ถึง 50 ไม่เพิ่ม 5%
    }

    return 0;
}