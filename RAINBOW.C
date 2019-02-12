#include<graphics.h>
void main()
{
	int x,y,i;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");

	x=getmaxx()/2;
	y=getmaxy()/2;

	for(i=30;i<200;i++)
	{
		delay(100);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
	getch();
}
	     //  Love the giver more than the gift