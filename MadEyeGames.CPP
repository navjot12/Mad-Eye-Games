#include<kbc.h>
#include<cc.h>
void madeye(int x);
void credit();
void takename();
void kbc(char name[]="PLAYER");
void ccricket(char name[]="PLAYER");
char name[20];
void main()
{
	madeye(1);
	takename();
	mainstart:
	clrscr();
	int gd=DETECT, gm, i,n;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	setbkcolor(WHITE);
	setcolor(RED);
	delay(600);
	line(5,70,625,70);
	line(5,75,625,75);
	line(70,5,70,475);
	line(75,5,75,475);
	setcolor(BLUE);
	for(i=105;i<=476;i=i+30)
	{
		line(5,i,625,i);
		delay(100);
	}
	settextstyle(5,HORIZ_DIR,4);
	for(i=1;i<4;i++)
	{
		setcolor(LIGHTBLUE);
		outtextxy(80+i,65,"Welcome ");
		setcolor(MAGENTA);
		outtextxy(200+i,65,::name);
	}
	delay(400);
	setcolor(LIGHTBLUE);
	for(i=1;i<4;i++)
	{
		outtextxy(80+i,125,"Press- ");
	}
	delay(300);
	for(i=1;i<4;i++)
	{
		setcolor(CYAN);
		outtextxy(125+i,155,"1. to play");
		setcolor(LIGHTRED);
		outtextxy(275+i,155," KBC++");
	}
	delay(300);
	for(i=1;i<4;i++)
	{
		setcolor(CYAN);
		outtextxy(125+i,185,"2. to play");
		setcolor(LIGHTRED);
		outtextxy(275+i,185," C-Cricket");
	}
	delay(300);
	for(i=1;i<4;i++)
	{
		setcolor(CYAN);
		outtextxy(125+i,215,"3. to see");
		setcolor(LIGHTRED);
		outtextxy(270+i,215," Credits");
	}
	delay(300);
	for(i=1;i<4;i++)
	{
		setcolor(CYAN);
		outtextxy(125+i,245,"4. to");
		setcolor(LIGHTRED);
		outtextxy(200+i,245," Exit");
	}
	delay(300);
	setcolor(BROWN);
	for(i=1;i<4;i++)
	{
		outtextxy(80+i,335,"Your Choice: ");
	}
	gotoxy(34,23);
	cin>>n;
	if (n==1)
	{
		closegraph();
		kbc(::name);
		goto mainstart;
	}
	else if (n==2)
	{
		closegraph();
		ccricket(::name);
		goto mainstart;
	}
	else if (n==3)
	{
		closegraph();
		credit();
		goto mainstart;
	}
	else if (n==4)
	{
		closegraph();
		madeye(2);
	}
	else
	{
			setcolor(LIGHTBLUE);
			for(i=1;i<4;i++)
		{
			outtextxy(80+i,395,"Incorrect Input.");
			outtextxy(80+i,425,"Please re-enter your choice.");
		}
		getch();
		goto mainstart;
	}
	getch();
}
void kbc(char name[])
{
	clrscr();
	int i=0;
	char ch;
	kbcstart();
	kbca:
	textcolor(WHITE);
	clrscr();
	cout<<"Welcome ";
	cp(name,"CYAN");
	cout<<" to ";
	cp("Kaun Banega Crorepati Version C!","YELLOW","RED");
	cout<<"\nPress";
	delay(300);
	cout<<"\n\t";
	cp("I","GREEN");
	cout<<" for Instructions";
	delay(300);
	cout<<"\n\t";
	cp("P","GREEN");
	cout<<" to Play Game.";
	delay(300);
	cout<<"\n\t";
	cp("E","GREEN");
	cout<<" to Go Back to Main Menu.";
	delay(300);
	cout<<"\n\nYour Choice: ";
	cin>>ch;
	if (ch=='i' || ch=='I')
	{
		kbcinstructions(name);
	}
	else if (ch=='p' || ch=='P')
	{
		kbcplay(name);
	}
	else if(ch=='e' || ch=='E')
	{
		cout<<"\n\nHope to see you again!";
		getch();
		goto fend;
	}
	else
	{
		cout<<"\n";
		cp("Invalid Input. Press enter to re-enter your choice.","RED");
		getch();
		goto kbca;
	}
	for(i=0; i<80; i++)
	{
		textcolor(i+BLINK);
		gotoxy(i,1);
		cprintf("*");
		gotoxy(i,2);
		cprintf("*");
		gotoxy(i,25);
		cprintf("*");
		gotoxy(i,24);
		cprintf("*");
		delay(20);
	}
	for(i=80; i>0; i--)
	{
		textcolor(i+BLINK);
		gotoxy(i,3);
		cprintf("*");
		gotoxy(i,4);
		cprintf("*");
		gotoxy(i,23);
		cprintf("*");
		gotoxy(i,22);
		cprintf("*");
		delay(20);
	}
	for(i=0; i<80; i++)
	{
		textcolor(i+BLINK);
		gotoxy(i,5);
		cprintf("*");
		gotoxy(i,6);
		cprintf("*");
		gotoxy(i,21);
		cprintf("*");
		gotoxy(i,20);
		cprintf("*");
		delay(20);
	}
	for(i=80; i>0; i--)
	{
		textcolor(i+BLINK);
		gotoxy(i,7);
		cprintf("*");
		gotoxy(i,8);
		cprintf("*");
		gotoxy(i,19);
		cprintf("*");
		gotoxy(i,18);
		cprintf("*");
		delay(20);
	}
	for(i=0; i<80; i++)
	{
		textcolor(i+BLINK);
		gotoxy(i,9);
		cprintf("*");
		gotoxy(i,10);
		cprintf("*");
		gotoxy(i,17);
		cprintf("*");
		gotoxy(i,16);
		cprintf("*");
		delay(20);
	}
	for(i=80; i>0; i--)
	{
		textcolor(i+BLINK);
		gotoxy(i,11);
		cprintf("*");
		gotoxy(i,12);
		cprintf("*");
		gotoxy(i,15);
		cprintf("*");
		gotoxy(i,14);
		cprintf("*");
		delay(20);
	}
	for(i=0; i<80; i++)
	{
		gotoxy(i,13);
		delay(10);
		cout<<" ";
	}
	textcolor(WHITE);
	gotoxy(36,13);
	cout<<"GAME OVER";
	gotoxy(40,13);
	getch();
	clrscr();
	cout<<"\nHope you enjoyed playing our game!";
	kbcx:
	delay(250);
	gotoxy(1,3);
	cout<<"Would you like to play again (y/n)?\n";
	cin>>ch;
	if (ch=='y' || ch=='Y')
	{
		gotoxy(1,7);
		cp("Processing your request","RED");
		delay(700);
		gotoxy(1,7);
		cp("Processing your request","YELLOW");
		delay(700);
		gotoxy(1,7);
		cp("Processing your request","CYAN");
		delay(1000);
		gotoxy(1,7);
		cp("Great to see you play again ","GREEN");
		cp(name,"YELLOW");
		cp("!","GREEN");
		getch();
		goto kbca;
	}
	else if(ch=='n' || ch=='N')
	{
		clrscr();
		gotoxy(28,12);
		cout<<"Thanks for Playing! :)";
		getch();
	}
	else
	{
		cout<<"\nInvalid input ";
		cout<<name;
		cout<<".";
		getch();
		goto kbcx;
	}
	fend:
}
void ccricket(char name[])
{
	char ch;
	textcolor(WHITE);
	ccstartgame();
	gotoxy(32,20);
	cp("Lets Play ","WHITE");
	cp(name,"LIGHTCYAN");
	getch();
	cca:
	clrscr();
	gotoxy(29,9);
	cout<<"Hey ";
	cp(name,"YELLOW");
	cout<<".";
	cout<<" Press";
	gotoxy(29,11);
	delay(300);
	cp("I","CYAN");
	cout<<" for Instructions";
	delay(300);
	gotoxy(29,12);
	cp("P","CYAN");
	cout<<" to Play Game";
	delay(300);
	gotoxy(29,13);
	cp("E","CYAN");
	cout<<" key to Go Back to Main Menu";
	delay(300);
	gotoxy(29,14);
	cp("H","CYAN");
	cout<<" to see Highscores";
	gotoxy(29,16);
	cout<<"Your Choice: ";
	cin>>ch;
	if (ch=='i' || ch=='I')
	{
		ccinstructions(name);
	}
	else if (ch=='p' || ch=='P')
	{
		ccplay(name);
	}
	else if (ch=='h' || ch=='H')
	{
		ccshowhs();
		goto cca;
	}
	else if(ch=='e' || ch=='E')
	{
		gotoxy(29,18);
		cout<<"Hope to see you play again!";
		getch();
		goto ffend;
	}
	else
	{
		cout<<"\n";
		gotoxy(15,17);
		cp("Invalid Input.","RED");
		cout<<" Press enter to re-enter your choice.";
		getch();
		goto cca;
	}
	ffend:
}
void madeye(int x)
{
	clrscr();
	int gd=DETECT, gm, i, j;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	setcolor(LIGHTCYAN);
	settextstyle(9,HORIZ_DIR,3);
	delay(1000);
	if (x==1)
	{
		outtextxy(200,20,"Welcome To");
	}
	if (x==2)
	{
		outtextxy(145,20,"Thanks for Visiting!");
	}
	setcolor(RED);
	for(i=0;i<25;i++)
	{
		ellipse(310,280,40,140,200,150+i);
		ellipse(310,145,-120,-60,200,150+(i/2));
		delay(30);
	}
	for(i=0;i<=238;i++)
	{
		setcolor(YELLOW);
		for(j=0;j<5;j++)
		{
			ellipse(310,190,-209,-209+i,85-j,100-j);
			ellipse(310,198,90,90+(i*1.512605),18-(j/3),45-(j/3));
		}
		delay(10);
	}
	for(i=0;i<20;i++)
	{
		j=random(11)+1;
		setcolor(j);
		ellipse(310,190,-213,33,80,95);
		ellipse(310,280,68,112,200,149);
		ellipse(310,198,0,360,19,46);
		setfillstyle(10,j);
		floodfill(310,255,j);
		settextstyle(4,HORIZ_DIR,8);
		setcolor(j+1);
		outtextxy(50,310,"Mad Eye Games");
		delay(175);
	}
	setcolor(YELLOW);
	ellipse(310,190,-213,33,80,95);
	ellipse(310,280,68,112,200,149);
	ellipse(310,198,0,360,19,46);
	setfillstyle(10,YELLOW);
	floodfill(310,255,YELLOW);
	setcolor(GREEN);
	settextstyle(4,HORIZ_DIR,8);
	outtextxy(50,310,"Mad Eye Games");
	setcolor(LIGHTCYAN);
	settextstyle(2,HORIZ_DIR,6);
	outtextxy(200,430,"Amity's No.1 Gaming Portal");
	if (x==1)
	{
		getch();
		closegraph();
	}
	if (x==2)
	{
		delay(1500);
		closegraph();
		exit(1);
	}
}
void takename()
{
	int gd=DETECT, gm, i, j=0, n, k;
	char a, namex[20];
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	setbkcolor(WHITE);
	setcolor(GREEN);
	line(5,70,630,70);
	line(5,75,630,75);
	line(70,5,70,475);
	line(75,5,75,475);
	line(5,400,630,400);
	line(5,405,630,405);
	line(550,5,550,475);
	line(555,5,555,475);
	settextstyle(6,HORIZ_DIR,4);
	setfillstyle(1,WHITE);
	setcolor(BLUE);
	outtextxy(125,150,"What's your name?");
	for(i=0;i<20;i++)
	{
		a=getche();
		if(a==13)
		{
			goto end;
		}
		namex[i]=a;
		for(j=20;j>i;j--)
		{
			namex[j]=' ';
		}
		for(n=0;n<3;n++)
		{
			setcolor(RED);
			outtextxy(325+n,225,namex);
			setcolor(WHITE);
			for(k=0;k<100;k++)
			{
				line(556+k,76,556+k,399);
			}
		}
	}
	end:
	i=0;
	while(namex[i]!=' ')
	{
		::name[i]=namex[i];
		i++;
	}
	closegraph();
}
void credit()
{
	int gd=DETECT, gm, i;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	setbkcolor(WHITE);
	setcolor(RED);
	delay(400);
	line(5,70,625,70);
	line(5,75,625,75);
	line(70,5,70,475);
	line(75,5,75,475);
	setcolor(BLUE);
	for(i=105;i<=476;i=i+30)
	{
		line(5,i,625,i);
		delay(100);
	}
	settextstyle(5,HORIZ_DIR,4);
	for(i=1;i<4;i++)
	{
		setcolor(BLUE);
		outtextxy(80+i,65,"Programmer: ");
		setcolor(LIGHTRED);
		outtextxy(150+i,95,"Navjot Singh");
		setcolor(BLUE);
		outtextxy(80+i,155,"Roll Number: ");
		setcolor(CYAN);
		outtextxy(150+i,185,"9123181");
		setcolor(BLUE);
		outtextxy(80+i,245,"Technical Advisor: ");
		setcolor(MAGENTA);
		outtextxy(150+i,275,"Ms. Deepshikha Sethi");
		setcolor(BLUE);
		outtextxy(80+i,335,"For queries/suggestions, email us at: ");
		setcolor(BROWN);
		outtextxy(150+i,365,"singh.navjot12@gmail.com");
		setcolor(GREEN);
		outtextxy(80+i,425,"We will be happy to hear from you!");
	}
	getch();
	closegraph();
}