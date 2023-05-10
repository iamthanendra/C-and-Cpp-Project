#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>
#define Esc 27


 void rupyaa(void);
 void bouderlines(void);
 void questionlines(void);
 void Aoption(void);
 void Boption(void);
 void Coption(void);
 void Doption(void);
 int questionclearlines(int);
 int optionclear(int,int,int,int);
 void lifelines(int,int);
 void lifeline1(char,int);
 void cleartime(void);
 void highscore(int);
 void kbclogo(void);
 void homepage(void);

 void homepage(void)
 {
  setcolor(BLUE);
  //rectangle(0,0,600,479);
  kbclogo();
  setcolor(RED);
  outtextxy(10,250,"RULES - :");
  outtextxy(30,270,"PRESS A,B,C,D FOR CHOOSE AN OPTION");
  outtextxy(30,290,"PRESS H FOR 50:50 LIFELINE");
  outtextxy(30,310,"PRESS S FOR SKIP LIFELINE");
  outtextxy(30,330,"PRESS E FOR EXPERT ADVICE LIFELINE");
  outtextxy(30,350,"PRESS ESC TO EXIT ANYTIME");
  outtextxy(30,370,"PRESS ANY KEY TO START GAME....");
  outtextxy(300,390,"GAME BY -: Thanendra Kashyap");
  getch();
  cleardevice();

 }

 void kbclogo(void)
 {
  setcolor(WHITE);
  circle(getmaxx()/4+20,getmaxy()/4+20,100);//Outer Circle
  outtextxy(90,100,"K");
  outtextxy(102,77,"A");
  outtextxy(120,60,"U");
  outtextxy(140,50,"N");
  outtextxy(216,50,"B");
  outtextxy(233,60,"A");
  outtextxy(245,73,"N");
  outtextxy(257,87,"E");
  outtextxy(263,100,"G");
  outtextxy(268,113,"A");
  circle(getmaxx()/4+20,getmaxy()/4+20,85); //Inner Circle
  outtextxy(getmaxx()/4-43,getmaxy()/4+20,"C R O R E P A T I");
  //outtextxy(getmaxx()/4+21,123,"R");  //Y=16
  //outtextxy(getmaxx()/4+21,107,"O");
  //outtextxy(getmaxx()/4+21,91,"R");
  //outtextxy(getmaxx()/4+21,75,"C");
  //outtextxy(getmaxx()/4+21,155,"P");
  //outtextxy(getmaxx()/4+21,171,"A");
  //outtextxy(getmaxx()/4+21,187,"T");
  //outtextxy(getmaxx()/4+21,203,"I");
  outtextxy(265,165,"A");//139
  outtextxy(260,178,"G");
  outtextxy(252,191,"E");
  outtextxy(240,205,"N");
  outtextxy(225,216,"A");
  outtextxy(210,225,"B");
  outtextxy(140,223,"N");
  outtextxy(120,212,"U");
  outtextxy(102,192,"A");
  outtextxy(90,172,"K");
  }

 void cleartime(void)
 {
	    setcolor(RED);
	    rectangle(getmaxx()/2-10,288,getmaxx()/2+10,299);
	    setfillstyle(SOLID_FILL,RED);
	    floodfill(getmaxx()/2-7,290,RED);
	    setcolor(BLUE);
	    rectangle(getmaxx()/2-10,288,getmaxx()/2+10,299);
	    setfillstyle(SOLID_FILL,BLUE);
	    floodfill(getmaxx()/2-7,290,BLUE);
 }

 void lifeline1(char ans,int no)
 {
  int ANS;
  ANS = ans - 96;
  if(ANS == 1)
    {
     optionclear(2,0,no,0);
     optionclear(4,0,no,0);
    }
  if(ANS == 2)
    {
     optionclear(3,0,no,0);
     optionclear(1,0,no,0);
    }
  if(ANS == 3)
    {
     optionclear(4,0,no,0);
     optionclear(2,0,no,0);
    }
  if(ANS == 4)
    {
     optionclear(1,0,no,0);
     optionclear(3,0,no,0);
    }
 }


void lifelines(int i,int j)
{
 //setcolor(WHITE);
 if(i == 0)
   {
    switch(j)
      {
	case 2 :
	  setcolor(6);
	  arc(460,19,0,360,16);
	  break;
	case 1 :
	  setcolor(RED);
	  arc(460,19,0,360,16);
	  break;
	default :
	   setcolor(WHITE);
	   arc(460,19,0,360,17);
	   break;
      }
    switch(j)
      {
       case 2 :
	 setfillstyle(SOLID_FILL,6);
	 floodfill(460,19,6);
	 setcolor(WHITE);
	 outtextxy(450,42,"'H'");
	 outtextxy(455,7,"50");
	 outtextxy(460,16,"/");
	 outtextxy(455,25,"50");
	 delay(1000);
	 lifelines(i,1);
	 break;
       case 1 :
	 setfillstyle(SOLID_FILL,RED);
	 floodfill(460,19,RED);
	 break;
      }
      setcolor(WHITE);
      outtextxy(450,42,"'H'");
      outtextxy(455,7,"50");
      outtextxy(460,16,"/");
      outtextxy(455,25,"50");
    }

  if(i == 1)
    {
     switch(j)
       {
	case 2 :
	  setcolor(6);
	  arc(513,19,0,360,16);
	  break;
	case 1 :
	  setcolor(RED);
	  arc(513,19,0,360,16);
	  break;
	default :
	   setcolor(WHITE);
	   arc(513,19,0,360,17);
	   break;
       }
     switch(j)
       {
	case 2 :
	  setfillstyle(SOLID_FILL,6);
	  floodfill(513,19,6);
	  setcolor(WHITE);
	  outtextxy(503,42,"'S'");
	  outtextxy(498,16,"skip");
	  delay(1000);
	  lifelines(i,1);
	  break;
	case 1 :
	  setfillstyle(SOLID_FILL,RED);
	  floodfill(513,19,RED);
	  break;
       }
     setcolor(WHITE);
     outtextxy(503,42,"'S'");
     outtextxy(498,16,"skip");
    }
  if(i == 2)
    {
     switch(j)
       {
	case 2 :
	  setcolor(6);
	  arc(566,19,0,360,16);
	  break;
	case 1 :
	  setcolor(RED);
	  arc(566,19,0,360,16);
	  break;
	default :
	   setcolor(WHITE);
	   arc(566,19,0,360,17);
	   break;
       }
     switch(j)
       {
	case 2 :
	  setfillstyle(SOLID_FILL,6);
	  floodfill(552,19,6);
	  setcolor(WHITE);
	  arc(566,19,0,360,17);
	  outtextxy(552,16,"Xprt");
	  outtextxy(556,42,"'E'");
	  delay(1000);
	  lifelines(i,1);
	  break;
	case 1 :
	  setfillstyle(SOLID_FILL,RED);
	  floodfill(552,19,RED);
	  break;
       }
     setcolor(WHITE);
     arc(566,19,0,360,17);
     outtextxy(552,16,"Xprt");
     outtextxy(556,42,"'E'");
    }
}

void rightanslines(int i)
{
 int I = 6;
 char star[1];
 setcolor(I);       //3,6,9
 rectangle(431,270-15*i,638,289-15*i);
 setfillstyle(SOLID_FILL,I);
 floodfill(440,275-15*i,I);
 sprintf(star,"%c",4);
 if(i > 0 )
   {
    setcolor(BLUE);       //3,6,9
    rectangle(431,270-15*(i-1),638,289-15*(i-1));
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(440,275-15*(i-1),BLUE);
    setcolor(WHITE);
    outtextxy(465,275-15*(i-1),star);
   }
 rupyaa();
 setcolor(WHITE);
 sprintf(star,"%c",4);
 outtextxy(465,275-15*i,star);
 //outtextxy(440,275," 1.         1,000");
 //outtextxy(440,260," 2.         2,000");

 //line(430,0,430,290);
 //line(430,290,679,290);
 //line(430,50,639,50);
}

void questions(int i)
{
 char que1[100];
 int j;
 char que[33][100] = {
		     "Which of these viruses takes it's name from a place in Malaysia ?",
		     "The weight of diamonds is usually measured in what :",
		     "Which state of India has the shortest coastline ?",
		     "Which of these planets has a solid surface ?",
		     "Which of these is a device used to lift heavy objects from the ground?",
		     "Which of these refers to the name of a month in the Hindu calendar?",
		     "Who is the founder of the Biju Janta Dal?",
		     "Which of these banks was founded in lahore in the 19th century?",
		     "According to Hindu mythology, who is the charioteer of the sun?",
		     "Entomology is the science that studies",
		     "A form of rice is the main ingredient in which of these food items?",
		     "The International Literacy Day is observed on",
		     "The language of Lakshadweep. a Union Territory of India, is",
		     "Bahubali festival is related to",
		     "Which day is observed as the World Standards  Day?",
		     "September 27 is celebrated every year as",
		     "Who is the author of 'Manas Ka-Hans' ?",
		     "Who is the author of the epic 'Meghdoot'?",
		     "Pongal is a popular festival of which state?",
		     "Ghototkach in Mahabharat was the son of",
		     "Van Mahotsav was started by",
		     "The first month of the Indian national calendar is",
		     "Which of the following is not a dance from Kerala?",
		     "The festival of Nabanna is celebrated predominatly in",
		     "Rath Yatra is famous festival at",
		     "Onam is the main festival of",
		     "Which one of the following is essentially a solo dance?",
		     "Which of the followiing is a folk dance of India?",
		     "Central Salt and Marine Chemicals Research Institute is located at",
		     "The Krithi system was perfected and Carnatic music was given by",
		     "Kalarippayat is the martial art  of the State of",
		     "Which city of India was first of all affected by plague?",
		     "Dogri is spoken in which of the following states"
		    };

 for(j = 0; que[i][j] != NULL; j++)
     que1[j] = que[i][j];
 que1[j] = '\0';
 outtextxy(30, 325, que1);

}

void options(int i)
{
  int j;
  char option1[40];
  char option[33][4][40] = {
			    "Nipah","Ebola","Influenza","HIV",
			    "Tola","Carat","Maund","Troy",
			    "Goa","Maharashtra","Odisha","West Bengal",
			    "Mars","Saturn","Jupiter","Uranus",
			    "Jill","Jack","Jones","Jerry",
			    "Avinash","Advait","Amit","Ashwin",
			    "Naveen Patnaik","Biju Patnaik","Janki Ballav Patnaik","Govind Ballav Patnaik",
			    "Punjab and Sindh Bank","Punjab National Bank","UCO Bank","Dena Bank",
			    "Matli","Jalandhar","Arun","Chitragupt",
			    "Behavior of human beings","Insects","The history of technical terms","The formation of rocks",
			    "Indori Poha","Amritsari Kulcha","Bikaneri Bhujia","Kerala Parotta",
			    "Sep 8","Nov 28","May 2","Sep 22",
			    "Tamil","Hindi","Malayalam","Telugu",
			    "Islam","Hinduism","Buddhism","Jainism",
			    "June 26","Oct 14","Nov 15","Dec 2",
			    "Teachers' Day","National Integration Day","World Tourism Day","International Literacy Day",
			    "Khushwant Singh","Prem Chand","Jayashankar Prasad","Amrit Lal Nagar",
			    "Vishakadatta","Valmiki","Banabhatta","Kalidas",
			    "Karnataka","Kerala","Tamil Nadu","Andhra Pradesh",
			    "Duryodhana","Arjuna","Yudhishthir","Bhima",
			    "Maharshi Karve","Bal Gangadhar Tiiak","K.M. Munshi","Sanjay Gandhi",
			    "Magha","Chaitra","Ashadha","Vaishakha",
			    "Kathakali","Mohiniattam","Ottan Thullal","Yaksha Gana",
			    "Andhra Pradesh","Rajasthan","Kamataka","Orissa",
			    "Ayodhya","Mathura","Dwaraka","Puri",
			    "Tamil Nadu","Karnataka","Andhra Pradesh","Kerala",
			    "Kuchipudi","Kathak","Manipuri","Mohiniattam",
			    "Kathakali","Mohiniattam","Garba","Manipuri",
			    "Ahmedabad","Bhavnagar","Gandhinagar","Panaji",
			    "Arunagirinathan","Purandaradasa","Shyama Shastri","Swati Tirunal",
			    "Madhya Pradesh","Mizoram","Nagaland","Kerala",
			    "Jaipur","Bombay","Surat","Kanpur",
			    "Bihar","Orissa","Assam","Jammu & Kashmir"
			  };

  for(j = 0; option[i][0][j] != NULL; j++) //Option A printing
      option1[j] = option[i][0][j];
  option1[j] = '\0';
  outtextxy(55,383,option1);

  for(j = 0; option[i][1][j] != NULL; j++) //Option B printing
      option1[j] = option[i][1][j];
  option1[j] = '\0';
  outtextxy(359,383,option1);

  for(j = 0; option[i][2][j] != NULL; j++) //Option C printing
      option1[j] = option[i][2][j];
  option1[j] = '\0';
  outtextxy(55,433,option1);

  for(j = 0; option[i][3][j] != NULL; j++) //Option D printing
      option1[j] = option[i][3][j];
  option1[j] = '\0';
  outtextxy(359,433,option1);

}

char answers(int i)
{
 char answer[33] = {
		   'a',
		   'b',
		   'a',
		   'a',
		   'b',
		   'd',
		   'a',
		   'b',
		   'c',
		   'b',
		   'a',
		   'a',
		   'c',
		   'd',
		   'b',
		   'c',
		   'd',
		   'd',
		   'c',
		   'd',
		   'c',
		   'b',
		   'd',
		   'd',
		   'd',
		   'd',
		   'd',
		   'c',
		   'd',
		   'd',
		   'd',
		   'c',
		   'd'
		  };
 return ( answer[i] );
}

void rupyaa(void)
{
 setcolor(WHITE);
 line(430,0,430,290);
 line(430,290,679,290);
 line(430,50,639,50);
 setcolor(3);
 outtextxy(440,215," 5.        10,000");
 outtextxy(440,140,"10.      3,20,000");
 outtextxy(440,65, "15.    Rs 1 Crore");
 setcolor(11);
 outtextxy(440,275," 1.         1,000");
 outtextxy(440,260," 2.         2,000");
 outtextxy(440,245," 3.         3,000");
 outtextxy(440,230," 4.         5,000");
 outtextxy(440,200," 6.        20,000");
 outtextxy(440,185," 7.        40,000");
 outtextxy(440,170," 8.        80,000");
 outtextxy(440,155," 9.      1,60,000");
 outtextxy(440,125,"11.      6,40,000");
 outtextxy(440,110,"12.     12,80,000");
 outtextxy(440,95, "13.     25,00,000");
 outtextxy(440,80, "14.     50,00,000");

}

void Doption(void)
{

 setcolor(WHITE);
 line(334,420,609,420);     //D option Up Line
 line(334,450,609,450);     //D option Down Line
 line(624,435,609,420);     //D option Right Up Line
 line(624,435,609,450);     //D option Right Down Line
 line(624,435,639,435);     //D option Right Line
 setcolor(6);
 outtextxy(334,433,"D : ");

}


void Coption(void)
{

   setcolor(WHITE);
   line(30,420,304,420);      //C option Up Line
   line(30,450,304,450);      //C option Down Line
   line(15,435,30,420);       //C option Left Up Line
   line(15,435,30,450);       //C option Left Down Line
   line(0,435,15,435);        //C option Left Line
   line(304,420,334,450);     //C To D 1st Cross Line
   line(304,450,334,420);     //C To D 2nd Cross Line
   setcolor(6);
   outtextxy(30,433,"C : ");

}


void Boption(void)
{

   setcolor(WHITE);
   line(334,370,609,370);     //B option up Line
   line(334,400,609,400);     //B option down Line
   line(624,385,609,370);     //B option Right Up Line
   line(624,385,609,400);     //B option Right Down Line
   line(624,385,639,385);     //B option Right Line
   setcolor(6);
   outtextxy(334,383,"B : ");

}


void Aoption(void)
{

 setcolor(WHITE);
 line(30,370,304,370);      //A option up lines
 line(30,400,304,400);      //A option down line
 line(15,385,30,370);       //A option left up line
 line(15,385,30,400);       //A option left down line
 line(0,385,15,385);        //A option left line
 line(304,370,334,400);     //A To B 1st cross Line
 line(304,400,334,370);     //A To B 2nd cross Line
 setcolor(6);
 outtextxy(30,383,"A : ");

}


void questionlines(void)
{

 setcolor(WHITE);
 line(30,300,609,300);         //UP Line
 line(30,350,609,350);         //Down Line
 line(15,325,30,300);          //LEft Up Line
 line(15,325,30,350);          //Left Down Line
 line(0,325,15,325);           //Left Line
 line(624,325,609,300);        //Right Up Line
 line(624,325,609,350);        //Right Down Line
 line(624,325,639,325);        //Right Line

}


void bouderlines(void)
{
 setcolor(WHITE);
 line(0,0,639,0);        //UP     Bouder
 line(0,479,639,479);    //DOWN   Bouder
 line(0,0,0,479);        //Left   Bouder
 line(639,0,639,479);    //Right  Bouder

}

void main()
{
 int gd=0,gm,i;
 int no,flag,tmp,t,home_page=1;
 int lifelineflag[3];
 char ANS,ans;
 initgraph(&gd,&gm,"      ");
 Start :
 t = 0;
 no = NULL;
 tmp = NULL;
 lifelineflag[0] = 0;
 lifelineflag[1] = 0;
 lifelineflag[2] = 0;
 //initgraph(&gd,&gm,"      ");
 if(home_page == 1)
    homepage();
 setbkcolor(BLUE);
 kbclogo();
 bouderlines();
 questionlines();
 Aoption();
 Boption();
 Coption();
 Doption();
 rupyaa();
 lifelines(0,0);
 lifelines(1,0);
 lifelines(2,0);
 for(i=1;i<=16;i++)
    {
      static int time = 30;
      setcolor(WHITE);
      if( t == 0 )
	{
	 outtextxy(1,1,"");
	 randomize();
	 no = random(30);
	}
      home_page = 0;
      questions(no);
      if(tmp != NULL)
	{
	 time = tmp;
	 tmp = NULL;
	}                  //End of if
      options(no);
      ans = answers(no);
      setcolor(RED);
      rectangle(2,2,300,16);
      setfillstyle(SOLID_FILL,RED);
      floodfill(3,3,RED);
      setcolor(BLUE);
      rectangle(2,2,300,16);
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(3,3,BLUE);
      BACK :
      if(i<=11) //
	{
	 char time1[3];
	 setcolor(WHITE);
	 arc(getmaxx()/2,299,0,180,19);
	 while(!kbhit())
	   {
	    cleartime();
	    setcolor(WHITE);
	    sprintf(time1,"%d",time);
	    outtextxy(getmaxx()/2-7,290,time1);
	    if(time == 0)
	      {
	       delay(500);
	       highscore(1);
	       if(i<= 5)
		 time = 30;
	       else
		 time = 45;
	       goto Start;
	      }                       //End of if
	    delay(1000);
	    time--;
	   }                          //End of Loop
	}                             //End of if
      if(i == 12)
	{
	  cleartime();
	  setcolor(BLUE);
	  arc(getmaxx()/2,299,0,180,19);
	}                             //End of if
      ANS = getch();
      switch(ANS)
	{
	 case 'h':
	   h :
	   if(lifelineflag[0] == 0)
	     {
	      lifelines(0,2);
	      lifeline1(ans,no);
	      lifelineflag[0] = 1;
	     }                        //End of if
	   else
	     {
	      setcolor(WHITE);
	      outtextxy(5,5,"You Can't Use This Lifeline Again");
	      goto BACK;
	     }                        //End of if
	   goto BACK;
	   //break;
	 case 'H':
	   goto h;
	   //break;
	 case 's':
	   s:
	   if(lifelineflag[1] == 0)
	     {
	      lifelines(1,2);
	      i--;
	      lifelineflag[1] = 1;
	      tmp = time;
	      goto SKIP;
	     }                        //End of if
	   else
	     {
	      setcolor(WHITE);
	      outtextxy(5,5,"You Can't Use This Lifeline Again");
	      goto BACK;
	     }                        //End of if
	   //break;
	 case 'S':
	   goto s;
	   //break;
	 case 'e':
	   e :
	   if(lifelineflag[2] == 0)
	     {
	      lifelines(2,2);
	      ANS = ans;
	      optionclear(ans - 96,2,no,0);
	      lifelineflag[2] = 1;
	     }                        //End of if
	   else
	     {
	      setcolor(WHITE);
	      outtextxy(5,5,"You Can't Use This Lifeline Again");
	      goto BACK;
	     }                        //End of if
	   break;
	 case 'E':
	   goto e;
	   //break;
	 case 'a':
	   optionclear(1,1,no,0);
	   break;
	 case 'A':
	   optionclear(1,1,no,0);
	   ANS = 'a';
	   break;
	 case 'b':
	   optionclear(2,1,no,0);
	   break;
	 case 'B':
	   optionclear(2,1,no,0);
	   ANS = 'b';
	   break;
	 case 'c':
	   optionclear(3,1,no,0);
	   break;
	 case 'C':
	   optionclear(3,1,no,0);
	   ANS = 'c';
	   break;
	 case 'd':
	   optionclear(4,1,no,0);
	   break;
	 case 'D':
	   optionclear(4,1,no,0);
	   ANS = 'd';
	   break;
	 case Esc:
	   exit(2);
	 default :
	   setcolor(WHITE);
	   outtextxy(5,5,"Please Enter Right Key");
	   goto BACK;
	}                             //End of Switch Case
      flag = ans - 96;
      delay(1000);
      optionclear(flag,2,no,0);
      delay(500);
      if(ANS != ans)
	{
	 highscore(2); //Condition will be change
	 //if(i<= 5)
	    time = 30;
	 //else
	   // time = 45;
	 goto Start;
	}
      if( i == 16 )
	{
	 highscore(0);
	 time = 30;
	 goto Start;
	}
      rightanslines(i-1);
      SKIP :
      questionclearlines(0);
      optionclear(1,0,no,0);
      optionclear(2,0,no,0);
      optionclear(3,0,no,0);
      optionclear(4,0,no,0);
      if(i<= 5)
	time = 30;
      else
	time = 45;
    }                               //End of Loop
  closegraph();
}

void highscore(int i)
{
 char ans;
 setbkcolor(BLUE);
 setcolor(DARKGRAY);
 rectangle(getmaxx()/2-120,getmaxy()/2-100,getmaxx()/2+120,getmaxy()/2+100);
 setfillstyle(SOLID_FILL,DARKGRAY);
 floodfill(getmaxx()/2,getmaxy()/2,DARKGRAY);
 setcolor(WHITE);
 if(i == 0)
   {
    outtextxy(getmaxx()/2-90,getmaxy()/2-40,"Congratulation You Won");
    outtextxy(getmaxx()/2-30,getmaxy()/2-20,"1 Crore");
   }
 if(i == 1)
    outtextxy(getmaxx()/2-40,getmaxy()/2-40,"Time Up !!!");
 if(i == 2)
    outtextxy(getmaxx()/2-40,getmaxy()/2-40,"Wrong Answer");
 outtextxy(getmaxx()/2-80,getmaxy()/2+30,"Want to play Again : ");
 rectangle(getmaxx()/2-120,getmaxy()/2+80,getmaxx()/2,getmaxy()/2+100);
 outtextxy(getmaxx()/2-100,getmaxy()/2+87,"Y for Yes");
 rectangle(getmaxx()/2,getmaxy()/2+80,getmaxx()/2+120,getmaxy()/2+100);
 outtextxy(getmaxx()/2+30,getmaxy()/2+87,"N for No");
 ans = getch();
 if(ans == 'y'|| ans == 'Y')
   {
    setcolor(YELLOW);
    rectangle(getmaxx()/2-120,getmaxy()/2+80,getmaxx()/2,getmaxy()/2+100);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(getmaxx()/2-100,getmaxy()/2+87,YELLOW);
    setcolor(RED);
    outtextxy(getmaxx()/2-100,getmaxy()/2+87,"Y for Yes");
    delay(500);
    cleardevice();
    return;
   }
 if(ans == 'n'|| ans== 'N')
   {
    setcolor(YELLOW);
    rectangle(getmaxx()/2,getmaxy()/2+80,getmaxx()/2+120,getmaxy()/2+100);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(getmaxx()/2+30,getmaxy()/2+87,YELLOW);
    setcolor(RED);
    outtextxy(getmaxx()/2+30,getmaxy()/2+87,"N for No");
    delay(500);
    exit(1);
   }
}

int questionclearlines(int color)
{

 setcolor(color);
 line(31,301,608,301);         //UP Line
 line(31,349,608,349);         //Down Line
 line(16,325,31,301);          //LEft Up Line
 line(16,325,31,349);          //Left Down Line
 line(623,325,608,301);        //Right Up Line
 line(623,325,608,349);        //Right Down Line
 setfillstyle(SOLID_FILL, color);
 floodfill(40, 330, color);
 if(color == 1)
    return 0;
 questionclearlines(1);
 return 0;

}

int optionclear(int option,int i,int no,int color)
{
   if(option == 1)  //For A option
     {
      if(i == 2)
	setcolor(GREEN);
      if(i == 1)
	setcolor(RED);
      if(i == 0)
	setcolor(color);
      line(31,371,303,371);      //A option up lines
      line(31,399,303,399);      //A option down line
      line(16,385,31,371);       //A option left up line
      line(16,385,31,399);       //A option left down line
      line(303,371,318,385);     //A option right up line
      line(303,399,318,385);     //A option right down line
      if(i == 2)
	{
	 setfillstyle(SOLID_FILL, GREEN);
	 floodfill(40, 380, GREEN);
	 setcolor(WHITE);
	 options(no);
	}
      if(i == 1)
	{
	 setfillstyle(SOLID_FILL, RED);
	 floodfill(40, 380, RED);
	 setcolor(WHITE);
	 options(no);
	}
      if(i == 0)
	{
	 setfillstyle(SOLID_FILL, color);
	 floodfill(40, 380, color);
	 if(color == 1)
	    return 0;
	 optionclear(option,i,no,1);
	}
      setcolor(6);
      outtextxy(30,383,"A : ");
      return 0;
     }

     if(option == 2) //For Option 2
       {
	if(i == 2)
	  setcolor(GREEN);
	if(i == 1)
	  setcolor(RED);
	if(i == 0)
	  setcolor(color);
	line(334,371,608,371);     //B option up Line
	line(334,399,608,399);     //B option down Line
	line(623,385,608,371);     //B option Right Up Line
	line(623,385,608,399);     //B option Right Down Line
	line(334,371,320,385);     //B option Left Up Line
	line(334,399,320,385);     //B option Left Down Line
	if(i == 2)
	  {
	   setfillstyle(SOLID_FILL, GREEN);
	   floodfill(340, 380, GREEN);
	   setcolor(WHITE);
	   options(no);
	  }
	if(i == 1)
	  {
	   setfillstyle(SOLID_FILL, RED);
	   floodfill(340, 380, RED);
	   setcolor(WHITE);
	   options(no);
	  }
	if(i == 0)
	  {
	   setfillstyle(SOLID_FILL, color);
	   floodfill(340, 380, color);
	   if(color == 1)
	    return 0;
	 optionclear(option,i,no,1);

	  }
	setcolor(6);
	outtextxy(334,383,"B : ");
	return 0;
       }

       if(option == 3)  //For C
	 {
	  if(i == 2)
	    setcolor(GREEN);
	  if(i == 1)
	    setcolor(RED);
	  if(i == 0)
	    setcolor(color);
	  line(31,421,303,421);      //C option Up Line
	  line(31,449,303,449);      //C option Down Line
	  line(16,435,31,421);       //C option Left Up Line
	  line(16,435,31,449);       //C option Left Down Line
	  line(303,421,318,435);     //C option right up line
	  line(303,449,318,435);     //C option right down line
	  if(i == 2)
	    {
	     setfillstyle(SOLID_FILL, GREEN);
	     floodfill(30, 433, GREEN);
	     setcolor(WHITE);
	     options(no);
	    }
	  if(i == 1)
	    {
	     setfillstyle(SOLID_FILL, RED);
	     floodfill(30, 433, RED);
	     setcolor(WHITE);
	     options(no);
	    }
	  if(i == 0)
	    {
	     setfillstyle(SOLID_FILL, color);
	     floodfill(30, 433, color);
	     if(color == 1)
		return 0;
	     optionclear(option,i,no,1);
	    }
	  setcolor(6);
	  outtextxy(30,433,"C : ");
	  return 0;
	 }

       if(option == 4)
	 {
	  if(i == 2)
	    setcolor(GREEN);
	  if(i == 1)
	    setcolor(RED);
	  if(i == 0)
	    setcolor(color);
	  line(335,421,608,421);     //D option Up Line
	  line(335,449,608,449);     //D option Down Line
	  line(623,435,608,421);     //D option Right Up Line
	  line(623,435,608,449);     //D option Right Down Line
	  line(335,421,320,435);     //B option Left Up Line
	  line(335,449,320,435);     //B option Left Down Line
	  if(i == 2)
	    {
	     setfillstyle(SOLID_FILL, GREEN);
	     floodfill(334, 433, GREEN);
	     setcolor(WHITE);
	     options(no);
	    }
	  if(i == 1)
	    {
	     setfillstyle(SOLID_FILL, RED);
	     floodfill(334, 433, RED);
	     setcolor(WHITE);
	     options(no);
	    }
	  if(i == 0)
	    {
	     setfillstyle(SOLID_FILL, color);
	     floodfill(334, 433, color);
	     if(color == 1)
		return 0;
	     optionclear(option,i,no,1);
	    }
	  setcolor(6);
	  outtextxy(334,433,"D : ");
	  return 0;
	 }
	 return 0;
}