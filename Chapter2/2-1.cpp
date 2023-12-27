#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main0()
{
	initgraph(1200, 1200);
	fillcircle(300, 1 * 1200 /3, 120);
	fillcircle(300, 2 * 1200 /3, 120);
	fillcircle(300, 3 * 1200 /3, 120);
	_getch();
	closegraph();
	return 0;
}