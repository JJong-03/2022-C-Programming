#define _CRT_SECURE_NO_WARNINGS
//소행렬
#if 0
#include <stdio.h>

#define size 4

int det(int m[4][4], int x, int y) {
	int m_xy[3][3];
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (x == i || y == j) continue;
			m_xy[i > x ? i - 1 : i][j > y ? j - 1 : j] = m[i][j];
			printf("%3d ", m_xy[i > x ? i - 1 : i][j > y ? j - 1 : j]);
		}
		if (i == x || j == y) continue;
		printf("\n");
	}
	long long s = 0;
	for (i = 0; i < 3; i++) {
		s += m_xy[i % 3][0] * m_xy[(i + 1) % 3][1] * m_xy[(i + 2) % 3][2];
		s -= m_xy[i % 3][2] * m_xy[(i + 1) % 3][1] * m_xy[(i + 2) % 3][0];
	}
	return s;
}

int main() {
	int m[size][size] = { 0, };
	int cofactor[size][size] = { 0, };
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &m[i][j]);
		}
	}
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("\n\nM_%d%d\n", i + 1, j + 1);
			cofactor[i][j] = det(m, i, j);
			printf("det(M_%d%d) = %d\n", i + 1, j + 1, cofactor[i][j]);
			cofactor[i][j] *= (i + j) % 2 == 0 ? 1 : -1;
		}
	}

	printf("\nCofactor Matrix\n");
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%3d ", cofactor[i][j]);
		}
		printf("\n");
	}

	printf("\nAdjoint Matrix\n");
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%3d ", cofactor[j][i]);
		}
		printf("\n");
	}

	int det = 0;
	for (i = 0; i < size; i++) {
		det += m[0][i] * cofactor[0][i];
	}
	printf("\ndet = %d\n", det);

	if (det != 0) {
		printf("\nInverse Matrix\n");
		for (i = 0; i < size; i++) {
			for (j = 0; j < size; j++) {
				printf("%3d/%-3d ", cofactor[j][i], det);
			}
			printf("\n");
		}
	}
	else {
		printf("\nSingular Matrix\n");
	}
}
#endif
// 동전 던지기 게임
#if 0 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int coin_test() {

	int i = rand() % 2;

	if (i == 0) {
		return 0;
	}
	else {
		return 1;
	}
}

int main() {
	int front = 0;
	int back = 0; 
	int toss; 
	srand(time(NULL));
	for (toss = 0; toss < 1000; toss++) {
		if (coin_test() == 0) {
			front++;
		}
		else {
			back++;
		}

	}
	printf("앞면은 %d 뒷면은 %d", front, back);
	return 0;
}
#endif
// 컴퓨터와 신나는 가위바위보 가위:0 바위:1 보:2
#if 0 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Whowin(int me, int cmp) {
	if (0 <= me && me <= 2) {
		if (me == 0) {
			if (cmp == 1) {
				printf("졌어 ㅠㅠ");
			}
			else if (cmp == 2) {
				printf("이겼어!!");
			}
			else {
				printf("비겼어!!");
			}
		}
		if (me == 1) {
			if (cmp == 2) {
				printf("졌어 ㅠㅠ");
			}
			else if (cmp == 0) {
				printf("이겼어!!");
			}
			else {
				printf("비겼어!!");
			}
		}
		if (me == 2) {
			if (cmp == 0) {
				printf("졌어 ㅠㅠ");
			}
			else if (cmp == 1) {
				printf("이겼어!!");
			}
			else {
				printf("비겼어!!");
			}
		}
	}
	else {
		printf("범위 밖이야 다시 해봐!!");
	}
	return;
}

int main() {
	int me = 0;
	scanf("%d", &me);
	
	srand(time(NULL));
	int cmp = rand() % 3;

	printf("%d", cmp);
	Whowin(me, cmp);
	return 0;
}
#endif 

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>


#if 0
int count_word(char* s);

int main(void) {

    int wc = count_word("c is hmmteresting");
    printf("단어의 개수: %d\n", wc);

    return 0;
}

int count_word(char* s) {

    int i, wc = 0; //wc: 단어의 개수, wating:단어를 기다리고 있는 상태면 1

    for (i = 0; s[i] != NULL; i++) { // s의 각 글자 조사
        if (isalpha(s[i])) {   //s의 글자가 알파벳이면
            wc++;
        }
    }


    return wc;
}
#endif 

#if 0
int count_word(char* s);

int main(void) {

    int wc = count_word("c is hmmteresting");
    printf("단어의 개수: %d\n", wc);

    return 0;
}

int count_word(char* s) {

    int i, wc = 0, waiting = 1; //wc: 단어의 개수, wating:단어를 기다리고 있는 상태면 1

    for (i = 0; s[i] != NULL; ++i) { // s의 각 글자 조사
        if (isalpha(s[i])) {   //s의 글자가 알파벳이면
            if (waiting) {     //단어를 기다리고 있으면
                wc++;          //카운터 증가
                waiting = 0;   //단어 처리중
            }
        }
        else waiting = 1;    //알파벳이 아니면 단어 기다림
    }
    return wc;
}
#endif 

#if 0
#include <stdio.h>
#define SIZE 10
int main() {
     
    int list[SIZE] = { 0,2,9,8,5,3,4,1,6,7 };

    int i, j, temp, least;

    for (i = 0; i < SIZE - 1; i++) {
        least = i;
        for (j = i + 1; j < SIZE; j++) {
            if (list[j] < list[least]) {
                least = j;
            }
        }
        
        temp = list[i]; // temp =1
        list[i] = list[least]; // list[0] = list [1]
        list[least] = temp; // list [1] = 1
    }
   for (i = 0; i < SIZE; i++)
        printf("%d ", list[i]);

    return 0;
}
#endif

//자고 일어나서 해보기!!!
#if 0
#include <stdio.h>
#define Size 10

int main() {
    int list[Size] = { 0,2,9,8,5,3,4,1,6,7 };
    int i, j, temp, least;

    for (i = 0; i < Size - 1; i++) {
        least = i;
        for (j = i+1; j < Size; j++) {
            if (list[j] < list[least]) {
                least = j;
            }
        }
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }
    for (i = 0; i < Size; i++) {
        printf("%d  ", list[i]);
    }

    return 0;
}
#endif
 //foo 함수 --- 주소안에 값 변경
#if 0 
void foo(int* pa, int* pb) {
    
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {
    int a = 30;
    int b = 10;

    printf("%d %d\n", a, b);

    foo(&a, &b);
    printf("%d %d\n", a, b);
    return 0;

}
#endif

// integer 2진수로 바꾸기!!
#if 0
//integer 를 이진수 형식으로 출력하는거 눈여겨보고있습니다
#include <stdio.h>
void print_binary(int x);

int main() {

    print_binary(4);
    return 0;
}
void print_binary(int x) {
    if (x > 0) {
        print_binary(x / 2);
        printf("%d", x % 2);
    }
}
#endif

//예사롭지 않네요 최대공약수 구하기입니다
#if 0
#include<stdio.h>

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    else {
        gcd(y, x % y);
    }
    
}

int main() {

    printf("%d", gcd(40, 20));
}
#endif

#if 0 
void sort_alpha(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void sort_int(int arr[])
{
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
#endif

#if 0
int main()
{
    char a[10] = "abcdc";
    char* p = a;
    char* idx = strchr(p, 'c');
    printf("%c는 %d번째에 있습니다 \n", 'c', idx - a + 1);
    
    idx = strchr(idx + 1, 'c');
    printf("%c는 %d번째에 있습니다 \n", 'c', idx - a + 1);
}
#endif

#if 0 
int GCD(int a, int b) {
    if (a == 0) return b;
    return GCD(b % a, a);
}

int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}
int main() {
    printf("%d\n", GCD(30, 20));
    printf("%d", LCM(30, 20));
}
#endif
// 스왑
#if 0
void swap(int *x, int *y) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
   
}
int main() {
    int a = 100, b = 200;
    printf("a= %d b= %d\n", a, b);
    swap(&a,&b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}
#endif 





