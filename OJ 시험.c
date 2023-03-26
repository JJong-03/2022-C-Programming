#define _CRT_SECURE_NO_WARNINGS
//----------------------------------------------------
// main함수가 동작할 수 있도록 필요부분을 프로그래밍하세요.
// 예. 필요한 구조체 정의, 전역변수 등.
// 완성 후에는 전체를 복사하여, 붙여넣기로 제출하면 됩니다.
//1529
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//  채워넣을 부분
#if 0
struct person {
	char name[10];
	int age;
};

struct person list[10];
int count;

void addToInfo(struct person p) {
	list[count] = p;
	count++;
}

void showInfo() {
	for (int i = 0; i < count; i++) {
		printf("%s ---> %d\n", list[i].name, list[i].age);
	}
}

//-------------------------------------------------
// 아래로는 어떠한 변경도 하지 마세요.
int main(void) {

	// 최대 길이 9인 이름과 나이를 n개 (최대 n=10) 입력받아 
	// 구조체에 넣은 후, 구조체 배열에 저장하는 함수 addToInfo()를 호출한다.
	// 이름에 "end"가 입력되면, 
	// showInfo() 함수를 호출하여, 구조체 배열의 값들을 입력순으로 출력한다.
	struct person p;
	char name[10];
	unsigned int age;


	while (1) {
		scanf("%s", name);
		if (strcmp(name, "end") == 0) {
			break;
		}
		scanf("%d", &age);
		strcpy(p.name, name);
		p.age = age;
		addToInfo(p);
	}

	// 구조체 배열에 저장된 값들을 입력순으로 출력하는 함수
	// 출력형식은 "name ---> age"
	showInfo();

	return 0;

}
#endif
#if 0 
int main() {
	char s[100] = "";

	gets(s);
	int n = strlen(s);
	int err = 0;

	for (int i = 0; i < n / 2; i++) {
		if (s[i] == s[n - i -1]) {
			continue;
		}
		else {
			err = 1;
		}
	}
	if (err == 0)
		printf("1");
	else if (err == 1)
		printf("0");

	return 0;
}
#endif

#if 0
//1525
#include<stdio.h>

struct count {
	int num;
	int cnt;
};

int main() {
	struct count a[10] = {
		{0,0},{1,0},{2,0},{3,0},{4,0},
		{5,0},{6,0},{7,0},{8,0},{9,0}
	};
	for (int i = 0; i < 10; i++) printf("%d %d\n",a[i].num, a[i].cnt);
	while (1) {
		int integer, p;
		scanf("%d", &integer);
		if (integer == -999)break;
		while (integer != 0) {
			p = integer % 10;
			switch (p) {
			case 0:a[0].cnt++; break;
			case 1:a[1].cnt++; break;
			case 2:a[2].cnt++; break;
			case 3:a[3].cnt++; break;
			case 4:a[4].cnt++; break;
			case 5:a[5].cnt++; break;
			case 6:a[6].cnt++; break;
			case 7:a[7].cnt++; break;
			case 8:a[8].cnt++; break;
			case 9:a[9].cnt++; break;
			}
			integer = integer / 10;
			//for (int i = 0; i < 10; i++) printf("%d\n", a[i].cnt);
		}
	}
	struct count b;
	b = a[0];
	for (int i = 1; i < 10; i++) {
		b = (a[i].cnt > b.cnt) ? a[i] : b;
	}
	printf("%d %d", b.num, b.cnt);
}
#endif
// 기초 넓이 구조체.
#if 0
#include <stdio.h>

struct point {
	int x;
	int y;
};
struct rect {
	struct point p1;
	struct point p2;
};

int main() {
	struct rect r;
	int w, h, area, peri;

	    printf("왼쪽 상단의 좌표를 입력하시오:");
		scanf("%d %d", &r.p1.x, &r.p1.y);

		printf("오른쪽 하단의 좌표를 입력하시오:");
		scanf("%d %d", &r.p2.x, &r.p2.y);

		w = abs(r.p1.x - r.p2.x);
			h = abs(r.p1.y - r.p2.y);
			area = w * h;
			printf("%d", area);
}
#endif
//1273
#if 0
#include <stdio.h>
#include <string.h>
struct alphabetcount {
	char alphabet[26];
	int count[26];
};
int main() {
	char s[50];
	gets(s);

	struct alphabetcount a = { 0 };
	int st = strlen(s);
	
	for (int i = 0; i < 26; i++) {
		a.alphabet[i] = 'a' + i;
	}
	for (int i = 0; i < 26; i++) {
		for (int k = 0; k < 26; k++) {
			if (s[i] = a.alphabet[k] == 0) {
				a.count[k]++;
			}
		}

	}
	for (int i = 0; i < 26; i++) {
		if (a.count[i] >= 1) {
			printf("%c %d\n", a.alphabet[i], a.count[i]);
		}
	}

	return 0;
}
#endif
#if 0 
struct lph {
	int alphabet;
	int count;
};
int mystery(char str[]) {
	struct lph a[52];
	for (int i = 0; i < 26; i++) {
		a[i].alphabet = 'a' + i;
		a[i].count = 0;
		a[i + 26].alphabet = 'A' + i;
		a[i + 26].count = 0;
	}
	//for (int i = 0; i < 52; i++) printf("%c %d ", a[i].alphabet, a[i].count);
	//printf("\n");
	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0')break;
		for (int j = 0; j < 52; j++) {
			if (str[i] == a[j].alphabet) {
				a[j].count++;
			}
		}
	}
	//for (int i = 0; i < 52; i++) printf("%c %d ", a[i].alphabet, a[i].count);
	//printf("\n");
	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < 51; j++) {
			if (a[j].count < a[j + 1].count) {
				struct lph b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	//for (int i = 0; i < 52; i++) printf("%c %d ", a[i].alphabet, a[i].count);
	//printf("\n");
	return a[0].alphabet + a[1].alphabet + a[2].alphabet;
}
int main(void) {

	char str[101];
	scanf("%s", str);
	printf("%d", mystery(str));
	return 0;
}
#endif

//동적메모리
#if 0
int main() {
	
	int* pi;
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("동적 메모리 할당에 실패했습니다\n");
		exit(1);
	}
	*pi = 100;
	printf("%d\n" ,* pi);
	free(pi);
	return 0;
}
#endif
// 동적메모리 a~z까지 출력
#if 0
int main() {
	char* pc = NULL;
	int i = 0;
	pc = (char*)malloc(100 * sizeof(char));
	if (pc == NULL) {
		exit(1);
	}
	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;
	}
	*(pc + i) = 0;
	printf("%s\n", pc);
	free(pc);
	return 0;

}
#endif
#if 0 
int main() {
	int* pi, i;
	pi = (int*)mallc(5 * sizeof(int));
	if (pi == NULL) {
		exit(1);
	}
	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;
	for()

	return 0;
}

#endif
#if 0
//----------------------------------------------------
// main함수가 동작할 수 있도록 필요부분을 프로그래밍하세요.
// 예. 필요한 구조체 정의, 전역변수 등.
// 완성 후에는 전체를 복사하여, 붙여넣기로 제출하면 됩니다.

#include <stdio.h>
#include <string.h>

//  채워넣을 부분


//-------------------------------------------------
// 아래로는 어떠한 변경도 하지 마세요.
int main(void) {

	// 최대 길이 9인 이름과 나이를 n개 (최대 n=10) 입력받아 
	// 구조체에 넣은 후, 구조체 배열에 저장하는 함수 addToInfo()를 호출한다.
	// 이름에 "end"가 입력되면, 
	// showInfo_ascening_order() 함수를 호출하여, 구조체 배열의 값들을 알파벳의 오름차순으로 출력한다.
	struct person p;
	char name[10];
	unsigned int age;


	while (1) {
		scanf("%s", name);
		if (strcmp(name, "end") == 0) {
			break;
		}
		scanf("%d", &age);
		strcpy(p.name, name);
		p.age = age;
		addToInfo(p);
	}

	// 구조체 배열에 저장된 값들을 알파벳의 오름차순으로 출력하는 함수
	// 출력형식은 "name ---> age"
	showInfo_ascending_order();

	return 0;

}
#endif 

#if 0//구조체
//사람 이름, 나이를 쌍으로 입력 받아 저장, 나이 오름차순으로 출력
//최대 10명
struct profile {
	char name[];
	int age[];
};

int main() {
	struct profile p[10];

	for (int i = 0; i < 10; i++) {
		gets(p[i].name);
		if (strcmp("end", p[i].name) == 0) {
			break;
		}
		scanf("%d", &p[i].age);
	}

	int youngest_idx = -1; //인덱스 값

	int youngest_age = 10000;

	for (int i = 0; i < 10; i++) {
		if (p[i].age < youngest_age) {
			youngest_age = p[i].age;
			youngest_idx = i;
		}
	}
	printf("가장 나이가 어린 사람 이름은 %s\n", p[youngest_idx].name);
}
#endif
// 오름차순
#if 0 
void showInfo_ascending_order() {
	for (int i = 0; i < n - 1; i++)
	{
		char temp[10];
		int index = i;
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(list[index].name, list[j].name) > 0)
				index = j;
		}
		strcpy(temp, list[i].name);
		strcpy(list[i].name, list[index].name);
		strcpy(list[index].name, temp);
	}
	for (int i = 0; i < n; i++) {
		printf("%s ---> %d\n", list[i].name, list[i].age);
	}
}
#endif

#if 0
// oj1515
#include<math.h>
#include<string.h>
int main() {
	char A[100];
	char B[100];
	gets(A);
	gets(B);
	char* a = A;
	char* b = strstr(A, B);
	if (fabs(b - a) < 100) printf("%d\n", b - a);
	else printf("%d", -1);
}
#endif

#if 0
//1536
struct lph {
	int alphabet;
	int count;
};
int mystery(char str[]) {
	struct lph a[52];
	for (int i = 0; i < 26; i++) {
		a[i].alphabet = 'a' + i;
		a[i].count = 0;
		a[i + 26].alphabet = 'A' + i;
		a[i + 26].count = 0;
	}
	//for (int i = 0; i < 52; i++) printf("%c %d ", a[i].alphabet, a[i].count);
	//printf("\n");
	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0')break;
		for (int j = 0; j < 52; j++) {
			if (str[i] == a[j].alphabet) {
				a[j].count++;
			}
		}
	}
	//for (int i = 0; i < 52; i++) printf("%c %d ", a[i].alphabet, a[i].count);
	//printf("\n");
	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < 51; j++) {
			if (a[j].count < a[j + 1].count) {
				struct lph b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	//for (int i = 0; i < 52; i++) printf("%c %d ", a[i].alphabet, a[i].count);
	//printf("\n");
	return a[0].alphabet + a[1].alphabet + a[2].alphabet;
}
int main(void) {

	char str[101];
	scanf("%s", str);
	printf("%d", mystery(str));
	return 0;
}
#endif



#if 0 
//1530 개어려움
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//----------------------------------------------------
// main함수가 동작할 수 있도록 필요부분을 프로그래밍하세요.
// 예. 필요한 구조체 정의, 전역변수 등.
// 완성 후에는 전체를 복사하여, 붙여넣기로 제출하면 됩니다.

struct person {
	char name[10];
	unsigned int age;
};

struct person info[10];
int count = 0;

void addToInfo(struct person p)
{
	info[count].age = p.age;
	strcpy(info[count].name, p.name);
	count++;
}

void showInfo_ascending_order(void)
{
	int i, j;
	char temp[10];
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (strcmp(info[j].name, info[j + 1].name) > 0)
			{
				strcpy(temp, info[j].name);
				strcpy(info[j].name, info[j + 1].name);
				strcpy(info[j + 1].name, temp);
			}
		}
	}
	for (i = 0; i < count; i++)
	{
		printf("%s ---> %d\n", info[i].name, info[i].age);
	}
}

//-------------------------------------------------
// 아래로는 어떠한 변경도 하지 마세요.
int main(void) {

	// 최대 길이 9인 이름과 나이를 n개 (최대 n=10) 입력받아 
	// 구조체에 넣은 후, 구조체 배열에 저장하는 함수 addToInfo()를 호출한다.
	// 이름에 "end"가 입력되면, 
	// showInfo_ascening_order() 함수를 호출하여, 구조체 배열의 값들을 알파벳의 오름차순으로 출력한다.
	struct person p;
	char name[10];
	unsigned int age;


	while (1) {
		scanf("%s", name);
		if (strcmp(name, "end") == 0) {
			break;
		}
		scanf("%d", &age);
		strcpy(p.name, name);
		p.age = age;
		addToInfo(p);
	}

	// 구조체 배열에 저장된 값들을 알파벳의 오름차순으로 출력하는 함수
	// 출력형식은 "name ---> age"
	showInfo_ascending_order();

	return 0;

}
#endif



// 성적 우수자 찾기
#if 0
#include<stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};
struct student list[] = {
	{20180001,"홍길동",3.1},
{20180002,"김철수", 3.2},
	{20180003,"김영희", 3.9}
};

int main() {

	struct student super;
	int i, size;

	size = sizeof(list) / sizeof(list[0]);
	super = list[0];
	for (i = 1; i < size; i++) {
		if (list[i].grade > super.grade) {
			super = list[i];
		}
	}
	printf("평점 베스트 %s %d %f", super.name, super.number, super.grade);
	return 0;
}
#endif

#if 0
#define WORDS 5

int main() {
	int i, index;
	char dic[WORDS][2][30] = {
		//단어의 개수, 0이면 영어 1이면 한글, 문자열의 최대 길이

		{"computer","컴퓨터"},
		{"boy","소년"},
		{"Narannom","월클"},
		{"GABI","사랑해"},
		{"xiu","???:마크 주민아니에요?"},
	};


	char word[30];

	printf("단어를 입력하시오: ");
	scanf("%s", word);



	index = 0;

	for (i = 0; i < WORDS; i++) {
		if (strcmp(dic[index][0], word) == 0) { //영어와 일치하는 문자열이 발견되면
			printf("%s: %s\n", word, dic[index][1]); //알치하면 한글 출력
			return 0;
		}
		index++;
	}
	printf("사전에서 발견되지 않았습니다. \n");

	return 0;
}
#endif