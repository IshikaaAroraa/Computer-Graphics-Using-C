#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(150,150,80);
	floodfill(151,151,YELLOW);
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(120,180,180,190);
	floodfill(121,181,BLACK);
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,BLACK);
	circle(110,130,20);
	floodfill(110,130,BLACK);
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,BLACK);
	circle(190,130,20);
	floodfill(190,130,BLACK);
	getch();
	closegraph;
}
