#define _CRT_SECURE_NO_WARNINGS
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef union uni {
    char a[8]; // 8byte
    int b; // 4byte
    long long c; // 8byte
} A; // 공용체 선언

int main()
{
  
    A a; // 공용체 변수 선언

    printf("%d\n", sizeof(a)); // 공용체 크기 출력
   
    strcpy(a.a, "FF"); // a.a에 abcd 저장
    
    printf("%s\n", a.a);
    printf("%d\n", a.b);
    printf("%lld\n", a.c);
    // 공용체 멤버들 출력
}
#endif
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef union uni {
    int a;
    short b;
    char c;
} A; // 공용체 선언

int main()
{
    A a; // 공용체 변수 선언
    int temp = 0;
    a.a = 0x12345678; // a에 0x12345678 저장
  
    printf("%x\n", a.a);
    printf("%x\n", a.b);
    printf("%x\n", a.c);
    // 공용체 멤버들 출력
}


struct person {
    char name[20];
    char pID[20];
    struct person* frnd;
};
#endif




#if 0
#include <stdio.h>

typedef struct person {
    char name[20];
    int age;
    char adress[20];
}person;

void swap(person* first, person* second);

int main(void) {
    person person1 = { "홍길동", 25, "우리집" };
    person person2 = { "임꺽정", 35, "길거리" };

    printf("person1 이름 : %s, 나이: %d, 주소: %s\n", person1.name, person1.age, person1.adress);
    printf("person2 이름 : %s, 나이: %d, 주소: %s\n", person2.name, person2.age, person2.adress);
    printf("두 값 바꾸기\n");

    swap(&person1, &person2);

    printf("person1 이름 : %s, 나이: %d, 주소: %s\n", person1.name, person1.age, person1.adress);
    printf("person2 이름 : %s, 나이: %d, 주소: %s\n", person2.name, person2.age, person2.adress);
    return 0;
}

void swap(person* first, person* second) {
    person temp;
    temp = *first;
    *first = *second;
    *second = temp;
};
#endif

#if 0
#include<stdio.h>
typedef struct person {
    char name[10];
    int age;
}person;
void swap(person* p1, person* p2) {
    person temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main() {
    person person1 = { "박지성" , 19 };
    person person2 = { "김민재", 30 };
    swap(&person1, &person2);

    printf("이름 : %s, 나이: %d \n", person1.name, person1.age);
    printf("이름 : %s, 나이: %d ", person2.name, person2.age);
}
#endif

#if 0
#include<stdio.h>
typedef struct person {
    char name[10];
    int age;
}person;

void swap(person*p1, person*p2) {
    person temp;
        temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
int main() {
    person person1 = { "감자칩", 1500 };
    person person2 = { "치즈퐁듀" , 500 };

    swap(&person1, &person2);

    printf("%s, %d\n", person1.name, person1.age);
    printf("%s, %d\n", person2.name, person2.age);
}
#endif 
#if 0
#include <stdio.h>

struct sample {
    unsigned a : 1;
    unsigned b : 1;
    unsigned c : 1;
    unsigned d : 1;
    unsigned e : 1;
    unsigned f : 1;
    unsigned g : 1;
    unsigned h : 1;
};

union key_type {
    char ch;
    struct sample bits;
} key;
int main() {
    struct sample f1 = { 0 }; // 0으로 초기화

    f1.a = 4; // 0000 0100
    f1.b = 2; // 0000 0010
    f1.c = 8; // 0000 1000
    f1.d = 1; // 0000 0001
    key.ch = 0x10;
    printf("%d\n", key.ch);
    printf("%u\n", f1.);
    printf("%d", sizeof(int));
}
#endif 
#if 0
#include<stdio.h>
struct Flags {
    union {
        struct {
            unsigned short a : 3;
            unsigned short b : 2;
            unsigned short c : 5;
            unsigned short : 1; // 패딩!!!!
            unsigned short d : 5; // 3+2+7+4 = 16bit
          
        };                        
        unsigned short e; //16bit = 2byte
    };
};

int main() {
    struct Flags f1 = { 0 }; // 0으로 초기화

    f1.a = 4; // 0000 0100
    f1.b = 2; // 0000 0010
    f1.c = 8; // 0000 1000
    f1.d = 117; // 0111 0101

  
    printf("%u\n", f1.e);
    printf("%d", sizeof(int));
}
#endif
#if 0
#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(void) {
    int result;
    int (*pf)(int, int);    // 함수 포인터 선언

    pf = add;
    result = pf(10, 20);    // add(10, 20)과 같음
    printf("result = %d\n", result);    // result = 30

    pf = sub;
    result = pf(10, 20);    // sub(10, 20)과 같음
    printf("result = %d\n", result);    // result = -10

    return 0;
}
#endif
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct person {
    char name[10];
    int age;
}person;

int main() {
    person* p = malloc(sizeof(person));
    p->age = 25;
    strcpy(p->name, "감자");

    printf("%s , %d", p->name, p->age);
    free(p);
    return 0;
}

