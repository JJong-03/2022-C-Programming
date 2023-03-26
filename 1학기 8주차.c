#define _CRT_SECURE_NO_WARNINGS
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main() {
	srand(time(0));
	int chance = 5;
	int num = rand() % 100 + 1;
	int y = 0;
	int i = 0;
	printf("주어진 기회는? : %d\n", chance);
	printf("%d", num);

	for (i; i < chance; i++) {
		printf("숫자를 입력하세요(1~100) :");
		scanf("%d", &y);
		if (1 <= y && y <= 100) {
			if (y < num) {
				printf("UP\n");

			}
			else if (y > num) {
				printf("DOWN\n");

			}

			else if (y == num) {
				printf("정답입니다");
				break;
			}
		}

		else {
			printf("범위 밖 숫자\n");
			i--;
		}

	}
	if (i == chance) { printf("\n기회 끝 정답은 :%d", num); }

	return 0;
}
#endif

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
# if 0
int bigger(int a, int b) {

	if (a > b) {
		return a;
	}
	else if (a < b) {
		return b;

	}
}
int biggest(int x, int y, int z) {
	int max = (x > y) ? x : y;
	return (max > z) ? max : z;


}

int main() {
	int a = 10, b = 40, c = 50;
	printf("a,b 중 큰 것 :%d\n", bigger(a, b));
	printf("a,b,c중 큰 것 :%d", biggest(a, b, c));

	return 0;

}
#endif

#if 0
int is_prime(int n) {

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;// 소수가 아님!!
		}

	}
	return 1; // 소수입니다~
}

int main() {

	int x = 0;
	scanf("%d", &x);
	printf("%d", is_prime(x));

}
#endif
//난수
#if 0
#include <stdlib.h>
#include <time.h>

int main() {


	srand(time(NULL)); // 시드 값 설정- srand

	printf("%d", rand());

	return 0;
}

#endif


