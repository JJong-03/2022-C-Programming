// *********2주차**************
#if 0
#include<stdio.h>

int main() {
	int i[3][5] = { 100,200,300,400,500,600 };
	printf("%d ", &i[0][0] );
	printf("%d ", &i[1][0] );
}

char a = 2, b = 7;
int main() {
	int i , j;
	for (i = 1; i < 9; i++) {
		for (j = 2; j < b; j++, a++) {
			printf("%2d * %2d = %2d  ", j, i, j * i);
			
		}
		printf("\n");
	}
}
#endif

#if 0 
int y;
char z;
int main() {

	    char a, b, c, d;
	    int i, j, k;
		char e, f, g;
	    int l;
		char h;
		int m;
		char x[7];

		m = 0;
}
#endif 

#if 0 
int main() {

	char c = 5;
	int x = 258;
	
	x = c;
}
#endif

#if 0
int main() {
	unsigned char i, count = 0;

	for (i = 32; i < 127; i++) {
		printf("%c(%3d)", i, i);
		count++;
		if (count == 6) {
			count = 0;
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
#endif

#if 0
int main() {
	unsigned char i, count = 0;

	system("chcp 437");
	for (i = 128; i < 255; i++) {
		printf("%c(%3d)", i, i);
		count++;
		if (count == 6) {
			count = 0;
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
#endif

#if 0
int main() {
	char hangul[3] = "가";
	unsigned char code;
	code = hangul[0];//ㄱ
	printf("%x %d\n", code, code);
	code = hangul[1];//ㅏ
	printf("%x %d\n", code, code);
	return 0;
}
#endif

#if 0
int main() {

	unsigned char b1 = 0xb0; // ㄱ
	unsigned char b2 = 0xa1; // ㅏ
	printf("%c%c\n", b1, b2);
	return 0;
}
#endif

#if 0
int main() {
	unsigned char string[3];
	printf("단어를 입력하세요: ");
	scanf("%s", string);

	if (string[0] < 128)
		printf("영문입니다.\n");
	else
		printf("한글입니다\n");

	return 0;
}
#endif

#if 0
int main() {
	
	int i=0; 
	printf("번호를 입력하시오");
	scanf("%d", &i); 
	
	printf("%c\n", 'A' - 1 + i);

	return 0;
}
#endif 