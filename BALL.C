//Nokia Screen Saver (One Ball)
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main()
{
  int gd=0,gm,i;
  int x = 30, y = 30,xflag = 0,yflag = 0;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  rectangle(0,1,639,479);
  circle(30,30,15);
  setfillstyle(SOLID_FILL, WHITE);
  floodfill(30, 30, WHITE);
  while(!kbhit())
    {
      setfillstyle(EMPTY_FILL, BLACK);
      floodfill(x, y, BLACK);
      circle(x, y, 15);
      setfillstyle(SOLID_FILL, WHITE);
      floodfill(x, y, WHITE);
      if( yflag == 0 )
	{
	 if( y == getmaxy() - 17)
	   {
	    yflag = 1;
	   }
	 y++;
	}

      if( yflag == 1 )
	{
	 if( y == 20)
	   {
	     yflag = 0;
	   }
	 y--;
	}
      if( xflag == 0 )
	{
	 if( x == getmaxx() - 17)
	   {
	    xflag = 1;
	   }
	 x++;
	}

      if( xflag == 1 )
	{
	 if( x == 20)
	   {
	     xflag = 0;
	   }
	 x--;
	}
      delay(100);
    }
  getch();

  closegraph();
  return 0;

}