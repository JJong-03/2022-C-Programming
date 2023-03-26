#define _CRT_SECURE_NO_WARNINGS
//1002
#if 0 
#include <stdio.h>
void printBinary(unsigned int _x) {
    // 이 부분을 구현하라 ==============================
    int j = 0;
    for (j = 7; j >= 0; j--) {
        if(_x >> j & 0x01){
            printf("1");
        }
        else {
            printf("0");
        }
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
//1003
#if 0
#include <stdio.h>
int countBinaryOne(unsigned int _data) {
    // 이 부분을 작성하라 ==========================
    int j = 0;
    int cnt = 0;
    for (j = 31; j >= 0; j--) {
        if (_data >> j & 0x01) {
            cnt++;
        }    
    }
    return cnt++;




    // =============================================
}


int main() {

    unsigned int data;
    scanf("%d", &data);
    printf("%d", countBinaryOne(data));
   

    return 0;
}
#endif
//1004 N번째까지 비트 연사자 0으로 만들기
#if 0

#include <stdio.h>

void printModifiedData(unsigned int _a, int _N) {
    // 이 부분을 작성하라 ==========================
    for (int i = 0; i < _N; i++) {
        _a = _a >> 8;
    }
    _a = _a << (8 * _N);

    printf("%08X", _a);

    // =============================================
}

int main()
{
    unsigned int a = 0X12345678; //예시
    int N = 0;

    scanf("%X", &a); // 16진수 형태의 숫자 입력
    scanf("%d", &N); // 1~4의 숫자

    printModifiedData(a, N);

    return 0;
}

#endif
//1005 move >>
#if 0
#include <stdio.h>

void drawBox(unsigned char _data[]) {
    // 이 부분을 작성하라 ================================
    for (int i = 0; i < 4; i++) {
        for (int j = 7; j >= 0; j--) {
            if ((_data[i] >> j) & 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }


    // ==================================================

}

int main() {

    unsigned char data[4] = { 0XFF, 0X12, 0X34, 0X01 }; // 예시
    int input = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%X", &input);
        data[i] = (char)input;
    }

    drawBox(data);

    return 0;
}
#endif
//1040
#if 0
#include<stdio.h>
int main() {
    unsigned int a = 10;
    scanf("%u", &a);
    unsigned char* ptr;
    ptr = &a;
    int temp;
    for (int i = 0; i < 2; i++) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + 3 - i);
        *(ptr + 3 - i) = temp;
    }
    printf("%u", a);

}
#endif 
//1040 함수를 이용하여 -- 함수에서 int형인지 char형인지 진짜 잘 보기!!!!
#if 0
#include<stdio.h>
void swap(char* ptr) {
    int temp;
    for (int i = 0; i < 2; i++) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + 3 - i);
        *(ptr + 3 - i) = temp;
    }
}
int main() {
    unsigned int a = 10;
    scanf("%u", &a);
    unsigned char* ptr;
    ptr = &a;
    swap(ptr);

    printf("%u ", *(ptr + 0));
    printf("%u ", *(ptr + 1));
    printf("%u ", *(ptr + 2));
    printf("%u ", *(ptr + 3));
    printf("%x ", (ptr + 0));
    printf("%x ", (ptr + 1));
    printf("%x ", (ptr + 2));
    printf("%x ", (ptr + 3));
    printf("%u", a);
}
#endif
//1054 strlen 만들기 잘 기억!!
#if 0
#include <stdio.h>
int eseStrlen(char string[]) {
    // 이 부분에 코드를 작성하시오. ==============
    int up = 0;
    int cnt = 0;
    while (string[cnt] != '\0') {
        if (string[cnt] == 33) {
            break;
        }
        cnt++;
    }

    for (int i = 0; i < cnt; i++) {
        if (string[i] >= 65 && string[i] <= 90) {
            up++;
        }
    }
    if (up == 0) {
        up = 1;
    }
    return cnt * up;
}
    // ==================================

int main() {
    char arr[100];
    scanf("%s", arr);

    printf("%d", eseStrlen(arr));
}
#endif
//1056 행렬 곱셈
#if 0
#include<stdio.h>
#define SIZE 100

int main() {
    unsigned int arr1[SIZE][SIZE];
    unsigned int arr2[SIZE][SIZE];
    unsigned int Matrix[SIZE][SIZE];
    int a= 0, b = 0 ,c = 0, d = 0;
   
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = 0; i < a ; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &arr1[i][j]);
        }     
    }
    
    scanf("%d", &c);
    scanf("%d", &d);
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            scanf("%d", &arr2[i][j]);
        }       
    }

    if (b == c) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                Matrix[i][j] = 0;
                for (int k = 0; k < b; k++) {
                    Matrix[i][j] += arr1[i][k] * arr2[k][j];
                }
            }            
        }   
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                printf("%d ", Matrix[i][j]);
            }
            printf("\n");
        }
    }    
    else {
        printf("Error");
    }
}
#endif
//1058
#if 0
#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    
    scanf("%s", str);
    int len = strlen(str);

    for (int i = len - 1; i >= 0; i--) {
        if (str[0] >= 97 && str[0] <= 122)         
        {
        str[0] = str[0] - 32;
        }
        printf("%c", str[i]);
    }
    return 0;
}
#endif
//1060 비트연산자
#if 0
#include <stdio.h>
int makeDataZero(int _data, int _n) {

    int swap = 1;
    for (int i = 0; i < _n - 1; i++) {
        swap = swap << 1;
    }
    return ~swap & _data;

}
int main() {

    unsigned int data;
    int n;

    scanf("%X", &data);
    scanf("%d", &n);

    printf("%X", makeDataZero(data, n));

    return 0;
}
#endif 
//1062 0의 개수
#if 0
#include <stdio.h>
int main() {
    int swap = 0xF;
    unsigned int arr[3][2];
   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // 이 부분에 코드를 작성하세요. ===========================
    for (int i = 0; i < 3; i++) {
        int cnt10 = 0;
        int cnt16 = 0;
        if (arr[i][0] == 10) {
            if (arr[i][1] == 0)
            {
                printf("1 ");
            }
            else {
                while (arr[i][1] > 0) {
                    if (arr[i][1] % 10 == 0) {
                        cnt10++;
                    }

                    arr[i][1] = arr[i][1] / 10;
                }
                printf("%d ", cnt10);
            }
        }
        else if (arr[i][0] == 16) {
            while (arr[i][1] > 0) {
                if ((swap & arr[i][1]) == 0) {
                    cnt16++;
                }
                arr[i][1] = (arr[i][1] >> 4);
            }
            printf("%d ", cnt16);
        }

    else { printf("0 "); }
    
    }
    // ==============================================

    return 0;
}
#endif 
//1073
#if 0
#include <stdio.h>
#define SIZE 100

void printSort(int list[], int n) {
    int temp = 0;
    int max = list[0];
    int maxarray = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (max < list[j]) {
                max = list[j];
                maxarray = j;
            }

        }
        if (list[i] < max) {
            temp = list[i];// temp =3
            list[i] = max; // list i =  5
            list[maxarray] = temp;// list k = 3
        }
        max = list[i + 1];

        for (int k = 0; k < n; k++) {
            printf("%d ", list[k]);
        }
        printf("\n");
    }
}

int main()
{
    int list[SIZE];

    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    printSort(list, n);

    return 0;
}
#endif
//1078
#if 0
#include<stdio.h>
int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                printf("%d ", (n * i) + j + 1);
            }
            printf("\n");
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                printf("%d ", (n * i) + j + 1);
            }
            printf("\n");
        }
    }
}
#endif
//1080
#if 0
#include<stdio.h>
int main() {
    double a[100];
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }
    for (int j = 0; j < 10; j++) {
        if (a[j] < 0) {
            printf("%0.4lf ", a[j] * 0.01);
        }
        else {
            printf("%0.4lf ", a[j]);
        }
    }
}
#endif

//1082
#if 0
#include<stdio.h>
int main() {
    unsigned int x = 0;
    int bit = 0;
    int arr[100];
    int t = 0x01;
    int treturn = 0x01;
    int zero = 0x00;
    scanf("%x", &x);
    scanf("%d", &bit);

    for (int i = 0; i < bit; i++) {
        scanf("%d", &arr[i]);
    }


    // 같은 거 입력 됐을 때 없애기
    for (int i = 0; i < bit - 1; i++) {
        for (int j = i + 1; j < bit; j++) {
            if (arr[i] == arr[j]) {
                arr[i] = 0;
            }
        }
    }

    for (int j = 0; j < bit; j++) {
        for (int i = 1; i <= 32; i++) {
            if (i == arr[j]) {
                t = (t << (i - 1));
                zero = zero | t;
                t = treturn;
            }
        }
    }

    printf("%X", ~zero & x);
    }
#endif
//1083
#if 0
#include<stdio.h>
int main() {
    char arr[100];
    scanf("%s", arr);
    int cnt = 0;
    int cnt1 = 0;
    while (arr[cnt] != NULL) {
       
        if (arr[cnt] == '!') {
            cnt1++;
        }
            cnt++;
    }
    printf("%d", cnt1);
}
#endif
//1084 if - else if 잘 보기!!!
#if 0
#include<stdio.h>
int main() {
    char arr[100];
    scanf("%s", arr);
    int len = 0;
    while (arr[len] != NULL) {
        len++;
    }
    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] = arr[i] - 32;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] = arr[i] + 32;
        }
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
}
#endif
//1086 
#if 0
#include<stdio.h>
int main() {
    char key[26] = { 'a','b','c','d','e','f','g','h','i','j','k'
    ,'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    char arr[100];
    int cnt[26] = {0};
    scanf("%s", arr);
    int len = 0;
    while (arr[len] != NULL) {
        len++;
    }
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 26; j++) {
            if (arr[i] == key[j]) {
                cnt[j] = cnt[j] + 1;
            }
        }
    }
    for (int k = 0; k < 26; k++) {
        printf("%d ", cnt[k]);
 }
}
#endif
//1086 효율 좋은 코드 -- 아스키코드를 이용하자!!
#if 0
#include<stdio.h>
int main() {
    int ans[100] = {0};
    char arr[100];
    scanf("%s", arr);
    int len = 0;
    while (arr[len] != NULL) {
        len++;
    }
    for (int i = 0; i < len; i++) {
        ans[arr[i] - 'a']++;
    }
    for (int j = 0; j < 26; j++) {
        printf("%d ", ans[j]);
    }
}
#endif
//1087 
#if 0
#include<stdio.h>
int main() {
    char arr[100];
    char key[26];
    int store[26] = { 0 };
    int len = 0;

    scanf("%s", arr);

    while (arr[len] != NULL) {
        len++;
    }

    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'A' & arr[i] <= 'Z') {
            arr[i] = arr[i] + 32;
        }
    }
    for (int i = 0; i < 26; i++) {
        key[i] = 'a' + i;
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 26; j++) {
            if (arr[i] == key[j]) {
                store[j] = store[j] + 1;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", store[i]);
    }
}
#endif

//1090
#if 0
#include <stdio.h> 


void SWAP(char* p) {
    int len = 0;
    while (*(p+len) != NULL) {
        len++;
    }
    for (int i = 0; i < len; i++) {
        if (*(p + i)=='a') {
            if (*(p + i + 1)=='n') {
                if (*(p + i + 2)=='d') {
                    *(p + i) = '&';
                    for (int j = i; j < len; j++) {
                        *(p + j + 1) = *(p + j + 3);
                        *(p + j + 2) = *(p + j + 4);
                    }
                }
            }
        }
    }
}


int main() {
    char text[50];
    scanf("%s", text);
    SWAP(text);
    printf("%s", text);
    return 0;
}
#endif
//1091
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cmp(char src[][100]) {
    int len1 = 0;
    int len2 = 0;
    while (src[0][len1]) {
        len1++;
    }
    while (src[1][len2]) {
        len2++;
    }
    if (len1 != len2) {
        return -1;
    }
    for (int i = 0; i < len1; i++) {
        if (src[0][i] >= 'a' && src[0][i] <= 'z') {
            src[0][i] = src[0][i] - 32;
        }
        else if (src[0][i] >= 'A' && src[0][i] <= 'Z') {
            src[0][i] = src[0][i] + 32;
        }
    }

   
    for (int k = 0; k < len1; k++) {
        if (src[0][k] != src[1][k]) break;
        if (src[0][k + 1] == '\0') return 1;
    }
    return -1;

}

int main(void)
{
    char arr[2][100];

    scanf("%s", arr[0]);
    scanf("%s", arr[1]);


    printf("%d", cmp(arr));

    return 0;
}
#endif 
//1094
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char** ese(char** _p) {
    _p = (char**)malloc(sizeof(char) * 3);
    _p[0] = (char*)malloc(sizeof(char) * 30);
    _p[1] = (char*)malloc(sizeof(char) * 30);
    _p[2] = (char*)malloc(sizeof(char) * 30);

    for (int i = 0; i < 3; i++) {
        scanf("%s", _p[i]);
    }
    return _p;

}

int main(void)
{
    char** p = NULL;

    p = ese(p);

    printf("%s\n%s\n%s", *p, *(p + 1), *(p + 2));

    for (int i = 0; i < 3; i++) free(p[i]);
    free(p);

    return 0;
}
#endif
//1095
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int countKey(char* str, char key) {
    int len = 0;
    int count = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        if (*(str+i) == key) {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char str[100];
    char key;

    scanf("%c", &key);
    scanf("%s", str);

    printf("%d", countKey(str, key));

}
#endif
//1096
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  isKeyIncluded(char* key, char* str) {
    int length = 0;
    int length1 = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    while (key[length1] != '\0') {
        length1++;
    }
    if (length > length1) {
        for (int i = 0; i < length; i++) {
            if (str[i] == key[0]) {
                for (int j = 0; key[j] != '\0'; j++) {
                    if (str[i + j] != key[j]) break;
                    if (key[j + 1] == '\0') return 1;
                }
            }
        }
    }
    else if (length < length1) {
        for (int i = 0; i < length1; i++) {
            if (key[i] == str[0]) {
                for (int j = 0; str[j] != '\0'; j++) {
                    if (key[i + j] != str[j]) break;
                    if (str[j + 1] == '\0') return 1;
                }
            }
        }
    }
    return 0;
}

int main(void)
{
    char key[10];
    char str[100];

    scanf("%s", key);
    scanf("%s", str);

    printf("%d", isKeyIncluded(key, str));

}
#endif
#if 0 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isKeyIncluded(char* str, char* key) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == key[0]) {
            for (j = 1; key[j] != '\0'; j++) {
                if (str[i + j] != key[j]) break;
            }
            if (key[j] == '\0') return 1;
        }
    }
    return 0;
}

int main(void)
{
    char str[100];
    char key[10];

    scanf("%s", str);
    scanf("%s", key);

    printf("%d", isKeyIncluded(str, key));

    return 0;
}


#endif
//1097
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void makeDot(unsigned int data, char* _binary) {
    int temp;
    for (int i = 31; i >= 0; i--) {
        if (data >> i & 1) {
            _binary[i] = '*';
        }
        else {
            _binary[i] = '-';
        }
    }
    for (int k = 0; k < 32 / 2; k++) {
        temp = *(_binary + k);;
        * (_binary + k) = *(_binary + 31-k);
        *(_binary + 31 - k) = temp;

    }
}

int main(void)
{
    unsigned int data;
    char binary[33];
    scanf("%u", &data);

    makeDot(data, binary);
    binary[32] = NULL;

    printf("%s", binary);
    return 0;
}
#endif
//1111
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isKeyIncluded(char str[100], char key[10]) {
    int len = 0;
    int keylen = 0;
    while (str[len] != NULL) len++;
    while (key[keylen] != NULL) keylen++;
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' & str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    for (int i = 0; i < keylen; i++) {
        if (key[i] >= 'A' & key[i] <= 'Z') {
            key[i] = key[i] + 32;
        }
    }
    for (int i = 0; i < len; i++) {
        if (str[i] == key[0]) {
            for (int j = 0; j < keylen; j++) {
                if (str[i + j] != key[j]) break;
                if (key[j + 1] == NULL) return 1;
            }
        }
    }
    return 0;
}

int main(void)
{
    char str[100];
    char key[10];

    scanf("%s", str);
    scanf("%s", key);

    printf("%d", isKeyIncluded(str, key));
    return 0;

}
#endif
//1112
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void esestrcpy(char result[100], char arr[100]) {
    int len = 0;
    int j = 0;
    while (arr[len] != NULL) len++;

    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'A' & arr[i] <= 'Z') {
            result[j] = arr[i];
            j++;
        }
    }
    result[j] = NULL;
}

int main(void)
{
    char arr[100];
    char result[100];

    scanf("%s", arr);

    esestrcpy(result, arr);

    printf("%s", result);
    return 0;
}

#endif
//1114
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void esefix(char data[100], char result[200]) {
    int len = 0;
    char cnt = '1';
    int wholecnt = 0;
    int j = 0;
    while (data[len] != NULL) len++;
    for (int i = 0; i < len; i++) {
        if (data[i] == data[i + 1]) {
            cnt++;
        }
        else if (data[i] != data[i + 1]) {
            wholecnt++;
            result[j] = cnt;
            result[j + 1] = data[i];
            j = j + 2;
            cnt = '1';
        }
    }
    wholecnt = wholecnt * 2;
    result[wholecnt] = NULL;

}


int main() {

    char data[100]; // 입력 받은 값 저장하는 배열
    char result[200]; // 변형된 결과 저장하는 배열

    scanf("%s", data);

    esefix(data, result);

    printf("%s", result); // 변형된 결과 배열 출력

    return 0;
}
#endif
//1119
#if 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student {
    char name[10];
    int score;
}st;

int main() {
    int n = 0;
    scanf("%d", &n);
    int temp;
    char temp2[100];
    st p1[10];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", &p1[i].name, &p1[i].score);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p1[i].score < p1[j].score) {
                temp = p1[i].score;
                p1[i].score = p1[j].score;
                p1[j].score = temp;

                strcpy(temp2, p1[i].name);
                strcpy(p1[i].name, p1[j].name);
                strcpy(p1[j].name, temp2);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", p1[i].name, p1[i].score);
    }
}
#endif
//1126
#if 0 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int mypow(int a, int b) {
    int x = 1;
    for (int i = 0; i < b; i++) {
        x = x * a;
    }
    return x;
}
int countZero(char str[9]) {
    int len = 0;
    int result = 0;
    int a = 16;
    int cnt = 0;
    int arr[100] = { 0 };
    while (str[len] != NULL) len++;
    for (int i = 0; i < len; i++) {
        if (str[i] >= '1' & str[i] <= '9') {
            arr[i] = str[i] - 48;
        }
        else if (str[i] >= 'a' & str[i] <= 'f') {
            arr[i] = str[i] - 87;
        }
        else if (str[i] >= 'A' & str[i] <= 'F') {
            arr[i] = str[i] - 55;
        }
    }

    for (int i = 0; i < len; i++) {
        result += arr[i] * mypow(16, len - 1 - i);
    }
    while (result) {
        if (result % 10 == 0) {
            cnt++;
        }
        result = result / 10;
    }
    return cnt;
}

int main() {

    char str[9];
    scanf("%s", str);

    printf("%d", countZero(str));

    return 0;
}

#endif
//1130
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void AddBlank(unsigned char input[100], unsigned char output[300]) {
    int len = 0;
    int j = 0;
    while (input[len] != NULL) len++;
    for (int i = 0; i < len; i++) {
        output[j] = input[i];
        output[j + 1] = input[i + 1];
        output[j + 2] = input[i + 2];
        output[j + 3] = ' ';
        i = i + 2;
        j = j + 4;
        output[j] = NULL;
    }


}

int main() {

    unsigned char input[100], output[300];

    scanf("%s", input);

    AddBlank(input, output);

    printf("%s", output);

    return 0;
}
#endif

