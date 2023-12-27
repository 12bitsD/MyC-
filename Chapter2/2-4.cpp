#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main4()
{
	int h,step;
	h = 800;
	step = 100;
	initgraph(600,600);
	fillcircle(300, h / 4, 12);
	Sleep(1000);
	h = h + step;
	cleardevice();
	fillcircle(300, h / 4, 12);
	Sleep(1000);
	h = h + step;
	cleardevice();
	fillcircle(300, h / 4, 12);
	Sleep(1000);
	h = h + step;
	cleardevice();
	_getch();
	closegraph();
	return 0;
}