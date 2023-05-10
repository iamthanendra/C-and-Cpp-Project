//Nokia Screen Saver ( with multiple Balls )
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main()
{
  int gd=0,gm,i;
  int X[9] = { 40, 95, 400, 300, 600, 20, 280, 600, 430 };
  int Y[9] = { 250, 130, 20, 300, 440, 420, 400, 80, 130 };
  int Yflag[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  int Xflag[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  rectangle(0,1,639,479);

  for(i = 0; i < 9; i++)
     circle(X[i], Y[i], 15);

  setfillstyle(SOLID_FILL, WHITE);

  for(i = 0; i < 9; i++)
     floodfill(X[i], Y[i], WHITE);

  while(!kbhit())
    {
      setfillstyle(EMPTY_FILL, BLACK);

      for(i = 0; i < 9; i++)
	 floodfill(X[i], Y[i], BLACK);

      for(i = 0; i < 9; i++)
	 circle(X[i], Y[i], 15);

      setfillstyle(SOLID_FILL, WHITE);

      for(i = 0; i < 9; i++)
	 floodfill(X[i], Y[i], WHITE);

      for(i = 0; i < 9; i++)
	 {
	  if( Yflag[i] == 0 )
	    {
	     if( Y[i] == getmaxy() - 20 )
	       {
		Yflag[i] = 1;
	       }
	     Y[i]+=1;
	    }
	  if( Yflag[i] == 1 )
	    {
	     if( Y[i] == 20 )
	       {
		Yflag[i] = 0;
	       }
	  Y[i]-=1;
	    }
	 }
      for(i = 0; i < 9; i++)
	 {
	  if( Xflag[i] == 0 )
	    {
	     if( X[i] == getmaxx() - 20)
	       {
		Xflag[i] = 1;
	       }
	     X[i]+=1;
	    }
	  if( Xflag[i] == 1 )
	    {
	     if( X[i] == 20)
	       {
		Xflag[i] = 0;
	       }
	     X[i]-=1;
	    }
	 }
     delay(10);
    }
  closegraph();
  return 0;

}