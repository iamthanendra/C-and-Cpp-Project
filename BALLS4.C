// Nokia ScreenSaver (with multiple color balls)
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
int main()
{
  int gd=0,gm,i,color;
  int axis[9][2] = {
		    { 40, 250 },
		    { 95, 130 },
		    { 400, 20 },
		    { 300, 300 },
		    { 600, 440 },
		    { 20, 420 },
		    { 280, 400 },
		    { 600, 80 },
		    { 430, 130 }
		   };

  int flag[9][2] = {
		    {0,0},
		    {0,0},
		    {0,0},
		    {0,0},
		    {0,0},
		    {0,0},
		    {0,0},
		    {0,0},
		    {0,0}
		   };

  initgraph(&gd,&gm,"C:\\TC\\BGI");
  rectangle(0,1,639,479);
  setcolor(RED);
  setbkcolor(BLACK);
  for(i = 0; i < 9; i++)
     {
	 circle(axis[i][0], axis[i][1], 15);
     }
  setfillstyle(SOLID_FILL, RED);
  for(i = 0; i < 9; i++)
     floodfill(axis[i][0], axis[i][1], RED);
  while(!kbhit())
    {
      color = random(14) + 1;
      cleardevice();
      //setfillstyle(EMPTY_FILL, BLACK);
      //for(i = 0; i < 9; i++)
      //	 floodfill(axis[i][0], axis[i][1], BLACK);
      setcolor(WHITE);
      rectangle(0,1,639,479);
      setcolor(color);
      for(i = 0; i < 9; i++)
	 circle(axis[i][0], axis[i][1], 15);
      setfillstyle(SOLID_FILL, color);
      for(i = 0; i < 9; i++)
	 floodfill(axis[i][0], axis[i][1], color);
      for(i = 0; i < 9; i++)
	 {
	  if( flag[i][1] == 0 )
	    {
	     if( axis[i][1] == getmaxy() - 20 )
	       {
		flag[i][1] = 1;
	       }
	     axis[i][1]+=1;
	    }
	  if( flag[i][1] == 1 )
	    {
	     if( axis[i][1] == 20 )
	       {
		flag[i][1] = 0;
	       }
	  axis[i][1]-=1;
	    }
	  if( flag[i][0] == 0 )
	    {
	     if( axis[i][0] == getmaxx() - 20)
	       {
		flag[i][0] = 1;
	       }
	     axis[i][0]+=1;
	    }
	  if( flag[i][0] == 1 )
	    {
	     if( axis[i][0] == 20)
	       {
		flag[i][0] = 0;
	       }
	     axis[i][0]-=1;
	    }
	 }
     delay(100);
    }
  closegraph();
  return 0;

}