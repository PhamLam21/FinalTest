#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"PtBac2.h"

int main()
{
    
    float a = 0;
    float b = 0;
    float c = 0;
    printf("Moi nhap pt bac 2 co dang: ax^2 + bx + c\r\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    PtBac2 ptX;
    ptX.nhapPT(a, b, c);
    ptX.giaiPT();

    return 0;
}