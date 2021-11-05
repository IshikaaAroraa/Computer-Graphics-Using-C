#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(30,30,300,200);
	floodfill(31,31,YELLOW);
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(50,50,320,220);
	floodfill(51,51,BLUE);
	setcolor(GREEN);
	setfillstyle(SOLID_FILL,GREEN);
	rectangle(70,70,340,240);
	floodfill(71,71,GREEN);
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	rectangle(90,90,360,240);
	floodfill(91,91,RED);
	getch();
}