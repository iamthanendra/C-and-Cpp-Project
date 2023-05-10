#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
 int gd=0,gm;
 unsigned int x1 = 50, y1 = 310, x2 = 310, y2 = 50;//x2 = 295, y2 = 65;
 initgraph(&gd,&gm,"");
 arc(getmaxx()/2, getmaxy()/2, x1, y1, 100);
 arc(getmaxx()/2, getmaxy()/2, x2, y2, 90);
 while(!kbhit())
   {
    cleardevice();
    //x1--;
    x1++;
    y1++;
    x2++;
    //x2--;
    y2++;
    arc(getmaxx()/2, getmaxy()/2, x1, y1, 100);
    arc(getmaxx()/2, getmaxy()/2, x2, y2, 90);
    delay(100);
    //cleardevice();
   }
 getch();
 closegraph();
 return 0;
}