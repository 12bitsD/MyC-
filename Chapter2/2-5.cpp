#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main5()
{
	int y = 50;
	int r = 12;
	int step = 15;
	initgraph(600, 600);
	while (1000)
	{
		cleardevice();
		fillcircle(300, y, r);
		if (y > 620) 
			step=-15;
		if (y < 0)
			step = 15;
		y += step;
		r += 1;
		Sleep(100);
		
	}
	closegraph();
	return 0;
		
}