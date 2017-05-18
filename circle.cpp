#include<graphics.h>
#include<conio.h>
int main()

{
initwindow(500,500,"GRAPHICS LAB");


setcolor(WHITE);



int a=getmaxx()/2;
int b=getmaxy()/2;
int r=100;
circle(a,b,r);



getch();
closegraph();
return 0;
}
