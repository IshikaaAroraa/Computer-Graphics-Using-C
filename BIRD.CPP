#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void main()
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
	setcolor(GREEN);
	ellipse(290,165,0,360,45,50);
	ellipse(240,230,87,375,60,60);
	arc(190,180,260,355,60);
	setcolor(WHITE);
	circle(300,155,6);
	setcolor(GREEN);
	arc(302,154,104,299,4);
	line(335,157,355,157);
	line(330,140,355,157);
	line(335,173,355,157);
	line(220,310,300,290);
	line(225,320,305,300);
	line(300,290,305,300);
	line(220,310,225,320);
	arc(245,310,363,52,30);
	arc(235,310,360,50,30);
	line(80,250,80,295);
	line(80,250,180,240);
	line(79,295,200,275);
	line(79,283,190,265);
	line(79,267,185,250);
	getch();
	closegraph;
}