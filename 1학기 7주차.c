#define _CRT_SECURE_NO_WARNINGS
#if 0
#include <stdio.h>
#include <stdlib.h> // standard library -- ex) rand
#include <time.h> // 시간에 관한
// Epoch - 컴퓨터의 창세기 1970년 1월 00시 00부터 초단위로 쭉---time(0)
// seed = 첫 항
int main() {
	int i;
	int cnt_0 = 0;
	int cnt_1 = 0;
	int cnt_2 = 0;
	int v;
	srand(time(NULL));
	for (i = 0; i < 100; i++) {
		v = rand() % 3 ;//1~45 수가 나와야함, --어떤 수를 45로 나누면 나머지는 0~44가 나옴, 여기에 +1을 사용해 구한다.
		switch (v) {
		case 0:
			cnt_0++;
			break;
		case 1:
			cnt_1++;
			break;
		case 2:
			cnt_2++;
			break;

		}
	}
	printf("%d, %d %d\n %d", cnt_0, cnt_1, cnt_2 , v);
	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <math.h>

//p.349 수학함수,
#define PI 3.141592

double cvtDegreeToRadian(double x) {
	return x * PI / 180.0;
}
int main() {

	// sin, cos, tan
	// degree 단위가 아니라, radian을 입력
	// degree --> radian 방법
	// degree *PI / 180.0

	printf("sin30도 %.2f\n ", sin(cvtDegreeToRadian(30)));

	// m의 n승

	// pow==> power
	pow(2, 3); // 2의 3승
	// sqrt // square root --> 근의 공식
	printf("%f\n", sqrt(16.0));
	return 0;
}
#endif



#if 0
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void whoWin(int _me, int _cmptr) {
	if (_me == _cmptr) {
		printf("비겼습니다.");
	}
	if (_me == 0) {
		if (_cmptr == 2) {
			printf("사람이 이겼어");
		}
		else if (_cmptr == 1) {
			printf("컴퓨터가 이겼어");
		}
	}
	else if (_me == 1) {
		if (_cmptr == 0) {
			printf("사람이 이겼어");
		}
		else if (_cmptr == 2) {
			printf("컴퓨터가 이겼어");
		}

	}

	else if (_me == 2) {
		if (_cmptr == 0) {
			printf("사람이 이겼어");
		}
		else if (_cmptr == 1) {
			printf("컴퓨터가 이겼어");
		}

	}

	return;
}
int main() {
	//컴퓨터와 가위, 바위, 보
	//가위 : 0
	//바위 : 1
	//보 : 2
	int me = 0; //내가 무엇을 낼 것인가>
	int cmptr;

	scanf("%d", &me);

	srand(time(NULL));
	cmptr = rand() % 3;

	//누가 이겼는지 판단 후 메세지 풀력
	// void whoWin(int _me , int _cmptr)
	printf("%d %d\n", me, cmptr);
	whoWin(me, cmptr);

	return 0;
}
#endif