#include<windows.h>
void main()
{
    char ch1='G',ch2='A',ch3='U',ch4='R',ch5='A',ch6='V';
    COORD c;
    c.X=50;
    c.Y=13;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("[%c %c %c %c %c %c]",ch1,ch2,ch3,ch4,ch5,ch6);
    getch();
}
