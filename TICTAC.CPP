#include<stdio.h>
#include<conio.h>
#include<process.h>
char no[3][3] ={'1','2','3','4','5','6','7','8','9'};
int a,i,j,count=0,c;

void display()
{  printf("\n      TIC TAC TOE GAME  \n\t");
for(i=0;i<=2;i++)
{printf("\n\t  _ _ _ _ _ _ \n\t |   |   |   |\n\t");
for(j=0;j<=2;j++) {
printf(" | %c",no[i][j]);
}
printf(" |");
}
printf("\n\t  _ _ _ _ _ _ \n\t");
}
void restart()
{
count=0;
no[0][0]='1';no[0][1]='2';
no[0][2]='3';no[1][0]='4';
no[1][1]='5';no[1][2]='6';
no[2][0]='7';no[2][1]='8';
no[2][2]='9';
}
void result()
{
if((no[0][0]==no[0][1]&&no[0][1]==no[0][2])||(no[1][0]==no[1][1]&&no[1][1]==no[1][2])||
(no[2][0]==no[2][1]&&no[2][1]==no[2][2])||(no[0][0]==no[1][0]&&no[1][0]==no[2][0])||
(no[0][1]==no[1][1]&&no[1][1]==no[2][1])||(no[0][2]==no[1][2]&&no[1][2]==no[2][2])||
(no[0][0]==no[1][1]&&no[1][1]==no[2][2])||(no[0][2]==no[1][1]&&no[1][1]==no[2][0]))
{ clrscr();
display();
if(c==1)
printf("\n player1 wins ");
else
printf("player2 wins");
printf("enter to restart");
getch();
restart();
}
}
void player1()
{       c=1;
count++;
display();
printf("for quit enter 0");
printf("\nplayer1 chance \n");
scanf("%d",&a);
switch(a)
{
case 1:no[0][0]='X';
break;
case 2:no[0][1]='X';
break;
case 3:no[0][2]='X';
break;
case 4:no[1][0]='X';
break;
case 5:no[1][1]='X';
break;
case 6:no[1][2]='X';
break;
case 7:no[2][0]='X';
break;
case 8:no[2][1]='X';
break;
case 9:no[2][2]='X';
break;
case 0: exit(1);
}
result();
if(count==9)
{
clrscr();
printf("\n\n\n\n\t\t\tGAME DRAW");
getch();
exit(1);

}
}
void player2()
{  c=2;      clrscr();
  count++;
display();
printf("for quit enter 0");
printf("\nplayer2 chance \n");
scanf("%d",&a);
switch(a)
{
case 1:no[0][0]='0';
break;
case 2:no[0][1]='0';
break;
case 3:no[0][2]='0';
break;
case 4:no[1][0]='0';
break;
case 5:no[1][1]='0';
break;
case 6:no[1][2]='0';
break;
case 7:no[2][0]='0';
break;
case 8:no[2][1]='0';
break;
case 9:no[2][2]='0';
break;
case 0: exit(1);
}
result();
}
  void main()
{
while(1)
{
clrscr();
player1();
player2();
}
}
