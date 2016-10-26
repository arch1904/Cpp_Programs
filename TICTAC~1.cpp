#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
char matrix[3][3];
char check(void);
void init_matrix(void);
int get_player_move(void);
int AI(int a);
void get_computer_move(void);
void computer_move(int a, int b);
void disp_matrix(void);
int AI_check(void);
void main()
{
    clrscr();
    char done;

    printf("This is the game of Tic Tac Toe.\n");
    printf("You will be playing against the computer.\n");

    done=' ';
    init_matrix();
    do {
	disp_matrix();
	int a=get_player_move();//for AI
	done=check();
	if (done!=' ')
	{
	    break;
	}
	int wldAI=AI_check();
	if(wldAI)
	{
	    int l=(wldAI%100)/10,n=wldAI%10;
	    computer_move(l,n);
	}
	if(wldAI==0)
	{
		get_computer_move();
	}
	done=check();
    } while (done==' ');
    if (done=='X')
    {
	printf("You won!\n");
    }
    else
    {
	printf("I won!!!!\n");
    }
    disp_matrix();

}

void init_matrix(void)
{
    int i,j;
    for (i=0; i<3; i++)
    {
	for (j=0; j<3; j++)
	{
	    matrix[i][j]=' ';
	}
    }
}

int get_player_move(void)
{
    int x,y;
    
    printf("Enter X,Y coordinates for your move: ");
    scanf("%d%*c%d", &x,&y);
    
    x--;
    y--;
    int a=x,b=y;
    
    if (matrix[x][y]!=' ')
    {
        printf("Invalid move, try again.\n");
        get_player_move();
    }
    else
    {
        matrix[x][y]='X';
    }
    return (a*10)+b;
}
int AI_check()
{
    int wldAI = 0;
    int i,a,b,j;
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            a=j+1;
            b=j-1;
            if (a>2)
            {
                a-=3;
            }
            if (b<0)
            {
                b+=3;
            }
            if((matrix[i][j]==matrix[i][a]&&matrix[i][j]!=' ')&&matrix[i][b]==' ')
            {
                if (matrix[i][j]=='O')
                {
                    wldAI=200+10*i+b;
                }
                else
                {
                    wldAI=100+10*i+b;
                }
            }
    
            else if((matrix[j][j]==matrix[a][a]&&matrix[j][j]!=' ')&&matrix[b][b]==' ')
            {
                if (matrix[j][j]=='O')
                {
                    wldAI=200+11*b;
                }
                else
                {
                    wldAI=100+11*b;
                }
            }
            else if((matrix[j][i]==matrix[a][i]&&matrix[j][i]!=' ')&&matrix[b][i]==' ')
            {
                if (matrix[j][i]=='O')
                {
                    wldAI=200+10*b+i;
                }
                else
                {
                    wldAI=100+10*b+i;
                }
            }
        }
    }
        if((matrix[0][2]==matrix[1][1]&&matrix[0][2]!=' ')&&matrix[2][0]==' ')
        {
            if (matrix[0][2]=='O')
            {
                wldAI=220;
            }
            else
            {
                wldAI=120;
            }
        }
    
        else if((matrix[1][1]==matrix[2][0]&&matrix[1][1]!=' ')&&matrix[0][2]==' ')
        {
            if (matrix[1][1]=='O')
            {
                wldAI=202;
            }
            else
            {
                wldAI=102;
            }
        }
    
        else if((matrix[2][0]==matrix[0][2]&&matrix[2][0]!=' ')&&matrix[1][1]==' ')
        {
            if (matrix[2][0]=='O')
            {
                wldAI=211;
            }
            else
            {
                wldAI=111;
            }
        }

    return wldAI;
}
int AI(int a)
{
    int x=a/10,y=a%10,m;
    if (x==y&&x==2)
    {
        if (matrix[1][1]==' ')
        {
            m=11;
        }
        else if (matrix[2][2]==' ')
        {
            m=22;
        }
        else if(matrix[1][2]==' ')
        {
            m=12;
        }
        else if (matrix[2][1]==' ')
        {
            m=21;
        }
    }
    return m;
}

void get_computer_move(void)
{
    int i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if(matrix[i][j]==' ') break;
        }
        if(matrix[i][j]==' ') break;
    }
    
    if(i*j==9)
    {
        printf("draw\n");
        exit(0);
    }
    else
    {
        matrix[i][j]='O';
    }
}

void disp_matrix(void)
{
    int t;
    
    for(t=0;t<3;t++)
    {
        printf(" %c | %c | %c ",matrix[t][0],matrix[t][1],matrix[t][2]);
        if(t!=2) printf("\n---|---|---\n");
    }
    printf("\n");
}

char check(void)
{
    int i;
    
    
    for (i=0; i<3; i++)
    {
        if(matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2])
            return matrix[i][0];
    }
    
    
    for (i=0; i<3; i++)
    {
        if (matrix[0][i]==matrix[1][i]&&matrix[0][i]==matrix[2][i])
        {
            return matrix[0][i];
        }
    }
    
    if (matrix[0][0]==matrix[1][1]&&matrix[1][1]==matrix[2][2])
    {
        return matrix[0][0];
    }
    
    if (matrix[0][2]==matrix[1][1]&&matrix[1][1]==matrix[2][0])
    {
        return matrix[0][2];
    }
    
    return ' ';
}
void computer_move(int a, int b)
{
    matrix[a][b]='O';
}