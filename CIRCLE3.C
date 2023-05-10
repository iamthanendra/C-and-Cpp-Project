#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
 int gd=0,gm,i;
 unsigned int x1 = 70, y1 = 290, x2 = 250, y2 = 110;
 //int x1 = 50, y1 = 310, x2 = 295, y2 = 65;
 int radius[10] = { 100, 90, 80, 70, 60, 50, 40, 30, 20, 10 };
 //int axis1[1][1] = { 90, 270 };
 //int axis2[1][1] = { 270, 90 };
 initgraph(&gd,&gm,"");
 for( i = 0; i < 10; i++)
 {
  if(i % 2 == 0)
    arc(getmaxx()/2, getmaxy()/2, x1, y1, radius[i]);
  else
    arc(getmaxx()/2, getmaxy()/2, x2, y2, radius[i]);
 }
 while(!kbhit())
   {
    cleardevice();
    x1--;
    y1++;
    x2--;
    y2++;
    for( i = 0; i < 10; i++)
    {
     if(i % 2 == 0)
       arc(getmaxx()/2, getmaxy()/2, x1, y1, radius[i]);
     else
       arc(getmaxx()/2, getmaxy()/2, x2, y2, radius[i]);
    }
    delay(100);
   }
 getch();
 closegraph();
 return 0;
}