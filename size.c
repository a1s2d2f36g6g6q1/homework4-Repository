#include <stdio.h>
#include <stdlib.h>

void main() {
    int **x; // 이중 포인터 x 선언

    printf("-----------------------------------------\n");
    printf("----- [Suh Dong-Woo] [2021041094] ----- \n");
    printf("-----------------------------------------\n");

    printf("sizeof(x) = %lu\n", sizeof(x)); // x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // *x의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x의 크기 출력

    // 이중포인터는 주로 4, 8바이트로 나옴 -> int 자료형이므로 4바이트
}