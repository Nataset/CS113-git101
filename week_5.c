#include <stdio.h>

int main()
{  //-----format in printf-----//
    int x = 100;
    // printf( "x = %d\n", x );
    // printf( "reference of x = %lu\n", &x ); // %lu reference = base 10
    // printf( "reference of x = %p\n", &x ); // %p pointer in base 16 

    // printf( "index 1 = %d\n", number[1] );
    // printf( "reference of number[1] = %p\n", &number[1] ); // address number == number[0] 
    // printf( "reference of number+1 = %p\n", &number+1 ); // pointer+1 --> int +4 in address  (plus by size of value)
    // printf( "reference of number = %p\n", &number );

    //--------pointer------//
    // int *ptr = &x; // การประกาศ pointer ต้องมี * นำ
    // int *arrPtr;  // การ dereference คือการเข้าถึงตัวแปรที่ pointer ชี้
    // arrPtr = number;
    // *arrPtr += 3; // *ptr = check address ( arrPtr = number[0]+=3 addess(12) = number[3](12 in memory) ) and operate(+=3) to value in that addess is 4+3 = 7
    // การเลื่อน adddess ผ่าน pointer

    //--------ตัวอย่าง pointer-----//
    // int number[] = { 1, 2, 3, 4, 5, 6 };
    // for( int *ptr = number; ptr <= &number[4]; ptr++ )
    // {
    //     printf( "[%p] = %d\n", ptr, *ptr );
    // }
    // int *ptr2 = number;
    // for ( int i = 0; i<5; i++ )
    // {
    //     printf("[%p] = %d\n", ptr2+i, *(ptr2+i));
    // }

    //--------ตัวอย่างการรับ นับ char input ที่ละตัว-----------//
    char input[ 100 ];
    int count = 0;
    char c;

    while( ( c= getchar() ) != '\n' ){
        input[ count ] = c ;
        ++count;
    }
    //---------ตัวอย่างการรับ print input ที่ละตัวจนกว่าจะเจอ \0 นั้นก็คือสมาชิกตัวสุดท้ายใน array ทุกอัน ------------//
    for( char *cPtr = input ; *cPtr != '\0'; cPtr++ ){
        printf( "%c\n", *cPtr );

    }


    // char s[ 100 ]; 
    // int i;
    // char c;
    // scanf( "%d = %c = %s", &i, &c, s ); // array store addess no need to use &
    // printf( "%d--%c--%s", i, c, s );

}

//----------สรุป pass by reference vs value ------------//
// ภาษา c จะไม่มีการ pass by value แต่เราจะทำได้โดยการใช้ pointer เข้ามาช่วย pointer คือตัวชี้เป็นประเภทข้อมูลที่จะเก็บ address
// ใน memory ไว้ ดังนั้นถ้าเราใช้ pointer เป็น parameter ใน function จะทำให้เป็นการ pass by reference ไป