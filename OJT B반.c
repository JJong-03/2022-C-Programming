#define _CRT_SECURE_NO_WARNINGS
//1051
#if 0
#include <stdio.h>
int main() {

    int arr[10];

    // 이 부분에 코드를 작성하시오. ===========================

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
    // ==============================================

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
#endif
//1049 배열의 인덱스
#if 0
#include <stdio.h>
#include <stdlib.h>

int diffMaxMin(int arr[], int n) {
    // 이 부분에 코드를 작성하시오. ===========================
    int max = 0;
    int min = 0;
    int d = arr[0];
    for (int i = 0; i < n; i++) {    
        if (d < arr[i]) {    
            d = arr[i];
            max = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (d > arr[i]) {
            d = arr[i];
            min = i;
        }
    }
    if (max - min > 0) {
        return max - min;
    }
    else {
        return min - max;
    }

    // ========================================================
}


int main() {

    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", diffMaxMin(arr, n));
    return 0;
}
#endif
//1053 문자열 길이
#if 0
#include <stdio.h>
int eseStrlen(char string[]) {
    // 이 부분에 코드를 작성하시오. ==============
    int len = 0;
    int cnt = 0;
    int up = 1;
    while (string[len] != NULL) {
        if (string[len] == 33) {
            break;
        }
        len++;
    }

    for (int i = 0; i < len; i++) {
        if (string[i] == 'e') {
            if (string[i + 1] == 's') {
                if (string[i + 2] == 'e') {
                    cnt++;
                }
            }  
        }
    }
    if (cnt >= 1) {
        up = up * 10;
    }
    
    return len * up;
}

// 
    // ==================================


int main() {
    char arr[100];
    scanf("%s", arr);

    printf("%d", eseStrlen(arr));
}
#endif
//1055
#if 0
#include<stdio.h>
#define SIZE 100

int main() {
    unsigned int arr1[SIZE][SIZE];
    unsigned int arr2[SIZE][SIZE];
    unsigned int Matrix[SIZE][SIZE];
    int a = 0, b = 0, c = 0, d = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = 0; i < a; i++) {
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
        printf("Unavaliable");
    }
}
#endif
//1057
#if 0
#include<stdio.h>
#include<string.h>
int main() {
    char arr[100];
    scanf("%s", arr);
    int len = strlen(arr);
    if ('a' <= arr[len-1] && arr[len-1] <= 'z') {
        arr[len-1] = arr[len-1] - 32;
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }


}
#endif
//1059 
#if 0
#include <stdio.h>

int makeDataOne(int _data, int _n){
int move = 1;
for (int i = 0; i < _n-1; i++) {
    move = move << 1;
}
return move | _data;
}


int main() {

    unsigned int data;
    int n;

    scanf("%X", &data);
    scanf("%d", &n);

    printf("%X", makeDataOne(data, n));

    return 0;
}
#endif
//1061
#if 0
#include <stdio.h>

int main() {

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
        int cnt2 = 0;
        if (arr[i][0] == 10) {
            if (arr[i][1] == 0) {
                cnt10++;
            }
            while (arr[i][1] > 0) {   
                if (arr[i][1] % 10 == 0) {
                    cnt10++;
                }

                arr[i][1] = arr[i][1] / 10;
            }
            arr[i][1] = cnt10;
        }
        else if (arr[i][0] == 2) {
            while (arr[i][1] > 0) {
                if (arr[i][1] % 2 == 0) {
                    cnt2++;
                }
                arr[i][1] = arr[i][1] / 2;
            }
            arr[i][1] = cnt2;
        }
        else {
            arr[i][1] = 0;
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][1]);
    }
  
    // ==============================================

    return 0;
}
#endif
//1067
#if 0

#include <stdio.h>

unsigned int makeParity(unsigned int _data) {
    int cnt = 0;
    unsigned int a = 2147483648;
    for (int i = 30; i >= 0; i--) {
        if ((_data >> i) & 1) {
            cnt++;// 1의 개수
        }
    }
        if (cnt % 2 == 0) {
            return (_data & ~a);
                      
        }
        else {
           return (_data | a);
           
           
        }
        
    }

//2147483648
int main() {

    unsigned int data;

    scanf("%u", &data);

    printf("%u", makeParity(data));

    return 0;
}
#endif



