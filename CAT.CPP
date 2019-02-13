
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c://turboc3//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());

   /* draw a diagonal line */
   line(150,150,145,155);
   line(145,155,140,150);
   line(140,150,150,150);
   line(125,125,125,110);
   line(125,110,130,125);
   line(155,120,150,110);
   line(150,110,150,120);
   line(180,250,180,280);
   circle(180,290,10);
   circle(220,290,10);
   circle(200,200,50);
   circle(220,220,20);
   circle(145,145,25);
   circle(135,135,5);
   circle(150,135,5);
   line(220,250,220,280);
   arc(275,150,220,15,40);
   line(145,150,155,160);
   line(145,150,155,155);
   line(145,150,155,145);
   line(140,150,130,145);
   line(140,150,130,155);
   line(140,150,135,160);

   getch();
   closegraph();
   return 0;
}

