// Nokia ScreenSaver (with multiple color balls)
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
int main()
{
  int gd=0,gm,i,size[9];
  void *arrow;
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

  int color[9] = {
		  1,2,3,4,5,6,7,8,9
		 };

  initgraph(&gd,&gm,"C:\\TC\\BGI");
  rectangle(0,1,639,479);
  setcolor(RED);
  setbkcolor(BLACK);
  for(i = 0; i < 9; i++)
     {
	 setcolor(color[i]);
	 circle(axis[i][0], axis[i][1], 15);
     }

  setcolor(WHITE);
  rectangle(0,1,639,479);

  for(i = 0; i < 9; i++)
     {
      setfillstyle(SOLID_FILL, color[i]);
      floodfill(axis[i][0], axis[i][1], color[i]);
      size[i] = imagesize(axis[i][0] - 15, axis[i][1] - 15, axis[i][0] + 15, axis[i][1] + 15);
      arrow = malloc(size[i]);
      getimage(axis[i][0] - 15, axis[i][1] - 15, axis[i][0] + 15, axis[i][1] + 15, arrow);
//      size = imagesize(x - 16, y - 16, x + 16, y + 16);
     }

  while(!kbhit())
    {
  //    cleardevice();

    //  for(i = 0; i < 9; i++)
      //	 {
	//  setcolor(color[i]);
	 // circle(axis[i][0], axis[i][1], 15);
	 //}
      //for(i = 0; i < 9; i++)
	// {
	  //setfillstyle(SOLID_FILL, color[i]);
	  //floodfill(axis[i][0], axis[i][1], color[i]);
	// }
      for(i = 0; i < 9; i++)
	 {
	  //cleardevice();
	  putimage(axis[i][0], axis[i][1], arrow, 4);
	  if( flag[i][1] == 0 )
	    {
	     if( axis[i][1] == getmaxy() - 20 )
	       {
		flag[i][1] = 1;
		color[i]+=1;
		if(color[i] == 14)
		   color[i] = 1;
	       }
	     axis[i][1]+=1;
	    }
	  if( flag[i][1] == 1 )
	    {
	     if( axis[i][1] == 20 )
	       {
		flag[i][1] = 0;
		color[i]+=1;
		if(color[i] == 14)
		   color[i] = 1;
	       }
	  axis[i][1]-=1;
	    }
	  if( flag[i][0] == 0 )
	    {
	     if( axis[i][0] == getmaxx() - 20)
	       {
		flag[i][0] = 1;
		color[i]+=1;
		if(color[i] == 14)
		   color[i] = 1;
	       }
	     axis[i][0]+=1;
	    }
	  if( flag[i][0] == 1 )
	    {
	     if( axis[i][0] == 20)
	       {
		flag[i][0] = 0;
		color[i]+=1;
		if(color[i] == 14)
		   color[i] = 1;
	       }
	     axis[i][0]-=1;
	    }
	 }
     delay(100);
    }
  fflush(stdin);
  getch();
  getch();
  closegraph();
  return 0;

}