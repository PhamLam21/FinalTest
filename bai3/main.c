#include<stdio.h>
#include<Windows.h>

DWORD WINAPI function(LPVOID parameter)
{
    while(1)
    {
        printf("\033[0;31mXin chao\033[0m\r\n");
        Sleep(2000);
    }
}

int main()
{

    HANDLE thread = CreateThread(
        NULL,
        20,
        function,
        NULL,
        0,
        NULL
    ); 
    while(1)
    {
        printf("\033[0;32mSay hello\033[0m\r\n");
        Sleep(2000);
    }
    return 0;
}