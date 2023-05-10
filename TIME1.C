//Timer1
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <dos.h>
#include <graphics.h>
int main()
{
 int gdriver = DETECT, gmode, i = 1, t, time = 30, y = 360;
 char tt[3];
 initgraph(&gdriver, &gmode, " ");
 outtextxy(5, 5, "Enter Time : \n");
 scanf("%d",&time);
 t = 360/time;
 arc(getmaxx()/2, getmaxy()/2, 0, 360, 100);
 while(!kbhit())
   {
    if( time == 0 )
      {
       sprintf(tt,"%d",time);
       outtextxy(getmaxx()/2, getmaxy()/2, tt);
       sound(550);
       delay(500);
       nosound();
       exit(1);
      }
    sprintf(tt,"%d",time);
    outtextxy(getmaxx()/2, getmaxy()/2, tt);
    delay(1000);
    //y = i * 12;
    y = i * t;
    time--;
    i++;
    cleardevice();
    arc( getmaxx()/2, getmaxy()/2, 90, 450 - y, 100 );
   }
 getch();
 closegraph();
 return 0;
}