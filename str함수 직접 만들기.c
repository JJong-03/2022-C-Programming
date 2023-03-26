#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//strcat
#if 0	
#include <stdio.h>

void strcat(char* str1, char* str2) {
    int length = 0;
    for (int i = 0; str1[i] != '\0'; i++) length++;
    for (int j = 0; str2[j] != '\0'; j++) {
        str1[length + j] = str2[j];
        if (str2[j + 1] == '\0') {
            str1[length + j + 1] = '\0';
            break;
        }
    }
}

int main(void) {
    char str1[11] = "Hello";
    char str2[6] = "World";
    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}
#endif
//strcpy
#if 0 
#include <stdio.h>

void strcpy(char* str1, char* str2) {
    for (int i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i];
        if (str2[i + 1] == '\0') {
            str1[i + 1] = '\0';
            break;
        }
    }
}

int main(void) {
    char str1[7] = "Yellow";
    char str2[5] = "Blue";
    strcpy(str1, str2);
    printf("%s", str1);

    return 0;
}
#endif
//strstr
#if 0
#include <stdio.h>

char* strstr(char* str1, char* str2) {
    int length = 0;
    for (int i = 0; str2[i] != '\0'; i++) length++;
    for (int j = 0; str1[j] != '\0'; j++) {
        if (str1[j] == str2[0]) {
            for (int k = 0; k < length; k++) {
                if (str1[j + k] != str2[k]) break;
                if (str2[k + 1] == '\0') return str1 + j;
            }
        }
    }
    return NULL;
}

int main(void) {
    char str1[12] = "Hello World";
    char str2[6] = "World";
    printf("%p", strstr(str1, str2));

    return 0;
}
#endif

#if 0 
// strcpy 함수

#include <stdio.h>

char* mystrcpy(char* destination, const char* source)
{
    while (*source != '\0')
    {
        *destination = *source;
        source++;
        destination++;
    }

    *destination = '\0';

    return destination;
}
/*
int main()
{
   char str1[] = "sample string";
   char str2[40];
   char str3[40];
   mystrcpy(str2, str1);
   mystrcpy(str3, "copy successful");
   printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
   return 0;
}
*/

//strcat 함수

#include <stdio.h>

char* myStrcat(char* destination, const char* source)
{
    while (*destination != '\0')
    {
        destination++;
    }

    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';

    return destination;
}
/*
int main()
{
   char str[80] = "these ";
   myStrcat(str, "strings ");
   myStrcat(str, "are ");
   myStrcat(str, "concatenated.");
   printf("str: %s\n", str);

   return 0;
}
*/
#endif

//mystrcpy 
#if 0
void mystrcpy(char*dest, char*source) {
    while (*source != '\0') {
        *dest = *source;
        source++;
        dest++;
    }
    *dest = '\0';
    return dest;
}

int main()
{
    char str1[] = "sample string";
    char str2[40];
    scanf("%s", str1);
    mystrcpy(str2, str1);
    printf("str1: %s\nstr2: %s\n", str1, str2);
    return 0;
}
#endif
//mystrcat
#if 0
void myStrcat(char*dest, char*source) {
    while (*dest != '\0') {
        dest++;
    }
    while (*source != '\0') {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}
int main()
{
    char str[80] = "these ";
    myStrcat(str, "strings ");
    myStrcat(str, "are ");
    myStrcat(str, "concatenated.");
    printf("str: %s\n", str);

    return 0;
}
#endif

//mystrcpy 
#if 0
void mystrcpy(char* dest, char* source) {
    while (*source != '\0') {
        *dest = *source;
        source++;
        dest++;   
    }
    *dest = '\0';
    return dest;
}


int main()
{
    char str1[] = "sample string";
    char str2[40];
    scanf("%s", str1);
    mystrcpy(str2, str1);
    printf("str1: %s\nstr2: %s\n", str1, str2);
    return 0;
}
#endif

//mystrcat
#if 0


int main()
{
    char str[80] = "these ";
    myStrcat(str, "strings ");
    myStrcat(str, "are ");
    myStrcat(str, "concatenated.");
    printf("str: %s\n", str);

    return 0;
}
#endif

//strstr
#if 0
#include <stdio.h>

char* strstr(char* str1, char* str2) {
    int length = 0;
    while (str2[length] != '\0') {
        length++;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == str2[0]) {
            for (int j = 0; j < length; j++) {
                if (str1[i + j] != str2[j]) break;
                if (str2[j + 1] == '\0') return str1 + j;
            }
        }
    }
}
int main(void) {
    char str1[12] = "Hello World";
    char str2[6] = "Hello";
    printf("%p", strstr(str1, str2));

    return 0;
}
#endif




