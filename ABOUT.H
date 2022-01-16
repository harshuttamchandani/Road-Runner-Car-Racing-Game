#include <style.h>
void about()
{      
	cleardevice();
	setbkcolor(15);
	settextstyle(3,HORIZ_DIR,4);
	outtextxy(5,5,"INSTRUCTIONS");
	
    setfillstyle(1,8);
	bar(100,100,50,150);
	settextstyle(3,HORIZ_DIR,4);
	setcolor(15);

	outtextxy(55,100,"->");
		settextstyle(3,HORIZ_DIR,1);
	setcolor(RED);
	outtextxy(110,115,"USE RIGHT ARROW KEY TO MOVE TO THE RIGHT LANE");
	
	setfillstyle(1,8);
	bar(100,200,50,250);
	settextstyle(3,HORIZ_DIR,4);
	setcolor(15);

	outtextxy(55,200,"<-");
		settextstyle(3,HORIZ_DIR,1);
	setcolor(RED);
	outtextxy(110,215,"USE LEFT ARROW KEY TO MOVE TO THE LEFT LANE");
	
	
	
	settextstyle(1,HORIZ_DIR,3);
	outtextxy(midx-140,midy+100,"Press any key to go to main menu");


}