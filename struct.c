#include <stdio.h>

struct student1 { // student1 구조체 정의
    char lastName;
    int studentId;
    char grade;
};

typedef struct { // student2 구조체 정의
    char lastName;
    int studentId;
    char grade;
} student2; 

int main() {
    struct student1 st1 = {'A', 100, 'A'}; // student1 구조체로 st1 선언 및 초기화

    printf("-----------------------------------------\n");
    printf("----- [Suh Dong-Woo] [2021041094] ----- \n");
    printf("-----------------------------------------\n");

    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'}; // student2 구조체로 st2 선언 및 초기화

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3; // student2 구조체로 st3 선언

    st3 = st2; // st2의 값으로 st3 초기화

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);


    printf("\nEquality test: ");
    if(st2.grade == st3.grade && st2.lastName == st3.lastName && st2.studentId == st3.studentId)
        printf("equal\n");
    else
        printf("not equal\n");
    
    // st2 == st3 이 되지 않은 이유 -> 구조체의 멤버 별 비교가 필요함 => 각 멤버를 전부 비교하는 방법이 좋음

    return 0;
}