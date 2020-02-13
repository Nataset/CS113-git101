#include <stdio.h>

// void addTen(int arr[][], int n) // array --> last [value] need a value 
void addTen( int *arr, int n )
{
    for ( int i = 0; i < n; i++ ){
        // printf( "[%d] = %d", i, arr[i] );
        printf( "addTen [%p] = %d\n", arr+i, *( arr+i ) );
        *( arr+i ) += 10;
    }
}
// ตัวอย่างนี้ ^^^^^ แสดงให้เห็นถึงประโยชน์ของ pointer จะทำให้ส่ง parameter ได้ยืดหยุ่นกว่า

int addTwenty( int *n )
{
    *n += 20;
    return 1;
}

int main()
{
    int number[] = { 1,2,3,4,5 };
    int n = 5;
    addTen( &number[0], n );
    for( int i = 0 ; i < n; i++ ){
        printf( "main [%p] = %d\n", number+i, *( number+i ) );
    }
// ตัวอย่างนี้ ^^^^^ คือการแสดงว่าแต่ละ addess จะห่างกันเท่าไร number เป็น int จึงห่าง 4 เพราะ int มีขนาด 4 byte

    addTwenty( &n );
    addTwenty( &number[4] );
    printf( "n = %d\n", n );
    printf( "number[4] = %d\n", number[4] );
// ตัวอย่างการใช้ & ถ้าตัวนี้อยู๋หน้า ตัวแปรที่เป็น value จะหมายถึง addess ที value ตัวนั้นอยู่

}