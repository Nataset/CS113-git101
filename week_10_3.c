#include <stdio.h>
#include <string.h>

    //  การประกาศ struct
typedef struct Student_ {
    char name[100];
    char id[11];
    double score;
} Student;

void print_student(Student stu) {
    printf("%s (%s): %.2lf\n", stu.name, stu.id, stu.score);
}

void add_score(Student* stu, double score) {
    stu->score += score;
}

int main() {
    //  นำ struct มาใช้ โดยการประกาสตัวแปร struct
    //  และ struct เป็น data type
    Student stop, ikkiu;
    Student students[10];
    Student* sp = &stop;

    students[0].score = 10;
    strcpy(students[0].name, "Nataset");
    strcpy(students[0].id, "6210402411");

    // access struct member using dot(.)
    // assign str struct member using strcpy() function

    strcpy(stop.name, "supawit");
    strcpy(stop.id, "62104xxxxx");
    stop.score = 0;

    strcpy(ikkiu.name, "nataphong");
    strcpy(ikkiu.id, "62104xxxxx");
    ikkiu.score = 100.00;

    print_student(stop);
    print_student(ikkiu);
    add_score (&ikkiu, 20);
    add_score (sp, -50);
    print_student(stop);
    print_student(ikkiu);

}