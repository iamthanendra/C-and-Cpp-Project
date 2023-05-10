//Timer
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <dos.h>
#include <graphics.h>
int main()
{
 int gdriver = DETECT, gmode, i = 1, time = 30, y = 360;
 char tt[3];
 initgraph(&gdriver, &gmode, " ");
 arc(getmaxx()/2, getmaxy()/2, 0, 360, 100);
 while(!kbhit())
   {
    if( time == 0 )
      {
       sprintf(tt,"%d",time);
       outtextxy(getmaxx()/2, getmaxy()/2, tt);
       delay(500);
       exit(1);
      }
    sprintf(tt,"%d",time);
    outtextxy(getmaxx()/2, getmaxy()/2, tt);
    delay(1000);
    y = i * 12;
    time--;
    i++;
    cleardevice();
    arc( getmaxx()/2, getmaxy()/2, 90, 450 - y, 100 );
   }
 getch();
 closegraph();
 return 0;
}