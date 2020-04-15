/* A simple 2D game of Tic Tac Toe */
/*Developed By : Aniket Kumar */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

void board();
void com_move();
void player_move();
void win_check();

int flag[9]={0,0,0,0,0,0,0,0,0};//to mark the filled boxes
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
	int win=0;// 1 is for Player and 2 is for Computer
	//checks the winning conditions

		if(box[0]==box[1]&&box[1]==box[2]&&box[1]==1)//first row
		{
			win=1;
		}
		if(box[0]==box[1]&&box[1]==box[2]&&box[1]==2)//first row
		{
			win=2;
		}
		if(box[0]==box[3]&&box[3]==box[6]&&box[3]==1)//first column
		{
			win=1;
		}
		if(box[0]==box[3]&&box[3]==box[6]&&box[3]==2)//first column
		{
			win=2;
		}
		if(box[3]==box[4]&&box[4]==box[5]&&box[4]==1)//second row
		{
			win=1;
		}
		if(box[3]==box[4]&&box[4]==box[5]&&box[4]==2)//second row
		{
			win=2;
		}
		if(box[6]==box[7]&&box[7]==box[8]&&box[7]==1)//third row
		{
			win=1;
		}
		if(box[6]==box[7]&&box[7]==box[8]&&box[7]==2)//third row
		{
			win=2;
		}
		if(box[1]==box[4]&&box[4]==box[7]&&box[4]==1)//second column
		{
			win=1;
		}
		if(box[1]==box[4]&&box[4]==box[7]&&box[4]==2)//second column
		{
			win=2;
		}
		if(box[2]==box[5]&&box[5]==box[8]&&box[5]==1)//third column
		{
			win=1;
		}
		if(box[2]==box[5]&&box[5]==box[8]&&box[5]==2)//third column
		{
			win=2;
		}
		if(box[2]==box[4]&&box[4]==box[6]&&box[4]==1)//right to left diagonal
		{
			win=1;
		}
		if(box[2]==box[4]&&box[4]==box[6]&&box[4]==2)//right to left diagonal
		{
			win=2;
		}
		if(box[0]==box[4]&&box[4]==box[8]&&box[4]==1)//left to right diagonal
		{
			win=1;
		}
		if(box[0]==box[4]&&box[4]==box[8]&&box[4]==2)//left to right diagonal
		{
			win=2;
		}

		//checks the win for Player
		if(win==1)
		{
			printf("Game Over\nPlayer Wins");
			getch();
			exit(0);
		}
		//checks the win for computer
		if(win==2)
		{
			printf("Game Over\nComputer Wins");
			getch();
			exit(0);
		}
		//for match draw
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

void com_move()//for moves of the computer
{
		int i;
		for(i=0;i<9;i++)
		{
			if(flag[i]==0&&i==0)//box 1
			{
				outtextxy(230,60,"O");
				flag[i]=1;
				box[0]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==1&&box[1]!=1)//box 2
			{
				outtextxy(260,60,"O");
				flag[i]=1;
				box[1]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==2&&box[2]!=1)//box 3
			{
				outtextxy(290,60,"O");
				flag[i]=1;
				box[2]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==3&&box[3]!=1)//box 4
			{
				outtextxy(230,90,"O");
				flag[i]=1;
				box[3]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==4&&box[4]!=1)//box 5
			{
				outtextxy(260,90,"O");
				flag[i]=1;
				box[4]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==5&&box[5]!=1)//box 6
			{
				outtextxy(290,90,"O");
				flag[i]=1;
				box[5]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==6&&box[6]!=1)//box 7
			{
				outtextxy(230,120,"O");
				flag[i]=1;
				box[6]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==7&&box[7]!=1)//box 8
			{
				outtextxy(260,120,"O");
				flag[i]=1;
				box[7]=2;
				move=move+1;
				break;
			}
			else if(flag[i]==0&&i==8&&box[8]!=1)//box 9
			{
				outtextxy(290,120,"O");
				flag[i]=1;
				box[8]=2;
				move=move+1;
				break;
			}
		}
}

void player_move()//for moves of the user
{
	int i;

	printf("\nEnter the box no : ");
	scanf("%d", &i);
			if(i==0)//for exitting the game
			{
				exit(0);
			}
			if(i==1&&flag[i-1]==0)//box 1
			{
				outtextxy(230,60,"X");
				flag[i-1]=1;
				box[0]=1;
				move=move+1;
			}
			else if(i==2&&flag[i-1]==0)//box 2
			{
				outtextxy(260,60,"X");
				flag[i-1]=1;
				box[1]=1;
				move=move+1;
			}
			else if(i==3&&flag[i-1]==0)//box 3
			{
				outtextxy(290,60,"X");
				flag[i-1]=1;
				box[2]=1;
				move=move+1;
			}
			else if(i==4&&flag[i-1]==0)//box 4
			{
				outtextxy(230,90,"X");
				flag[i-1]=1;
				box[3]=1;
				move=move+1;
			}
			else if(i==5&&flag[i-1]==0)//box 5
			{
				outtextxy(260,90,"X");
				flag[i-1]=1;
				box[4]=1;
				move=move+1;
			}
			else if(i==6&&flag[i-1]==0)//box 6
			{
				outtextxy(290,90,"X");
				flag[i-1]=1;
				box[5]=1;
				move=move+1;
			}
			else if(i==7&&flag[i-1]==0)//box 7
			{
				outtextxy(230,120,"X");
				flag[i-1]=1;
				box[6]=1;
				move=move+1;
			}
			else if(i==8&&flag[i-1]==0)//box 8
			{
				outtextxy(260,120,"X");
				flag[i-1]=1;
				box[7]=1;
				move=move+1;
			}
			else if(i==9&&flag[i-1]==0)//box 9
			{
				outtextxy(290,120,"X");
				flag[i-1]=1;
				box[8]=1;
				move=move+1;
			}
			//if entered box no is already filled
			else if(flag[i-1]==1)
			{
				printf("Invalid move!");
				player_move();
			}
}