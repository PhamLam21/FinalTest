#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void tachBit(unsigned short x)
{
    char* px = 0;
    unsigned char low = 0;
    unsigned char high = 0;
    px = (char*) &x;
    low = *px;
    high = *(px + 1);
    printf("Tach thanh: %d va %d\r\n", low, high);

}

int main()
{
    unsigned short x = 0;
    printf("Moi nhap so can tach\r\n");
    scanf("%d", &x);
    tachBit(x);

    return 0;
}