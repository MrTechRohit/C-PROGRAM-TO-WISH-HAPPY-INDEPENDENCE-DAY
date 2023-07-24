//......... WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ...............//
//__________ C++ PROGRAM TO WISH HAPPY INDEPENDENCE DAY __________________//

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{

int gd=DETECT,gm,i,j,x,y;

initgraph(&gd,&gm,"c:\\tc\\bgi");

for(i=1;i<=500;i++)
{
setcolor(LIGHTRED);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(160,10,"15");

setcolor(LIGHTGREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(210,10,"AUGUST");

setcolor(LIGHTRED);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(230,270,"HAPPY");

setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(160,320,"INDEPENDENCE");

setcolor(GREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(250,370,"DAY");

setcolor(YELLOW);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(130,450,"WISHES BY ROHIT TECH STUDY");

//head of heli  //
setcolor(15);
ellipse(300+i,100,-90,-270,20,25);
//up down line  //
line(300+i,75,260+i,75);
line(300+i,125,260+i,125);
//back head of heli  //
ellipse(260+i,100,90,130,20,25);
ellipse(260+i,100,230,270,20,25);

//back line  //
line(150+i,100,247+i,120);
line(150+i,100,247+i,80);

//back fan //
setcolor(7);
circle(150+i,100,25);
setfillstyle(1,7);
floodfill(150+i,100,7);
setcolor(BLUE);

pieslice(150+i,100,0+i,2+i,25);
pieslice(150+i,100,90+i,92+i,25);
pieslice(150+i,100,180+i,182+i,25);
pieslice(150+i,100,270+i,272+i,25);

//down stand //
setcolor(10);
line(275+i,125,270+i,150);
line(285+i,125,290+i,150);
line(260+i,150,300+i,150);

//up line(fan)  //
setcolor(12);
line(280+i,50,280+i,75);
line(260+i,50,300+i,50);

//middle set   //
setcolor(13);
line(290+i,85,290+i,110);
line(290+i,110,310+i,110);

line(220+i,200,260+i,130-3);
line(330+i,200,307+i,130-4);

setfillstyle(1,LIGHTRED);
bar(220+i,200,330+i,215);

setfillstyle(1,WHITE);
bar(220+i,215,330+i,230);

setfillstyle(1,GREEN);
bar(220+i,230,330+i,245);

setcolor(BLUE);
circle(280+i,222,7);
setfillstyle(1,BLUE);
floodfill(277+i,222,BLUE);
setcolor(WHITE);

delay(15);
cleardevice();
}
return 0;
}


//**********---- I HOPE YOU LIKE THIS PROGRAMMING  ----------************//

/*---------- LIKE _________ SHARE ________ SUBSCRIBE ------------------*/
