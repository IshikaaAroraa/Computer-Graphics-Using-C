#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setcolor(RED);
	line(160,180,80,260);
	line(160,180,240,260);
	line(80,260,240,260);
	setfillstyle(SOLID_FILL,RED);
	floodfill(161,250,RED);
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(210,210,280,260);
	floodfill(211,211,YELLOW);
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	circle(200,270,30);
	floodfill(200,270,BLUE);
	getch();
	closegraph;
}