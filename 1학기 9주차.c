// Chap. 10 배열, array
// p.417
// 변수를 여러 개 왕창, 동시에 만드는 방법
#if 0 
#include<stdio.h>
int main() {

	int a, b, c;
	int k[3]; // 3개의 int 변수를 만든다.
			  // k[0], k[1], k[2]  --- 모든 배열의 index는 0부터 시작
			  // k[?] <-- int

	return 0;
}
#endif
#if 0
// p.418
// 배열은 메모리의 연속된 공간
// 배열의 선언과 잘못된 예.
int aaa[10];

//잘못된 예 ================================================((선언할 때))
int aaa[]; //크기가 없어

int size = 10;
char aaa[size]; // 크기는 항상 상수

int aaa[-1]; // 크기가 음수는 안됨

int aaa[2.0]// 정수만 가능





	// 배열요소 접근 (access : read, wrire) 
	// 419쪽
	// array element
	int k[3];

k[2] = 10; // write
k[0] = k[2]; // read 해서, k[0]에 write
printf("%d", k[0]); // read
return 0;
}
#endif

#if 0
#include<stdio.h>
int main(void) {

	// p.421 배열과 반복문
	int a[100];

	int i;
	for (i = 0; i < 100; i++) {
		a[i] = i;
	}
	for (i = 0; i < 100; i++) {
		printf("%d\n", a[i + 3]);
	}

	// superb question
	// p.423 인덱스의 범위
	// c언어 범위 x , 자바 범위 o 범위 넘어갈 시 오류로 판단.
	// 
	// int a[100] : 0~99
	// a[102] a[101] a[100] : 
}
#endif
#if 0
#include <stdio.h>
int main() {
	
	int a[] = { 1,2,3 };
	int a[3] = { };
	int a[3] = { 10 }; // 맨 앞에만 10이고 나머지 둘은 0

	printf("%d %d %d", a[0], a[1], a[3]);
}
#endif

#if 0
#include <stdio.h>
int main() {
	// p. 428
	// 배열의 복사, 비교!!
	int a[3] = { 10 ,20 , 30 };
	int b[3];

	// if (a == b) {  //이거 안됨.. 각 요소별로 해야 됨}

	//b = a;    복사 안됨
		for (int i = 0; i < 3; i++) {
			b[i] = a[i];
		}
	
	int cnt = sizeof(a) / sizeof(a[0]);//   /10
	
	printf("%d %d %d", a[1], b[1] , cnt);
	return 0;
}
#endif
#if 0
#include <stdio.h>
	// a[]는 원본을 넘겨주고   int a 는 복사본을 넘겨줌
	void foo(int k[]) {
		k[0] = k[0] * 2;
		k[1] = k[1] * 3;
		k[2] = k[2] * 10;
		return;
	}

	int main() {
		int a[3] = { 1,2,3 };
		foo(a);
		printf("%d %d %d", a[0], a[1], a[2]);
		return 0;
	}
#endif
#if 0
	// p.438 원본배열의 변경 금지 ---- const 추가
#include<stdio.h>
	void foo(const int k[]) {
		k[0] = k[0] * 2;
		k[1] = k[1] * 3;
		k[2] = k[2] * 10;
		return;
	}

	int main() {
		int a[3] = { 1,2,3 };
		foo(a);
		printf("%d %d %d", a[0], a[1], a[2]);
		return 0;
	}
#endif

#if 0
	// p.451
	void foo(int k[][3]) {

	}

	int main() {

		// 1차원 배열
		// p.445 2차원 ...
		//int a[10][10]; // 10행 10열 = 100
		//a[5][5] = 10
		//2차원 배열의 초기화	
		int a[3][3] = {
			1,2,3,
			4,5,6,
			7,8,9
		};
		foo(a);
		return 0;
	}
#endif

	//p.454 ---tik tak toe

	// 숙제 1. 승패를 판정해서, 누가 이겼는지 출력하고, 프로그램 종료
	// 숙제 2. 컴퓨터가 상대하도록 만든다.
#if 0
	int main() {
		char board[3][3];
		int x, y, k, i;
		//초기화...
		for (x = 0; x < 3; x++) {
			for (y = 0; y < 3; y++) {
				board[x][y] = ' ';
			}
		}
	}

	//사용자가 입력하는 내용을 넣는다.
	for (k = 0; k < 9; k++) {
		printf("돌을 놓을 위치는 :");
		scanf("%d %d", &x, &y);
		board[x][y] = (k % 2 == 0) ? "O" : "X";
		//화면에 예쁘게 표시한다
		for (i = 0; i < 3; i++) {
			printf("---l---l---\n");
			printf("%c %c %c\n", board[i][0], board[i][1], board[i][2])
		}
		printf("---l---l---\n");
	}
#endif

#if 0
#include<stdio.h>

int x = 10;
int pp = 0;

void aaa() {
	static int p = 50; // 중요함다~
	p++;
	printf("%d ", p);
}

int main() {

	int a;
	int x = 20;
	volatile int n;

	for (int i = 0; i < 10; i++)
	{
		n = i;
	}

	printf("%d\n", x);
	aaa();
	aaa();
	aaa();
	aaa();
	return 0;
}
#endif

//팩토리얼 함수를 재귀함수 호출해서 만들기
#if 0
#include <stdio.h>
int factorial(int n) {
	printf("지금 n값 : %d\n", n);
	// 탈출 조건
	if (n <= 1) {
		return 1;
	}
	else {
		return factorial(n - 1) * n;
	}
}

int main() {
	int n = 4;
	printf("%d! 은 %d 입니다.\n", n, factorial(n));
	return 0;
}
#endif 

// 1부터 N까지 모두 더하는 재귀함수 만들기
#if 0
#include<stdio.h>
int sum(int n) {

	if (n <= 1) {
		return 1;
	}
	else {
		return sum(n - 1) + n;
	}
}

int main() {
	int n = 100;
	printf("%d 은 %d입니다.\n", n, sum(n));
}
#endif


//하노이 탑 만들기
#if 0
#include<stdio.h>
int count = 0;

void hanoi(int n, char from, char tmp, char to) {
	if (n == 1) {

		//from 에서 to 로 원판 1을 옮긴다
		printf("원판 1을 %c에서 %c로 옮긴다.\n", from, to);
		count++;

	}
	else {
		//from의 맨 밑의 원판을 제외한 나머지 원판을 tmp로
		hanoi(n - 1, from, to, tmp);
		//from에 있는 한개의 원판을 to 로 옮긴다.
		printf("원판 %d을 %에서 %c로우 옮긴다. \n", n, from, to);
		count++;
		//tmp의 원판을 to 로 옮긴다.
		hanoi(n - 1, tmp, from, to);

	}
}

int main() {
	hanoi(3, 'A', 'B', 'C');
	printf("count = %d", count);
	return 0;
}
#endif

#if 0
// 하노이탑 count를 static 변수로!
#include <stdio.h>
int hanoi(int n, char from, char mid, char to) {
	static int count = 0;
	if (n == 1) {
		printf("원판 1을 %c에서 %c로 옮긴다.\n", from, to);
		count++;
	}
	else {
		hanoi(n - 1, from, to, mid); // A에서 B로 옮긴다.== C 경유지
		printf("원판 %d을 %c에서 %c로우 옮긴다.\n", n, from, to);
		count++;
		hanoi(n - 1, mid, from, to); // B에서 C로 옮긴다== A 경유지
	}
	return count;
}

int main() {

	printf("count = %d", hanoi(3, 'A', 'B', 'C'));
	return 0;
}
#endif
