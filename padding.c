#include <stdio.h>

struct student { // student 구조체 정의
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main() {
    struct student pst; // student 를 기반으로 하는 구조체 변수 pst 선언


    printf("-----------------------------------------\n");
    printf("----- [Suh Dong-Woo] [2021041094] ----- \n");
    printf("-----------------------------------------\n");
    
    printf("size of student = %ld\n", sizeof(struct student)); // student 구조체 크기 출력
    printf("size of int = %ld\n", sizeof(int)); // int 크기 출력
    printf("size of short = %ld\n", sizeof(short)); // short 크기 출력
    
    return 0;
}