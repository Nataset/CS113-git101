#include <stdio.h>

//-----------function---------//
int addTen( int x )
{
    x+= 10;
    return x;
}
// ถ้าไม่เขียน function ก่อน main สามารถเขียนด้านล่าง main ได้แต่ต้องประกาศ function prototype 

int addTwenty();
// ^^^^ อันนี้เรียกว่า function prototype คือ function เปล่ามี parameter เหมือนกับ function ตัวเต็มด้านล่างเพื่อไม่ให้ error
int x = 2000;

int main()
{
    int x = 90;
    int y = addTen( x );
    printf( "addTen in main = %d\n", y );
    printf( "addTwenty in main = %d\n", addTwenty() );
}
int addTwenty()
{
    x += 20;
    return x;

// การทำงานของ function คือ เวลาเรียกใน main จะ pass ค่ามาใน function แต่ถ้า function นั้น return แล้วค่าตัวแปรใน function
// จะหาย แต่ return ค่าได้แค่ตัวเดียว 
// note แล้วถ้าอยากจะ return มากกว่าหนึ่งตัวทำไงอะ anwer ส่ง pointer มาใน function แทนจะเป็น pass by reference 
}


