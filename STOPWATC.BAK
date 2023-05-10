#include <stdio.h>
#include <graphics.h>

int main()
{
 int gdriver = DETECT, gmode, milisec = 0, sec = 0, minute = 0, hour = 0;
 char tt[100],z;
 initgraph(&gdriver, &gmode, " ");

 /*Starting Msg*/
 setcolor(RED);
 outtextxy(200, 350, "Press");
 outtextxy(210, 360, "'s' for Start");
 outtextxy(210, 370, "'p' for Pause");
 outtextxy(210, 380, "'r' for Reset");
 outtextxy(210, 390, "'e' for Exit AnyTime");

 /*Desing*/
 setcolor(WHITE);
 arc(getmaxx()/2, getmaxy()/2, 0, 360, 100);
 outtextxy(200, 100, "Start");
 circle(190, 103, 5); //Start Circle
 setfillstyle(SOLID_FILL,WHITE);
 //floodfill(190, 103, WHITE);
 outtextxy(300, 100, "Pause");
 circle(290, 103, 5); //Pause Circle
 // floodfill(290, 103, WHITE);
 outtextxy(400, 100, "Reset");
 circle(390, 103, 5); //Stop Circle
 // floodfill(390, 103, WHITE);

 /*Creating Time String*/
 sprintf(tt,"%d:%d:%d:%d",hour,minute,sec,milisec);

 /*Printing Time*/
 outtextxy(getmaxx()/2 - 27, getmaxy()/2, tt);

 /*First Choice Action (will allow only Exit key or Start Key)*/
 Back :
 z = getch();
 switch(z)
 {
  case 'e' :
      exit(1);
  case 'E' :
      exit(2);
  default :
      if(z != 's')
	goto Back;
      else
      {
	break;
      }
 }

 while(1)
  {
   while(!kbhit())
    {
     cleardevice();

     /*Printing All Msg*/
     circle(190, 103, 5); //Start Circle
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(190, 103, WHITE);
     circle(290, 103, 5); //Pause Circle
     circle(390, 103, 5); //Stop Circle
     outtextxy(200, 100, "Start");
     outtextxy(300, 100, "Pause");
     outtextxy(400, 100, "Reset");

     /*Creating Time String*/
     sprintf(tt,"%d:%d:%d:%d",hour,minute,sec,milisec);

     /*Printing Time*/
     outtextxy(getmaxx()/2 - 33, getmaxy()/2, tt);

     //arc(getmaxx()/2, getmaxy()/2, 90, 90+36*sec, 100);//Complete in 10 Sec

     /*Printing Second Circle*/
     arc(getmaxx()/2, getmaxy()/2, 90, 90+sec*6, 80);//second

     /*Printing Minute Circle*/
     arc(getmaxx()/2, getmaxy()/2, 90, 90+minute*6, 90);//minute

     /*Printing Full Circle*/
     arc(getmaxx()/2, getmaxy()/2, 0, 360, 100);//Full Circle

     /*Calculating Time*/
     delay(95);
     milisec+=100;
     if(milisec == 1000)
       {
	sec++;
	milisec = 0;
       }
     if(sec == 60)
       {
	minute++;
	sec = 0;
       }
     if(minute == 60)
       {
	hour++;
	minute = 0;
       }
   }   //End of while(!kbhit())
 Pause :
 z = getch();
 /*if Pause Key('p') Clicked*/
 if(z == 'p' || z == 'P')
   {
    /*Desining*/
    circle(290, 103, 5); //Pause Circle
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(290, 103, WHITE);
    circle(390, 103, 5); //Reset Circle
    setcolor(BLACK);
    circle(190, 103, 4); //Start Clear Circle
    circle(390, 103, 4); //Reset Circle
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(190, 103, BLACK);
    floodfill(390, 103, BLACK);
    setcolor(WHITE);
    outtextxy(200, 100, "Start");
    outtextxy(300, 100, "Pause");
    outtextxy(400, 100, "Reset");

    /*Pause Key Action*/
    goto Pause;
   }
 else
   /*if Reset Key('r') Clicked*/
   if(z == 'r' || z == 'r')
     {
      cleardevice();

      /*Desining*/
      circle(390, 103, 5); //Reset Circle
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(390, 103, WHITE);
      circle(190, 103, 5); //Start Circle
      circle(290, 103, 5); //Pause Circle
      arc(getmaxx()/2, getmaxy()/2, 0, 360, 100);
      outtextxy(200, 100, "Start");
      outtextxy(300, 100, "Pause");
      outtextxy(400, 100, "Reset");

      /*Reset Key Action*/
      milisec = 0;
      sec = 0;
      minute = 0;
      hour = 0;
      sprintf(tt,"%d:%d:%d:%d",hour,minute,sec,milisec);
      outtextxy(getmaxx()/2 - 33, getmaxy()/2, tt);
      goto Pause;
     }
   else
     /*If Start Key('s') Clicked*/
     if(z == 's' || z == 'S')

       /*Start Key Action*/
       continue;   //will send while(1)
     else
       /*If Exit Key('e') Clicked*/
       if(z == 'e' || z == 'E')
	 /*Exit Key Action*/
	 break;
       else
	 /*If Wrong Key Clicked*/
	 continue;   //will send while(1)
 }    //End of while(1)
 closegraph();
 return 0;
}