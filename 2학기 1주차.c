//헤더 = 이름,모양 라이브러리 = 구현되는 방법
// 3&4 = 0 3= 011 4= 100
// 3&6 = 2 3= 011 6= 110 , 010= 2
// 3 && 4 = True = 1 // 3 && 0 = 0
// unsigned는 양수만
// signed일 때 >> 오른쪽으로 이동시키면 1이 붙음.

#if 0 
#include<stdio.h>
int main() {
	unsigned char a[4] = { 0, }, b;
	printf("Input Data :");
	scanf("%d", (int*)&a[0]);

	b = a[0] + a[3];
	
	printf("%d\n", b);
}
#endif

#if 0


#include <stdio.h>
int add(int a, int b) {
	int c = 0;
	return c = a + b;
}


int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d", add(a, b));

	return 0;
}


#endif

#if 0

#include<stdio.h>
int main() {
	int n = 0;
	int i;
scanf("%d", &n);
		for (int i = 0; i <=n; i++) {
			printf("%d ", i);
		}

		if (n < 0) {
			printf("negative");
		}
		return 0;
}
#endif

#if 0
#include <stdio.h>


// ===============================================
// 이 부분에 필요한 코드를 작성하시오.
int sub(int a, int b) {
	int c = 0;
	return c = a - b;

}


// ===============================================


int main() {


	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", sub(a, b));


	return 0;
}
#endif


# if 0
#include <stdio.h>

void printCalc(int _input1, int _input2) {
	// 이 부분을 구현하라 =====================
	
	int i = _input2 % 10;
	int k = _input2 - _input2 % 10;
	printf("%d\n", _input1 * i );
	printf("%d\n", _input1* k/10);
	printf("%d\n", _input1 * i + _input1 * k );

	




	// ========================================
}


int main() {
	int input1, input2;
	scanf("%d %d", &input1, &input2);

	printCalc(input1, input2);

	return 0;
}
#endif




// 140 70 35
// 140 0100 1100
#if 0
#include <stdio.h>

void printBinary(unsigned int _x) {
	// 이 부분을 구현하라 ==============================
	int a = 0;
	int count = 0;
	int i = 0;
	for (i = 8; i > 0; i--) {


	}



	// =================================================
}

int main() {

	unsigned int x;
	scanf("%d", &x);

	printBinary(x);

	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <math.h>
int countBinaryOne(unsigned int _data) {
	// 이 부분을 작성하라 ==========================
	int a = 0;
	int i = 0;
	int count = 0;
	for (i = 0; i < 100; i++) {
		if (_data / 2 >= 2) {
			_data = _data / 2;
		}
		else {
			count++;
			break;
		}
	}
	return count;
	}
	




	// =============================================



int main() {

	unsigned int data;
	scanf("%d", &data);

	printf("%d", countBinaryOne(data));

	return 0;
}
#endif