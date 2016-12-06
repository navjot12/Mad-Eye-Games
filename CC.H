#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int ccnoofrec;
struct hs
{
	char name[20];
	int score;
};
void ccstartgame();
void ccinstructions(char name[]);
void ccplay(char name[]);
float cccheater(int check, int ret);
float ccrr(float, int);
void cccommentary(int x);
void cchighscore(char name[]=" ", int score=-10);
void ccshowhs();
void ccstartgame()
{
	clrscr();
	int i=0;
	for(i=0; i<80; i++)
	{
		textcolor(i);
		gotoxy(i,1);
		cprintf("*");
		textcolor(i);
		gotoxy(i,25);
		cprintf("*");
		delay(16);
	}
	for(i=80; i>0; i--)
	{
		textcolor(i);
		gotoxy(i,2);
		cprintf("*");
		textcolor(i);
		gotoxy(i,24);
		cprintf("*");
		delay(16);
	}
	for(i=20; i<=60; i++)
	{
		gotoxy(i,9);
		textcolor(i);
		cprintf("_");
		delay(25);
	}
	for(i=60; i>=20; i--)
	{
		gotoxy(i,12);
		textcolor(i);
		cprintf("_");
		delay(25);
	}
	for(i=15; i>=7; i--)
	{
		gotoxy(28,i);
		textcolor(i);
		cprintf("|");
		delay(25);
	}
	for(i=7; i<=15; i++)
	{
		gotoxy(52,i);
		textcolor(i);
		cprintf("|");
		delay(25);
	}
	gotoxy(36,11);
	cp("C","LIGHTRED");
	delay(70);
	cp("-","LIGHTRED");
	delay(70);
	cp("C","LIGHTRED");
	delay(70);
	cp("R","YELLOW");
	delay(70);
	cp("I","YELLOW");
	delay(70);
	cp("C","YELLOW");
	delay(70);
	cp("K","YELLOW");
	delay(70);
	cp("E","GREEN");
	delay(70);
	cp("T","GREEN");
	delay(70);
}
void ccinstructions(char name[])
{
	clrscr();
	char ch;
	cp("Instructions","LIGHTRED");
	cout<<"\n\nC-Cricket follows the rules of the classic game Odd-Eve.\nIt is a game of cricket on computer.";
	getch();
	cout<<"\n\n";
	cp("Objective","CYAN");
	cout<<" is to Score more runs than the computer.";
	getch();
	cout<<"\n\nJust like a cricket match, one player bats while the other bowls.\n";
	cp("The one who scores more runs is the winner.","CYAN");
	getch();
	cout<<"\n\nBy default, player 1 ie you ";
	cp(name,"YELLOW");
	cout<<", bat first.";
	getch();
	cout<<"\nScore runs until you get out. The computer then chases your set target.";
	getch();
	cout<<"\n";
	cp("Input","CYAN");
	cout<<" numbers between 1-6 by pressing the numeric keys on the keyboard.\nThe computer too chooses a number at ";
	cp("random.","CYAN");
	getch();
	cout<<"\n\n";
	cp("Important:","GREEN");
	cout<<"\nIf the number entered by you and the random number by the computer are ";
	cp("same","CYAN");
	cout<<"\nthen the player batting would be declared ";
	cp("out.","RED");
	getch();
	cout<<"\nOtherwise, the number put forward by the batter would be added to the score.";
	getch();
	cout<<"\nYou may even press '";
	cp("0","YELLOW");
	cout<<"' to declare your innings.";
	getch();
	cout<<"\nWhile batting ";
	cp("any invalid input","CYAN");
	cout<<" would declare the user out.";
	getch();
	cout<<"\n\nPsst..Rumor has it that there's a ";
	cp("cheatcode","YELLOW");
	cout<<" around!";
	cout<<"\nPress any key to play.\n";
	getch();
	ccplay(name);
}
void ccplay(char name[])
{
	ccm:
	clrscr();
	randomize();
	int i=0, r=1, um=0, cm=0, um1=0, uscore=0, cscore=0, j=7;
	float rra=0, rru, rrc;
	char ch;
	randomize();
	cp(name,"LIGHTRED");
	cp(" vs Computer","LIGHTRED");
	delay(500);
	cout<<"\nIt's ";
	cp(name,"YELLOW");
	cout<<"'s batting first. Please enter your moves.\n";
	gotoxy(3,6);
	cp(name,"CYAN");
	delay(500);
	gotoxy(15,6);
	cp("Computer","CYAN");
	delay(500);
	gotoxy(30,6);
	cp("Score","CYAN");
	delay(500);
	gotoxy(40,6);
	cp("Run Rate","CYAN");
	delay(500);
	gotoxy(55,6);
	cp("Commentary","CYAN");
	for (i=7; r ; i++, j++)
	{
		if (j==24)
		{
			j=7;
			clrscr();
			cp(name,"LIGHTRED");
			cp(" vs Computer","LIGHTRED");
			cout<<"\nIt's ";
			cp(name,"YELLOW");
			cout<<"'s batting first. Please enter your moves.\n";
			gotoxy(3,6);
			cp(name,"CYAN");
			gotoxy(15,6);
			cp("Computer","CYAN");
			gotoxy(30,6);
			cp("Score","CYAN");
			gotoxy(40,6);
			cp("Run Rate","CYAN");
			gotoxy(55,6);
			cp("Commentary","CYAN");
		}
		gotoxy(3,j);
		cin>>um;
		if (um==0)
		{
			gotoxy(30,j);
			uscore=uscore+um;
			cout<<uscore;
			gotoxy(40,j);
			rra=ccrr(uscore, (i-6));
			cout<<rra<<" rpo.";
			cout<<"\n\n\nYou have declared your innings at the score of ";
			textcolor(RED);
			cout<<uscore;
			textcolor(WHITE);
			rru=rra;
			r=0;
		}
		else if(um==1 || um==2 || um==3 || um==4 || um==5 || um==6)
		{
			gotoxy(15,j);
			cm=random(6)+1;
			cout<<cm;
			if (um==cm)
			{
				gotoxy(30,j);
				cout<<uscore;
				gotoxy(40,j);
				rra=ccrr(uscore, (i-6));
				cout<<rra<<" rpo.";
				gotoxy(55,j);
				cccommentary(9);
				cout<<"\n\nYou are OUT at the score of ";
				textcolor(RED);
				cout<<uscore;
				textcolor(WHITE);
				rru=rra;
				r=0;
			}
			else
			{
				gotoxy(30,j);
				uscore=uscore+um;
				cout<<uscore;
				gotoxy(40,j);
				rra=ccrr(uscore,(i-6));
				cout<<rra<<" rpo.";
				if(um<3)
				{
					gotoxy(55,j);
					cccommentary(9);
				}
				else if(um>2 && um<6)
				{
					gotoxy(55,j);
					cccommentary(7);
				}
				else if(um==6)
				{
					gotoxy(55,j);
					cccommentary(8);
				}
			}
		}
		else
		{
			gotoxy(30,j);
			cout<<uscore;
			gotoxy(40,j);
			rra=ccrr(uscore,(i-6));
			cout<<rra<<" rpo.";
			gotoxy(55,j);
			cccommentary(0);
			cout<<"\n\nInvalid Input. So you are OUT at the score of ";
			textcolor(RED);
			cout<<uscore;
			textcolor(WHITE);
			r=0;
		}
	}
	cchighscore(name,uscore);
	delay(500);
	cout<<"\n\n";
	cp("Processing","YELLOW");
	delay(500);
	cp(".","LIGHTRED");
	delay(500);
	cp(".","YELLOW");
	delay(500);
	cp(".","CYAN");
	delay(500);
	textcolor(GREEN);
	cout<<"\n\n";
	cp("Processing Complete!","GREEN");
	cout<<"\n\nSo the target for the Computer is ";
	textcolor(RED);
	cout<<++uscore;
	textcolor(WHITE);
	cout<<"\nPress any key to continue to second innings.";
	getch();
	clrscr();
	cp(name,"LIGHTRED");
	cp(" vs Computer","LIGHTRED");
	delay(500);
	cout<<"\nIt's ";
	cp("computer","YELLOW");
	cout<<"'s batting. Target: ";
	textcolor(RED);
	cout<<uscore;
	textcolor(WHITE);
	r=1;
	delay(500);
	cout<<"\nPlease enter your moves.\n\n";
	delay(500);
	gotoxy(3,6);
	cp("Computer","CYAN");
	delay(500);
	gotoxy(15,6);
	cp(name,"CYAN");
	delay(500);
	gotoxy(30,6);
	cp("Score","CYAN");
	delay(500);
	gotoxy(40,6);
	cp("Run Rate","CYAN");
	delay(500);
	gotoxy(55,6);
	cp("Commentary","CYAN");
	j=7;
	for (i=7; r ; i++, j++)
	{
		if (j==24)
		{
			j=7;
			clrscr();
			cp(name,"LIGHTRED");
			cp(" vs Computer","LIGHTRED");
			cout<<"\nIt's ";
			cp("computer","YELLOW");
			cout<<"'s batting. Target: ";
			textcolor(RED);
			cout<<uscore;
			textcolor(WHITE);
			r=1;
			cout<<"\nPlease enter your moves.\n\n";
			gotoxy(3,6);
			cp("Computer","CYAN");
			gotoxy(15,6);
			cp(name,"CYAN");
			gotoxy(30,6);
			cp("Score","CYAN");
			gotoxy(40,6);
			cp("Run Rate","CYAN");
			gotoxy(55,6);
			cp("Commentary","CYAN");
		}
		gotoxy(15,j);
		cin>>um;
		cm=random(6)+1;
		um1=um;
		um=cccheater(um, cm);
		gotoxy(3,j);
		cout<<cm;
		if (um==cm)
		{
			gotoxy(30,j);
			cout<<cscore;
			gotoxy(40,j);
			rra=ccrr(cscore,(i-6));
			cout<<rra<<" rpo.";
			gotoxy(55,j);
			if(um1==3713)
			{
				cccommentary(10);
			}
			else
			{
				cccommentary(9);
			}
			cout<<"\n\nComputer is OUT at the score of ";
			textcolor(RED);
			cout<<cscore;
			textcolor(WHITE);
			rrc=rra;
			r=0;
		}
		else
		{
			gotoxy(30,j);
			cscore=cscore+cm;
			cout<<cscore;
			gotoxy(40,j);
			rra=ccrr(cscore,(i-6));
			cout<<rra<<" rpo.";
			if (cm<3)
			{
				gotoxy(55,j);
				cccommentary(9);
			}
			else if(cm>2 && cm<6)
			{
				gotoxy(55,j);
				cccommentary(7);
			}
			else if(cm==6)
			{
				gotoxy(55,j);
				cccommentary(8);
			}
		}
		if (cscore>=uscore)
		{
			r=0;
			cout<<"\n\n";
			cp("Target Chased!","LIGHTRED");
		}
	}
	delay(750);
	cout<<"\n\n";
	cp("Processing","YELLOW");
	delay(500);
	cp(".","LIGHTRED");
	delay(500);
	cp(".","YELLOW");
	delay(500);
	cp(".","CYAN");
	delay(500);
	cout<<"\n";
	cp("Processing Complete!","GREEN");
	delay(500);
	cout<<"\nPress any key to see the result. ";
	getch();
	clrscr();
	if (cscore<uscore-1)
	{
		if (um1==3713)
		{
			cp("Congratulations man!","GREEN");
			cout<<"\n\nYou win by cheating. That's just so awesome.";
			cout<<"\n\nPlayer of the Match: ";
			delay(600);
			cp(name,"YELLOW");
			cout<<" for using unfair means to win the match.";
		}
		else
		{
			cp("Congratulations ","GREEN");
			cp(name,"GREEN");
			cp("!","GREEN");
			cout<<"\n\nYou win by ";
			textcolor(RED);
			cout<<uscore-cscore;
			textcolor(WHITE);
			cout<<" runs.";
			cout<<" Well played.";
			cout<<"\n\nPlayer of the Match: ";
			delay(600);
			cp(name,"YELLOW");
		}
	}
	else if ((uscore-1)==cscore)
	{
		cout<<"Oh what a thrilling match ";
		cp(name,"YELLOW");
		cout<<"!";
		cout<<"\n\n";
		cp("Match ends in a tie.","GREEN");
		if (um1==3713)
		{
			cout<<"\nYou drew by cheating. That's cool.";
			cout<<"\n\nPlayer of the Match: ";
			delay(600);
			cp(name,"YELLOW");
			cout<<" for using unfair means.";
		}
		else if(rru>rrc)
		{
			cout<<"\n\nMan of the Match: ";
			delay(600);
			cp(name,"YELLOW");
			cout<<" (on the basis of Run Rate)";
		}
		else if (rrc>rru)
		{
			cout<<"\n\nMan of the Match:";
			delay(600);
			cp(" Computer","YELLOW");
			cout<<" (on the basis of Run Rate)";
		}
		else
		{
			delay(600);
			cp(" Honours Shared.","YELLOW");
		}
	}
	else
	{
		cp("Computer wins!","RED");
		cout<<"\n\n";
		cp(name,"YELLOW");
		cout<<" loses by 1 wicket.";
		cout<<"\n\nPlayer of the match: ";
		delay(600);
		cprintf("Computer","YELLOW");
	}
	getch();
	ccshowhs();
	clrscr();
	cout<<"Hope you enjoyed our game!";
	ccd:
	cout<<"\n\nWould you like to play again (y/Y) or quit (n/N)?\n";
	cin>>ch;
	if (ch=='y' || ch=='Y')
	{
		goto ccm;
	}
	else if (ch=='n' || ch=='N')
	{
		cout<<"\n\nThanks for Playing!";
	}
	else
	{
		cout<<"\n";
		cp("Wrong Input.","RED");
		goto ccd;
	}
}
float cccheater(int check, int ret)
{
	if (check==3713)
	{
		return (ret);
	}
	else
	{
		return (check);
	}
}
float ccrr(float score, int nfballs)
{
	float rate;
	rate=score/nfballs;
	rate=rate*6;
	return(rate);
}
void cccommentary(int x)
{
	int i=0;
	if (x==7)	//batting
	{
		i=random(9);
	}
	else if (x==8)	//six
	{
		i=random(6)+9;
	}
	else if (x==9)	//bowling
	{
		i=random(9)+15;
	}
	else if(x==0)   //invalidinput
	{
		i=random(3)+24;
	}
	else if(x==10)	//cheatcode
	{
		i=27;
	}
	switch (i)
	{
		case 0:
			cout<<"Sweet sound off the bat.";
			break;
		case 1:
			cout<<"Beautiful shot!";
			break;
		case 2:
			cout<<"What a cover drive!";
			break;
		case 3:
			cout<<"Super Stroke.";
			break;
		case 4:
			cout<<"Wow. Improvised batting.";
			break;
		case 5:
			cout<<"Whatta Shot!";
			break;
		case 6:
			cout<<"Misfielding in the deep.";
			break;
		case 7:
			cout<<"Straight down the ground.";
			break;
		case 8:
			cout<<"Classy shot.";
			break;
		case 9:
			cout<<"KABOOM. SIX.";
			break;
		case 10:
			cout<<"That's gone all the way!";
			break;
		case 11:
			cout<<"Masterclass.";
			break;
		case 12:
			cout<<"Legen-waitforit-dary!";
			break;
		case 13:
			cout<<"Took a bird on it's way!";
			break;
		case 14:
			cout<<"Into the stands!";
			break;
		case 15:
			cout<<"Oh that delivery seamed.";
			break;
		case 16:
			cout<<"Woah. Reverse swing.";
			break;
		case 17:
			cout<<"Oh that was a surprise.";
			break;
		case 18:
			cout<<"Outside edge.";
			break;
		case 19:
			cout<<"That one spun square.";
			break;
		case 20:
			cout<<"Good fielding.";
			break;
		case 21:
			cout<<"The slower delivery.";
			break;
		case 22:
			cout<<"Good bouncer.";
			break;
		case 23:
			cout<<"Excellent Variation.";
			break;
		case 24:
			cout<<"HIT WICKET. Oops!";
			break;
		case 25:
			cout<<"Middle stump broken!";
			break;
		case 26:
			cout<<"SO SAD. Wrong decision.";
			break;
		case 27:
			cout<<"Miracle Delivery. Bummer.";
			break;
	}
}
void ccshowhs()
{
	clrscr();
	ifstream ob;
	hs h;
	cchighscore();
	ob.open("highscores.txt",ios::in||ios::nocreate||ios::noreplace);
	int i=1;
	if(!ob)
	{
		cout<<"\nOh no highscores yet!\nStart Playing to Create a new highscore now!";
		goto ccskip;
	}
	gotoxy(25,2);
	cp("  HIGHSCORE TABLE  ","BLUE","LIGHTCYAN");
	gotoxy(6,6);
	cp("RANK","LIGHTMAGENTA");
	gotoxy(22,6);
	cp("NAME","GREEN");
	gotoxy(50,6);
	cp("SCORE","LIGHTRED");
	while (ob.read((char*)&h,sizeof(h)) && i<=::ccnoofrec && i<=5)
	{
		gotoxy(7,8+2*i);
		cout<<i;
		gotoxy(22,8+2*i);
		cp(h.name,"YELLOW");
		gotoxy(51,8+2*i);
		cout<<h.score;
		i++;
	}
	ccskip:
	ob.close();
	getch();
}
void cchighscore(char name[], int score)
{
	ifstream obin;
	obin.open("highscores.txt",ios::in);
	hs records[5];
	int i=0, j=0, k=0, m=0;
	for(i=0;i<5;i++)
	{
		records[i].score=-1;
		strcpy(records[i].name,"Player");
	}
	i=0;
	while(obin.read((char*)&records[i],sizeof(hs)))
	{
		i++;
	}
	::ccnoofrec=i;
	if(i==0)
	{
		::ccnoofrec=1;
	}
	obin.close();
	for(i=4;i>=-1;i--)
	{
		if(score<records[i].score || i==-1)
		{
			k=i+1;
			for(j=4;j>k;j--)
			{
				m=j-1;
				strcpy(records[j].name,records[m].name);
				records[j].score=records[m].score;
			}
			strcpy(records[k].name,name);
			records[k].score=score;
			goto jobdone;
		}
	}
	jobdone:
	ofstream obout;
	obout.open("highscores.txt",ios::out);
	for(i=0;i<=4;i++)
	{
		if(records[i].score==-1)
		{
			goto ccnotwrite;
		}
		obout.write((char*)&records[i],sizeof(hs));
	}
	ccnotwrite:
	obout.close();
}