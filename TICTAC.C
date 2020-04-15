/* A simple 2D game of Tic Tac Toe */

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

void board();
void com_move();
void player_move();
void win_check();

int flag[9]={0,0,0,0,0,0,0,0,0};
int box[9], move=0;

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	while(1)
	{
		outtextxy(220,10,"***TIC TAC TOE***");
		outtextxy(200,30,"Computer has O and you have X");
		outtextxy(220,220,"Enter 0 to exit");
		printf("\n");
		board();
		com_move();
		win_check();
		player_move();
		win_check();

		getch();
	}
	closegraph();
}

void win_check()
{
	int win=0;

		if(box[0]==box[1]&&box[1]==box[2]&&box[1]==1)
		{
			win=1;
		}
		if(box[0]==box[1]&&box[1]==box[2]&&box[1]==2)
		{
			win=2;
		}
		if(box[0]==box[3]&&box[3]==box[6]&&box[3]==1)
		{
			win=1;
		}
		if(box[0]==box[3]&&box[3]==box[6]&&box[3]==2)
		{
			win=2;
		}
		if(box[3]==box[4]&&box[4]==box[5]&&box[4]==1)
		{
			win=1;
		}
		if(box[3]==box[4]&&box[4]==box[5]&&box[4]==2)
		{
			win=2;
		}
		if(box[6]==box[7]&&box[7]==box[8]&&box[7]==1)
		{
			win=1;
		}
		if(box[6]==box[7]&&box[7]==box[8]&&box[7]==2)
		{
			win=2;
		}
		if(box[1]==box[4]&&box[4]==box[7]&&box[4]==1)
		{
			win=1;
		}
		if(box[1]==box[4]&&box[4]==box[7]&&box[4]==2)
		{
			win=2;
		}
		if(box[2]==box[5]&&box[5]==box[8]&&box[5]==1)
		{
			win=1;
		}
		if(box[2]==box[5]&&box[5]==box[8]&&box[5]==2)
		{
			win=2;
		}
		if(box[2]==box[4]&&box[4]==box[6]&&box[4]==1)
		{
			win=1;
		}
		if(box[2]==box[4]&&box[4]==box[6]&&box[4]==2)
		{
			win=2;
		}
		if(box[0]==box[4]&&box[4]==box[8]&&box[4]==1)
		{
			win=1;
		}
		if(box[0]==box[4]&&box[4]==box[8]&&box[4]==2)
		{
			win=2;
		}


		if(win==1)
		{
			printf("Game Over\nPlayer Wins");
			getch();
			exit(0);
		}
		if(win==2)
		{
			printf("Game Over\nComputer Wins");
			getch();
			exit(0);
		}
		else if(move==8)
		{
			printf("Match Draw");
			getch();
			exit(0);
		}
}

void board()
{
	int i;
	for(i=0;i<=90;i+=30)
	{
		line(220+i,50,220+i,140); //vertical lines
		line(220,50+i,310,50+i); //horizontal lines
	}
}

void com_move()
{
		int i;
		for(i=0;i<9;i++)
		{
			if(flag[i]==0&&i==0)
			{
				outtextxy(230,60,"O");
				flag[i]=1;
				box[0]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==1&&box[1]!=1)
			{
				outtextxy(260,60,"O");
				flag[i]=1;
				box[1]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==2&&box[2]!=1)
			{
				outtextxy(290,60,"O");
				flag[i]=1;
				box[2]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==3&&box[3]!=1)
			{
				outtextxy(230,90,"O");
				flag[i]=1;
				box[3]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==4&&box[4]!=1)
			{
				outtextxy(260,90,"O");
				flag[i]=1;
				box[4]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==5&&box[5]!=1)
			{
				outtextxy(290,90,"O");
				flag[i]=1;
				box[5]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==6&&box[6]!=1)
			{
				outtextxy(230,120,"O");
				flag[i]=1;
				box[6]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==7&&box[7]!=1)
			{
				outtextxy(260,120,"O");
				flag[i]=1;
				box[7]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==8&&box[8]!=1)
			{
				outtextxy(290,120,"O");
				flag[i]=1;
				box[8]=2;
				move=move+1;
				break;
			}
		}
}

void player_move()
{
	int i;

	printf("\nEnter the box no : ");
	scanf("%d", &i);
			if(i==0)
			{
				exit(0);
			}
			if(i==1&&flag[i-1]==0)
			{
				outtextxy(230,60,"X");
				flag[i-1]=1;
				box[0]=1;
				move=move+1;
			}
			else if(i==2&&flag[i-1]==0)
			{
				outtextxy(260,60,"X");
				flag[i-1]=1;
				box[1]=1;
				move=move+1;
			}
			else if(i==3&&flag[i-1]==0)
			{
				outtextxy(290,60,"X");
				flag[i-1]=1;
				box[2]=1;
				move=move+1;
			}
			else if(i==4&&flag[i-1]==0)
			{
				outtextxy(230,90,"X");
				flag[i-1]=1;
				box[3]=1;
				move=move+1;
			}
			else if(i==5&&flag[i-1]==0)
			{
				outtextxy(260,90,"X");
				flag[i-1]=1;
				box[4]=1;
				move=move+1;
			}
			else if(i==6&&flag[i-1]==0)
			{
				outtextxy(290,90,"X");
				flag[i-1]=1;
				box[5]=1;
				move=move+1;
			}
			else if(i==7&&flag[i-1]==0)
			{
				outtextxy(230,120,"X");
				flag[i-1]=1;
				box[6]=1;
				move=move+1;
			}
			else if(i==8&&flag[i-1]==0)
			{
				outtextxy(260,120,"X");
				flag[i-1]=1;
				box[7]=1;
				move=move+1;
			}
			else if(i==9&&flag[i-1]==0)
			{
				outtextxy(290,120,"X");
				flag[i-1]=1;
				box[8]=1;
				move=move+1;
			}
			else if(flag[i-1]==1)
			{
				printf("Invalid move!");
				player_move();
			}
}