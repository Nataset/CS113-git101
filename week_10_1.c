#include <stdio.h>

int main () {
    
//----------String by char[]-----------
    // char color[] = "blue";
    // printf("%c\n", color[1]);
    // printf("%s\n", color);
    
    // ch array เปลี่ยนค่าได้
    // color[0] = 'c';
    // printf("%s\n", color);

    // ch array จบที่ \0
    // char color[] = {'b', 'l', 'u', 'e', '\0'};
    // color[2] = '\0';
    // printf("%s\n", color);

    //sizeof char[] นับ \0ด้วย
    // printf("%d\n", sizeof color);

//----------String by char*-----------
    // char *colorPtr = "blue";
    // printf("%c\n", colorPtr[1]);
    // printf("%c\n", *(colorPtr + 1));
    // printf("%c\n", *colorPtr + 1);
    // printf("%s\n", colorPtr);

    // ch pointer เปลี่ยนค่าไม่ได้
    
    // แต่ ch pointer ที่ชี้ไป array เปลี่ยนค่าได้
    // char color_2[] = "blue";
    // colorPtr = color_2;
    // printf("%s\n", colorPtr);
    // *colorPtr = 'c';
    // printf("%s\n", colorPtr);
    // // sizeof char* ไม่ใช่การนับอักขระ
    // printf("%d\n", sizeof colorPtr);

//----------Array off String-----------

// array od ch array
// ERROR char number[][] = {"one", "two", "three"};

// array of character pointer
// char* numbers[] = {"one", "two", "three"};
// printf("%s\n", numbers[2]);
// printf("%c\n", numbers[2][1]);
// printf("%s\n", *(numbers + 2));
// printf("%c\n", (*(numbers + 2))[1]);
// printf("%c\n", *(numbers + 2)[1]); ERROR segmentation fault

// pointer of character pointer
// char** numbers = {"one", "two", "three"};
// printf("%s\n", numbers[2]);
// printf("%c\n", numbers[2][1]);
// printf("%s\n", *(numbers + 2));
// printf("%c\n", (*(numbers + 2))[1]);

//pointer of character pointer
// char* numbers[] = {"one", "two", "three"};
// char** numberPtr = numbers;
// printf("%s\n", *numberPtr);
// printf("%s\n", *(numberPtr + 1));
// printf("%c\n", ((*(numberPtr + 1))[0]) + 1);

// รับค่า ฆะพรืเ เก็บใน array
// char color[20];
// scanf("%19s", color);
// printf("[%s]\n", color);
// รับคjา String เก็บใส pointer

}
    