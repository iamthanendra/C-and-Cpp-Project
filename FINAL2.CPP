#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
#define up 72
#define down 80
#define left 75
#define right 77
#define Esc 27

void food(int *foodx,int *foody)
{
 int i;
 *foodx=random(76) + 3;
 *foody=random(12) + 7;
 gotoxy(*foodx,*foody);
 i=random(15);
 textcolor(i + BLINK);
 cprintf("*");

}

void BOX()
{
 int X,Y;
 clrscr();
 for(X=1,Y=5;X<=80;X++)
    {
     textcolor(GREEN);
     gotoxy(X,Y);
     cprintf("!");
     gotoxy(X,Y+15);
     cprintf("!");
    }
  for(Y=5,X=1;Y<=19;Y++)
    {
     textcolor(GREEN);
     gotoxy(X+79,Y);
     cprintf("!");
     gotoxy(X,Y);
     cprintf("!");
    }
}

int UPP(int *x,int *y,char *a,int *foodx,int *foody,int *lx,int *ly,int *score,int *k)
{
 int life=0,carry=*(y + 0),j,r;
	BOX();
	gotoxy(15,2);
	cprintf("Life =  %d",life);
	gotoxy(45,2);
	cprintf("Score =  %d",*score);
	r=random(15);
	textcolor(r);
	gotoxy(*foodx,*foody);
	cprintf("*");
	for(j=(*k-1);j>=0;j--)
	   {
	    gotoxy(*(lx + j),*(ly + j));
	    cprintf(" ");
	   }
	gotoxy(*(x + (*k - 1)),carry);
	cprintf(" ");
	while(1)
	{
	*a=NULL;
	textcolor(WHITE);
	gotoxy(*x,carry);
	fflush(stdin);
	cprintf(" ");
	carry=*(y + 0);
	for(j=0;j<*k;j++)
	   {
	    *(lx + 0)= *(x + 0);
	    *(ly + 0)= *(y + j);
	    gotoxy(*(x + 0),--(*(y + j)));
	    fflush(stdin);
	    cprintf(".");
	   }
	fflush(stdin);
	*a=kbhit();
	delay(200);
	if(*x==*foodx && *y==*foody)
	  {
	   food(foodx,foody);
	   (*score)++;
	   textcolor(GREEN);
	   gotoxy(45,2);
	   cprintf("Score =  %d",*score);
	  }
	if(*x==1 || *x==80 || *y==5 || *y==20)
	  {
	   life=1;
	   return (life);
	  }
	if(*a!=NULL)
	  {
	   if(*a==up)
	     continue;
	   else
	     break;
	  }
       }
       return 0;
}

int DOWN(int *x,int *y,char *a,int *foodx,int *foody,int *lx,int *ly,int *score,int *k)
{
 int life=0,carry=*(y + 0),j,r;
	BOX();
	gotoxy(15,2);
	cprintf("Life =  %d",life);
	gotoxy(45,2);
	cprintf("Score =  %d",*score);
	r=random(15);
	textcolor(r);
	gotoxy(*foodx,*foody);
	cprintf("*");
	for(j=(*k-1);j>=0;j--)
	   {
	    gotoxy(*(lx + j),*(ly + j));
	    cprintf(" ");
	   }
	gotoxy(*(x + (*k-1)),carry);
	cprintf(" ");
	while(1)
	{
	*a=NULL;
	textcolor(WHITE);
	gotoxy(*(x + 0),carry);
	carry=*(y + 0);
	fflush(stdin);
	cprintf(" ");
	for(j=0;j<*k;j++)
	   {
	    *(lx + j)= *(x + 0);
	    *(ly + j)= *(y + j);
	    gotoxy(*(x + 0),++(*(y + j)));
	    fflush(stdin);
	    cprintf(".");
	   }
	fflush(stdin);
	*a=kbhit();
	delay(200);
	if(*x==*foodx && *y==*foody)
	  {
	   food(foodx,foody);
	   (*score)++;
	   textcolor(GREEN);
	   gotoxy(45,2);
	   cprintf("Score =  %d",*score);
	  }
	if(*x==1 || *x==80 || *y==5 || *y==20)
	  {
	   life=1;
	   return (life);
	  }
	if(*a!=NULL)
	  {
	   if(*a==down)
	     continue;
	   else
	     break;
	  }
       }
       return 0;
}


int LEFT(int *x,int *y,char *a,int *foodx,int *foody,int *lx,int *ly,int *score,int *k)
{
 int life=0,carry=*(x + 0),j,r;
	BOX();
	gotoxy(15,2);
	cprintf("Life =  %d",life);
	gotoxy(45,2);
	cprintf("Score =  %d",*score);
	r=random(15);
	textcolor(r);
	gotoxy(*foodx,*foody);
	cprintf("*");
	for(j=(*k-1);j>=0;j--)
	   {
	    gotoxy(*(lx + j),*(ly + j));
	    cprintf(" ");
	   }
	gotoxy(carry,*(y + (*k - 1))); //////////////////////////
	cprintf(" ");
	*(x + 0) = *(x + 1);
	while(1)
	{
	*a=NULL;
	textcolor(WHITE);
	gotoxy(carry,*(y + 0));
	fflush(stdin);
	cprintf(" ");
	carry=*(x + 0);
	for(j=0;j<*k;j++)
	   {
	    *(lx + j)= *(x + j);
	    *(ly + j)= *(y + 0);
	    gotoxy(--(*(x + j)),*(y + 0));
	    fflush(stdin);
	    cprintf(".");
	   }
	fflush(stdin);
	*a=kbhit();
	delay(200);
	if(*x==*foodx && *y==*foody)
	  {
	   food(foodx,foody);
	   (*score)++;
	   textcolor(GREEN);
	   gotoxy(45,2);
	   cprintf("Score =  %d",*score);
	  }
	if(*x==1 || *x==80 || *y==5 || *y==20)
	  {
	   life=1;
	   return (life);
	  }
	if(*a!=NULL)
	  {
	   if(*a==left)
	     continue;
	   else
	     break;
	  }
       }
       return 0;
}


int RIGHT(int *x,int *y,char *a,int *foodx,int *foody,int *lx,int *ly,int *score,int *k)
{
 int life=0,carry=*(x + 0),j,r;
	BOX();
	gotoxy(15,2);
	cprintf("Life =  %d",life);
	gotoxy(45,2);
	cprintf("Score =  %d",*score);
	r=random(15);
	textcolor(r);
	gotoxy(*foodx,*foody);
	cprintf("*");
	for(j=(*k-1);j>=0;j++)
	   {
	    gotoxy(*(lx + j),*(ly + j));
	    fflush(stdin);
	    cprintf(" ");
	   }
	BOX();
	gotoxy(15,2);
	cprintf("Life =  %d",life);
	gotoxy(45,2);
	cprintf("Score =  %d",*score);
	r=random(15);
	textcolor(r);
	gotoxy(*foodx,*foody);
	cprintf("*");
	while(1)
	{
	 BOX();
	gotoxy(15,2);
	cprintf("Life =  %d",life);
	gotoxy(45,2);
	cprintf("Score =  %d",*score);
	r=random(15);
	textcolor(r);
	gotoxy(*foodx,*foody);
	cprintf("*");
	*a=NULL;
	textcolor(WHITE);
	gotoxy(carry,*(y + 0));
	fflush(stdin);
	cprintf(" ");
	carry=*(x + (*k-1));
	for(j=0;j<(*k);j++)
	   {
	    *(lx + j)= *(x + j);
	    *(ly + j)= *(y + 0);
	    gotoxy(++(*(x + j)),*(y + 0));
	    fflush(stdin);
	    cprintf(".");
	   }
	fflush(stdin);
	*a=kbhit();
	delay(200);
	if(*x==*foodx && *y==*foody)
	  {
	   food(foodx,foody);
	   (*score)++;
	   textcolor(GREEN);
	   gotoxy(45,2);
	   cprintf("Score =  %d",*score);
	  }
	if(*x==1 || *x==80 || *y==5 || *y==20)
	  {
	   life=1;
	   return (life);
	  }
	if(*a!=NULL)
	  {
	   if(*a==right)
	     continue;
	   else
	     break;
	  }
       }
       return 0;
}

void main()
{
 int *score=0;
 BACK :
 char *a;
 int *k;
 *k=3;
 static int life = 3;
 int *x,*y,*lx,*ly,*foodx,*foody,j,r,t=0;
 *(x + 0)=15;
 *(y + 0)=15;
 *(x + 1)=14;
 *(y + 1)=15;
 *(x + 2)=13;
 *(y + 2)=15;
 clrscr();
 if(life==0)
     {
      clrscr();
      gotoxy(30,30);
      textcolor(RED);
      cprintf("Game Over");
      getch();
      delay(100);
      exit(1);
     }
 BOX();
 gotoxy(15,2);
 cprintf("Life =  %d",life);
 gotoxy(45,2);
 cprintf("Score =  %d",*score);
 _setcursortype(_NOCURSOR);
 textcolor(WHITE);
 for(j=0;j<(*k);j++)
    {
     gotoxy(*(x + j),*(y + 0));
     *(lx + j)= *(x + j);
     *(ly + j)= *(y + 0);
     cprintf(".");
    }
 food(foodx,foody);
 while(1)
 {
  while(1)
   {
    fflush(stdin);
    *a=getch();
    if(*a==up)
   {
	t=UPP(x,y,a,foodx,foody,lx,ly,score,k);
   }
   if(*a==down)
   {
	t=DOWN(x,y,a,foodx,foody,lx,ly,score,k);
   }
   if(*a==left)
   {
	t=LEFT(x,y,a,foodx,foody,lx,ly,score,k);
   }
   if(*a==right)
   {
	t=RIGHT(x,y,a,foodx,foody,lx,ly,score,k);
   }
   if(t==1)
     {
      life--;
      goto BACK;
     }
   if(*a==Esc)

     exit(1);
}
}
}