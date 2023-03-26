#if 0
#include<stdio.h>
int main() {

	int a = 10;
	int* p = NULL;

	printf("%d\n", a);
	printf("%d\n", &a);

	p = &a;
	printf("%d\n", p); //  100번지 : a의 주소
	printf("%d\n", *p); // 값: 10
	printf("%d\n", &p); // p의 주소

	a = 20;
	printf("%d\n", a);// 20
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", &p);

	*p = 50;
	printf("%d\n", a);// 20
	printf("%d\n", p);
	printf("%d\n", *p);

	// a=50, *p= 50
	// p만 이용해서 a의 값을 2배 시켜라==================
	*p = (*p) * 2;
	printf("2배 된 a의 값: %d\n", a);
	//================================================
	a = 10;
	int b = 20;

	p = &b;
	printf("%d\n", *p);

	b = 40;
	printf("%d\n", *p);



	return 0;
}
#endif 

#if 0
#include <stdio.h>
int main() {

	int a = 10;
	char c = 'A';
	printf("a의 사이즈 :%d\n", sizeof(a)); // int = 4byte
	printf("c의 사이즈 :%d\n", sizeof(c)); // char = 1byte


	int* pa = &a;
	char* pc = &c;

	printf("pa 의 사이즈 :%d\n", sizeof(pa)); // 8byte
	printf("pa 의 사이즈 :%d\n", sizeof(pc)); // 8byte 이유 : pointer의 사이즈는 정해져 있음.


	printf("pa :%d | pa +1:%d\n", pa, pa + 1); //pa = 100 pa+1 = 104 -- int = 4byte
	printf("pc :%d | pc +1:%d\n", pc, pc + 1); // pc = 100 pc+1 = 101 -- char = 1byte



	return 0;
}
#endif
#if 0 
#include<stdio.h>
int main() {

	int a = 10; int b = 20;
	int c = 0;
	int* pa = &a;
	int* pb = &b;


	printf("전] a =%d | b= %d\n", a, b); // 10 20
	c = *pa;
	*pa = *pb;
	*pb = c;
	printf("후] a =%d | b= %d", a, b);  // 20 10

	return 0;
}
#endif

#define _CRT_SECURE_NO_WARNINGS
//11장. 포인터
//p. 468
// pointer type 
// pinter type 의 변수
//pointer tpye 의 변수는 '메모리 주소'를 저장
//  
//
// 
#if 0
#include<stdio.h>
int main() {
	int a = 30;

	int* pa; // ☆pointer 변수 pa ☆ *중요 

	printf("a가 살고있는 곳: %p \n", &a);

	pa = &a;

	printf("pa가 살고있는 곳: %p \n", *pa);
	*pa = 0; // *이 붙으면, read or write를 함 -- 권력행사

			 // & : address - of operator
	printf("a의 값: %d \n", *pa); // %p는 64비트로 나타냄


	return 0;
}
// 살고있는곳: &a , 그곳에 값은 : a
#endif

#if 0
#include<stdio.h>
int main() {
	char* pc = 0;
	float* pf = 0;
	double* pd = 0;
	int* pi = 0;

	int a = 10;
	int b = 100;
	// 471. 포인터 초기화
	int* pa;
	*pa = 30000; //랜덤하게 살고있는 집을 30000으로 바꿈-- 절대 이렇게 하면 안됨!! 0으로 지정해주기☆

	int* pa = NULL;
	int* pb = 0;

	int* pa = (int*)10000;
	// & : address - of operator
	// *: dereference operator, 474p
	*pa = 300;



	// p.481 포인터 연산
	int a = 30;
	int* pa = &a;
	char* pc = &a;

	// pa:1000
	// pa = pa +1 ===> 1004    because int는 4byte 단위기 때문에 4개 단위로 이음.
	// pc= pc +1 ===> 1001     because char은 1byte 단위기 때문에 1개 단위로 이음.
	return 0;
}
#endif

#if 0
#include <stdio.h>
//485p 
// call by value : 복사본 넘기기
// call by reference : 원본 넘기기
void foo2(int* a) {
	*a = 200;
	return;
}
void foo(int a) {
	a = 200;
	return;
}
void myswap(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 10;
	foo(a); // 복사본
	foo2(&a); // 원본
	printf("%d", a);
	return 0;
}
#endif

#if 0
#include<stdio.h>
// p 491 포인터를 사용하는 반환값.
int* bar() {
	int k = 300;
	return &k;
}

// p.491 -- 포인터 배열

int main(void)() {

	int a[] = { 10,20,30 };

	printf("%p\n", a); //배열의 이름은 포인터와 같다

	printf("%d\n", a[0]); //
	printf("%d\n", *a);

	printf("%d\n", a[1]);
	printf("%d\n", *(a + 1));
}
#endif 
#if 0
int main() {
	int* pa = bar();
	pritnf("%d\n", *pa);
}
#endif



#if 0
#include <stdio.h>
int main() {




	// p .484 포인터 형변환
	double f;
	double* pd = &f;
	int i = 10;
	int* pi = &i;
	pi = (int*)pd;

	// p .483 ... 간접참조연산자와 증감연산자

	printf("i= %d pi = %p\n", i, pi);
	(*pi)++;
	// int temp = *pi;
	//*pi = temp +1;
	printf("i= %d pi = %p\n", i, pi);
	*pi++;
	// pi = pi+1;
	//int temp = *pi;

	printf("i= %d pi = %p\n", i, pi);

	return 0;
}
#endif