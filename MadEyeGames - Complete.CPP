#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<graphics.h>
class kbcques
{
	char ques[100];
	char ans[50];
	char opt[4][50];
	int asked[13];
	int j;
	public:
	kbcques(int i);
	void putques()
	{
		cp(ques,"CYAN");
	}
	void putopt(int c, char col[]);
	int checkans(int c)
	{
		int r;
		if(c==0)
		{
			r=3;
		}
		else if (strcmp(ans,opt[c-1])==0)
		{
			r=1;
		}
		else
		{
			r=2;
		}
		return r;
	}
	void putans()
	{
		cp(ans,"YELLOW");
	}
	void encyclo();
};
kbcques::kbcques(int i)
{
	reask:
	int v,w,k;
	if (i<=4)
	{
		w=0;
		v=10;
	}
	else if (i>4 && i<=9)
	{
		w=10;
		v=10;
	}
	else if (i>9 && i<=12)
	{
		w=20;
		v=5;
	}
	j=random(v)+w;
	for(k=0;k<i;k++)
	{
		if(j==asked[k])
		{
			goto reask;
		}
	}
	asked[i]=j;
	switch (j)
	{
		case 0:
			strcpy(ques,"Who is the singer of the song Why this Kolaveri Di?");
			strcpy(opt[0],"Dhanush");
			strcpy(opt[1],"Baan");
			strcpy(opt[2],"Rajnikant");
			strcpy(opt[3],"A R Rahman");
			strcpy(ans,"Dhanush");
			break;
		case 1:
			strcpy(ques,"Who is the author of Mahabharata?");
			strcpy(opt[0],"Valmiki");
			strcpy(opt[1],"Chetan Bhagat");
			strcpy(opt[2],"Ved Vyas");
			strcpy(opt[3],"Surdas");
			strcpy(ans,"Ved Vyas");
			break;
		case 2:
			strcpy(ques,"Who was the third Mughal emperor to rule India?");
			strcpy(opt[0],"Shah Jahan");
			strcpy(opt[1],"Jehangir");
			strcpy(opt[2],"Akbar");
			strcpy(opt[3],"Babur");
			strcpy(ans,"Akbar");
			break;
		case 3:
			strcpy(ques,"Who was the first Indian to win an Oscar award?");
			strcpy(opt[0],"Bhanu Athaiya");
			strcpy(opt[1],"A R Rahman");
			strcpy(opt[2],"Satyajit Ray");
			strcpy(opt[3],"Rabindranath Tagore");
			strcpy(ans,"Bhanu Athaiya");
			break;
		case 4:
			strcpy(ques,"Who painted the Monalisa?");
			strcpy(opt[0],"Leonardo Da Vinci");
			strcpy(opt[1],"Leonardo Di Caprio");
			strcpy(opt[2],"Pablo Picasso");
			strcpy(opt[3],"MF Hussain");
			strcpy(ans,"Leonardo Da Vinci");
			break;
		case 5:
			strcpy(ques,"Where did Sachin Tendulkar play his last Test Match?");
			strcpy(opt[0],"Brabourne Stadium, Mumbai");
			strcpy(opt[1],"Wankhede Stadium, Mumbai");
			strcpy(opt[2],"Eden Gardens, Kolkata");
			strcpy(opt[3],"Feroz Shah Kotla, Delhi");
			strcpy(ans,"Wankhede Stadium, Mumbai");
			break;
		case 6:
			strcpy(ques,"Which is the tallest manmade structure in the world?");
			strcpy(opt[0],"CN Tower, Toronto");
			strcpy(opt[1],"Antilla, Mumbai");
			strcpy(opt[2],"Burj Khalifa, Dubai");
			strcpy(opt[3],"Tokyo Tower, Tokyo");
			strcpy(ans,"Burj Khalifa, Dubai");
			break;
		case 7:
			strcpy(ques,"Which is the fastest land-animal?");
			strcpy(opt[0],"Human- Usian Bolt");
			strcpy(opt[1],"The Bengal Tiger");
			strcpy(opt[2],"Jaguar");
			strcpy(opt[3],"Cheetah");
			strcpy(ans,"Cheetah");
			break;
		case 8:
			strcpy(ques,"Who developed C++?");
			strcpy(opt[0],"Bjarne Stroustrup");
			strcpy(opt[1],"Charles Babbage");
			strcpy(opt[2],"Jennifer Lopez");
			strcpy(opt[3],"Lady Ada Lovelace");
			strcpy(ans,"Bjarne Stroustrup");
			break;
		case 9:
			strcpy(ques,"When is the UN Day Celebrated?");
			strcpy(opt[0],"24 October");
			strcpy(opt[1],"12 May");
			strcpy(opt[2],"20 March");
			strcpy(opt[3],"3 July");
			strcpy(ans,"24 October");
			break;
		case 10:
			strcpy(ques,"What was the name of the rover sent by NASA to Mars in 2011?");
			strcpy(opt[0],"Magik");
			strcpy(opt[1],"Curiosity");
			strcpy(opt[2],"Rover 11 M");
			strcpy(opt[3],"Mission Planet Red");
			strcpy(ans,"Curiosity");
			break;
		case 11:
			strcpy(ques,"Who is the poet of the poem 'Fire And Ice'?");
			strcpy(opt[0],"John Keats");
			strcpy(opt[1],"William Shakespeare");
			strcpy(opt[2],"Satyajit Ray");
			strcpy(opt[3],"Robert Lee Frost");
			strcpy(ans,"Robert Lee Frost");
			break;
		case 12:
			strcpy(ques,"Which is the leading fast food selling chain in the world?");
			strcpy(opt[0],"McDonalds");
			strcpy(opt[1],"KFC");
			strcpy(opt[2],"Pizza Hut");
			strcpy(opt[3],"Subway");
			strcpy(ans,"Subway");
			break;
		case 13:
			strcpy(ques,"Who is third in line to the throne of the United Kingdom?");
			strcpy(opt[0],"Prince Charles Philip Arthur George");
			strcpy(opt[1],"Prince George Alexander Louis");
			strcpy(opt[2],"Prince William Arthur Philip Louis");
			strcpy(opt[3],"Prince Henry Charles Albert David");
			strcpy(ans,"Prince George Alexander Louis");
			break;
		case 14:
			strcpy(ques,"After Jawaharlal Nehru, who is the longest serving prime minister of India?");
			strcpy(opt[0],"Manmohan Singh");
			strcpy(opt[1],"Indira Gandhi");
			strcpy(opt[2],"Rajiv Gandhi");
			strcpy(opt[3],"PV Narsimha Rao");
			strcpy(ans,"Indira Gandhi");
			break;
		case 15:
			strcpy(ques,"Who is the current Chief Justice of India?");
			strcpy(opt[0],"Justice P Sathasivam");
			strcpy(opt[1],"Justice KG Balakrishnan");
			strcpy(opt[2],"Justice Altamas Kabir");
			strcpy(opt[3],"Justice Markanday Katju");
			strcpy(ans,"Justice P Sathasivam");
			break;
		case 16:
			strcpy(ques,"Who was the last viceroy of British India?");
			strcpy(opt[0],"Albus Percival Wulfric Brian Dumbledore");
			strcpy(opt[1],"Earl of Ceylon ");
			strcpy(opt[2],"The Viscount Mountbatten of Burma");
			strcpy(opt[3],"Warren Hastings");
			strcpy(ans,"The Viscount Mountbatten of Burma");
			break;
		case 17:
			strcpy(ques,"Which organ in the human body is affected in diabetes?");
			strcpy(opt[0],"Liver");
			strcpy(opt[1],"Gall Bladder");
			strcpy(opt[2],"Pancreas");
			strcpy(opt[3],"Appendix");
			strcpy(ans,"Pancreas");
			break;
		case 18:
			strcpy(ques,"Which language has the highest number of speakers in the world?");
			strcpy(opt[0],"Mandarin");
			strcpy(opt[1],"French");
			strcpy(opt[2],"English");
			strcpy(opt[3],"Hindi");
			strcpy(ans,"Mandarin");
			break;	
		case 19:
			strcpy(ques,"With which company would you relate Eduardo Saverin?");
			strcpy(opt[0],"Google");
			strcpy(opt[1],"Facebook");
			strcpy(opt[2],"Microsoft");
			strcpy(opt[3],"Twitter");
			strcpy(ans,"Facebook");
			break;	
		case 20:
			strcpy(ques,"What was the first text message sent?");
			strcpy(opt[0],"Happy Birthday Jerry");
			strcpy(opt[1],"Merry Christmas");
			strcpy(opt[2],"Happy New Year");
			strcpy(opt[3],"Je T'aime Veronica");
			strcpy(ans,"Merry Christmas");
			break;
		case 21:
			strcpy(ques,"Who first proposed that Earth revolves around the Sun and not the opposite?");
			strcpy(opt[0],"Ptolemy");
			strcpy(opt[1],"Isaac Newton");
			strcpy(opt[2],"Copernicus");
			strcpy(opt[3],"Gautama Buddha");
			strcpy(ans,"Copernicus");
			break;		
		case 22:
			strcpy(ques,"Which country skipped the entire day of 30 December 2012 as it changed it's time zone by 24 hours?");
			strcpy(opt[0],"Japan");
			strcpy(opt[1],"Kiribati");
			strcpy(opt[2],"Tonga");
			strcpy(opt[3],"Samoa");
			strcpy(ans,"Samoa");
			break;
		case 23:
			strcpy(ques, "Which coutnry is located in both the continents of Europe and Africa?");
			strcpy(opt[0],"Algeria");
			strcpy(opt[1],"Morocco");
			strcpy(opt[2],"Spain");
			strcpy(opt[3],"Portugal");
			strcpy(ans,"Spain");
			break;
		case 24:
			strcpy(ques,"Who is regarded as 'the mother of freedom movement' in the United States of America?");
			strcpy(opt[0],"Rosa Parks");
			strcpy(opt[1],"Edgar Nixon");
			strcpy(opt[2],"Katherina Petrokhov");
			strcpy(opt[3],"Irene Morgan");
			strcpy(ans,"Rosa Parks");
			break;
	}
}
void kbcques::putopt(int c=0, char col[]="WHITE")
{
	int i;
	if (strcmp(col,"YELLOW")==0)
	{
		for(i=0; i<4; i++)
		{
			if(i==c-1)
			{
				cout<<"\n"<<i+1<<". ";
				cp(opt[i],"YELLOW");
			}
			else
			{
				cout<<"\n"<<i+1<<". "<<opt[i];
			}
		}
	}
	else if (strcmp(col,"GREEN")==0)
	{
		for(i=0; i<4; i++)
		{
			if(i==c-1)
			{
				cout<<"\n"<<i+1<<". ";
				cp(opt[i],"WHITE","GREEN");
			}
			else
			{
				cout<<"\n"<<i+1<<". "<<opt[i];
			}
		}
	}
	else if (strcmp(col,"RED")==0)
	{
		for(i=0; i<4; i++)
		{
			if(i==c-1)
			{
				cout<<"\n"<<i+1<<". ";
				cp(opt[i],"WHITE","RED");
			}
			else
			{
				cout<<"\n"<<i+1<<". "<<opt[i];
			}
		}
	}
	else if (strcmp(col,"WHITE")==0)
	{
		for(i=0; i<4; i++)
		{
			cout<<"\n"<<i+1<<". "<<opt[i];
			delay(300);
		}
	}
}
void kbcques::encyclo()
{
	switch (j)
	{
		case 0:
			cout<<"\n\nWhy This Kolaveri Di (English: Why This Murderous Rage, Girl?) is a Tamil song.\nIt is from the Tamil psychological thriller film, 3.\nWritten and sung by Dhanush, the song was composed by Anirudh Ravichander.\nThe song became the most searched YouTube video in India and an internet\nphenomenon across Asia.\nWithin a few weeks after it's release, YouTube honoured the video with\n\tRecently Most Popular Gold Medal award\n\tTrending silver medal award\nfor receiving a large number of hits in a short time.";
			break;
		case 1:
			cout<<"\n\nThe Mahabharata and the Ramayana are the two major Sanskrit epics.\nIts a narrative of the Kurukshetra War and the life of Kauravas and Pandavas.\nThe Mahabharata also contains philosophical and devotional material,\nsuch as a discussion of the four goals of life or purusharthas.";
			break;
		case 2:
			cout<<"\n\nAkbar the Great, was Mughal Emperor from 1556 until his death.\nHe was the third and greatest ruler of the Mughal Dynasty in India.\nAkbar succeeded his father, Humayun, under a regent, Bairam Khan.\nKhan helped the young emperor expand and consolidate Mughal domains in India.";
			break;
		case 3:
			cout<<"\n\nBhanu Athaiya is Indian cinema's most well-regarded costume designer.\nShe has worked in over 100 films, since 1950s with noted filmmakers.\nShe won the Academy Award for Best Costume Design for the 1982 film, Gandhi.\nThe award was shared with John Mollo.";
			break;
		case 4:
			cout<<"\n\nThe MonaLisa is a half-length portrait of a woman.\nIt has been acclaimed as the best known, the most visited and the most parodied work of art in the world.\nIt is a portrait of Lisa Gherardini, believed to have been painted between 1503 and 1506.\nIt was acquired by King Francis I of France and is now the property of the French Republic.\nIt is on permanent display at The Louvre museum in Paris since 1797.";
			break;
		case 5:
			cout<<"\n\nSachin Ramesh Tendulkar was born on 24 April 1973.\nHe is considered amongst the best batsman to have ever played cricket.\nHe made his debut against Pakistan at the age of 16 and retired against West Indies at the age of 40.\nHe has scored the maximum runs in ODIs and International Test Cricket.\nIn April 2012 he accepted the Rajya Sabha (Upper House) nomination proposed by the then president of India- Ms. Pratibha Patil.";
			break;
		case 6:
			cout<<"\n\nBurj Khalifa known as Burj Dubai prior to its inaugration is a skyscraper in\nDubai, UAE.\nIt's construction began on 21 September 2004 and was opened on 4 January 2010.\nIt was engineered by Skidmore, Owings and Merrill of Chicago with\n\tAdrian Smith as chief architect\n\tBill Baker as chief structural engineer.\nThe primary contractor was Samsung C&T of South Korea";
			break;
		case 7:
			cout<<"\n\nThe cheetah (Acinonyx jubatus) is a large feline belonging to Felidae family.\nIt inhabits most of Africa and parts of the Middle East.\nIt can run as fast as 112 to 120 km/h in short bursts covering distances up to 500 m.\nIt has the ability to accelerate from 0 to 100 km/h in three seconds.\nThis cat is also notable for modifications in the species' paws.\nIt is one of the few felids with semi-retractable claws.";
			break;
		case 8:
			cout<<"\n\nC++ is a programming language that is statically typed and compiled.\nIt is regarded as an intermediate-level language, as it comprises both\nhigh-level and low-level language features.\nIt was developed by Bjarne Stroustrup starting in 1979 at Bell Labs.\nC++ was originally named C with Classes, adding object oriented features and\nother enhancements to the C programming language.\nThe language was renamed C++ in 1983, as a pun involving the increment operator.";
			break;
		case 9:
			cout<<"\n\nIn 1947, the United Nations General Assembly declared 24 October, the anniversary of the Charter of the United Nations.\nIt 'shall be devoted to making known to the peoples of the world the aims and achievements of the United Nations and to gaining their support for' its work.\nIn 1971 the UNGA declared that United Nations Day shall be an international holiday and recommended that it should be observed as a public holiday by all member states.";
			break;
		case 10:
			cout<<"\n\nCuriosity is a car-sized robotic rover exploring Gale Crater on Mars.\nIt is a part of NASA's Mars Science Laboratory mission (MSL).\nCuriosity was launched from Cape Canaveral on November 26, 2011.\nIt successfully landed on Aeolis Palus, Gale Crater on Mars on August 6, 2012.\nCuriosity's design will be the basis for a planned Mars 2020 rover mission.\nIn December 2012, Curiosity's two-year mission was extended indefinitely.";
			break;		
		case 11:
			cout<<"\n\nThe poem was written in 1920 and it discusses the end of the world, likening theelemental force of fire with the emotion of desire, with ice and hate.\n\nHere it is:\n\n\t\tSome say the world will end in fire,\n\t\tSome say in ice.\n\t\tFrom what I've tasted of desire\n\t\tI hold with those who favor fire.\n\t\tBut if it had to perish twice,\n\t\tI think I know enough of hate\n\t\tTo say that for destruction ice\n\t\tIs also great\n\t\tAnd would suffice.\n";
			break;
		case 12:
			cout<<"\n\nSubway is an American fast food resteraunt franchise that primarily sells\nsubmarine sanwiches (subs) and salads.\nIt is owned and operated by Doctor's Associates, Inc.\nAs of 11 September 2013, it has 40,229 resteraunts in 102 countries.\nIt's main operations office is in Milford, Connecticut.\nIt's tagline is: 'Eat Fresh'.";
			break;
		case 13:
			cout<<"\n\nPrince George of Cambridge is the child of Prince William and Catherine\nand the grandchild of Prince Charles and Diana.\nG.A.Louis was born on 22 July 2013 at St. Mary's Hospital, Paddington-\nthe same hospital where his father and uncle (Prince Harry) were born";
			break;
		case 14:
			cout<<"\n\nIndira Priyadarshini Gandhi was the third Prime Minister of India.\nShe served from 1966 to 1977 and from 1980 until her assassination in 1984.\nShe is the 2nd longest-serving and the only lady to be the PM of India.\nShe was the only child of first Indian PM Jawaharlal Nehru.";
			break;		
		case 15:
			cout<<"\n\nThe Chief Justice of India is the highest-ranking judge in the Supreme Court of India, and thus holds the highest judicial position in India.\nChief Justice allocates all work to the other judges.\nThey are bound to refer the matter back to him or her in any case where they\nrequire it to be looked into by a bench of higher strength.\nP. Sathasivam has been the CJI since 19 July 2013.";
			break;
		case 16:
			cout<<"\n\nThe Viceroy of India was the head of the British administration in India.\nThe office was created in 1773, with the title of\nGovernor-General of the Presidency of Fort William.\nThe officer supervised other British East India Company officials in India.";
			break;
		case 17:
			cout<<"\n\nDiabetes is a group of metabolic diseases.\nIn diabetes a person has high blood sugar\n\teither because the pancreas does not produce enough insulin\n\tor because cells do not respond to the insulin that is produced.\nThis high blood sugar produces the classical symptoms of\n\tpolyuria (frequent urination)\n\tpolydipsia (increased thirst)\n\tpolyphagia (increased hunger).";
			break;
		case 18:
			cout<<"\n\nMandarin has 935 Million native speakers comprising of 14.1% population of the world.\nIt is mainly spoken in China, Taiwan and Singapore.\nIt is followed by\n\tSpanish- 387 Million speakers (5.85%)\n\tEnglish- 365 Million speakers (5.52%)\n\tHindi- 295 Million Speakers (4.46%)\n\tArabic- 280 Million Speakers (4.23%)\n\tPortuguese- 204 Million Speakers (3.08%)";
			break;
		case 19:
			cout<<"\n\nEduardo Luiz Saverin is a Brazilian internet entrepreneur and investor.\nHe is one of five co-founders of Facebook, along with\n\tMark Zuckerberg\n\tDustin Moskovitz\n\tChris Hughes\n\tAndrew McCollum.\nAs of 2012, he owns less than 5% of Facebook's shares and has a net worth of $2.2 billion, according to Forbes.\nAs co-founder, Saverin held the role of chief financial officer and business manager.";
			break;
		case 20:
			cout<<"\n\nText messaging is the act of sending an electronic message between two or more \nportable devices over a phone network.\nSMS was used for the first time on 3 December 1992 by Neil Papworth, in the UK.\nHe used a personal computer to send the text message 'Merry Christmas' via the\nVodafone network to the phone of Richard Jarvis.";
			break;
		case 21:
			cout<<"\n\nNicolaus Copernicus (19 February 1473 – 24 May 1543) was a Renaissance mathematician and astronomer.\nHe formulated a heliocentric model of the universe which placed the Sun, rather than the Earth, at the center.\nThe publication of Copernicus' book, 'De revolutionibus orbium coelestium', is considered a major event in the history of science.\nCopernicus had a doctorate in canon law and though without degrees, was a physician, classics scholar, translator, governor and economist.";
			break;
		case 22:
			cout<<"\n\nIn 2012 as 29 December ended, Samoa fast-forwarded to 31 December, missing out\non 30 December entirely.\nSamoa made the decision in a bid to improve ties with major trade partners\nAustralia and New Zealand.\nThe change comes 119 years after Samoa moved in the opposite direction.\nThen, it transferred to the same side of the International Date Line as the US.";
			break;
		case 23:
			cout<<"\n\nCeuta and Melilla are two exclaves of Spain in mainland Africa.\nThey lie along the Northern coast of Africa sharing border with Morocco.\nThey both have an autonamous status under the Spanish constitution.\nCeuta has an area of 18.5 sq-km whereas Melilla has an area of 12.3 sq-km.\nThey were both free ports before Spain joined European Union in 2008.";
			break;
		case 24:
			cout<<"\n\nRosa Parks was an African American Civil Rights activist.\nOn 1/12/1955 Parks refused to obey bus driver's order that she gives up her seat in the colored section to a white passenger after the white section was filled.\nHer act of defiance became important symbol of the modern Civil Rights Movement in the United States.\nShe became an international icon of resistance to racial segregation.";
			break;
	}
}
int ccnoofrec;
struct hs
{
	char name[20];
	int score;
};
void madeye(int x);
void credit();
void takename();
void kbc(char name[]="PLAYER");
void ccricket(char name[]="PLAYER");
void ccstartgame();
void ccinstructions(char name[]);
void ccplay(char name[]);
float cccheater(int check, int ret);
float ccrr(float, int);
void cccommentary(int x);
void cchighscore(char name[]=" ", int score=-10);
void ccshowhs();
void cp(char line[], char textcol[]="WHITE", char backcol[]="BLACK");
void kbcshowpos(int p);
void kbcstart();
void kbcinstructions(char name[]);
void kbcremark(int qno, char name[]);
void kbcplay(char name[]);
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
void kbcstart()
{
	clrscr();
	int gd=DETECT, gm, i;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	setfillstyle(7,1);
	delay(400);
	ellipse(300,225,0,360,175,175);
	floodfill(300,225,WHITE);
	setcolor(YELLOW);
	setfillstyle(1,YELLOW);
	for(i=0;i<=130;i++)
	{
		delay(10);
		circle(300,225,i);
	}
	setcolor(BLUE);
	for(i=0;i<20;i++)
	{
		line(200+(i/3),150+i,400-(i/3),150+i);
		ellipse(250+i,200+i,-90,90,50,50);
		line(250+i,250+i,300+i,350+i);
		line(210+(i/3),200+i,390-(i/3),200+i);
		delay(10);
	}
	setcolor(YELLOW);
	settextstyle(0,HORIZ_DIR,6);
	outtextxy(200,425,"KBC++");
	getch();
	closegraph();
}
void cp(char line[], char textcol[], char backcol[])
{
	if (strcmp(textcol,"LIGHTRED")==0)
	{
		textcolor(LIGHTRED);
	}
	else if(strcmp(textcol,"BLUE")==0)
	{
		textcolor(BLUE);
	}
	else if(strcmp(textcol,"GREEN")==0)
	{
		textcolor(GREEN);
	}
	else if(strcmp(textcol,"LIGHTCYAN")==0)
	{
		textcolor(LIGHTCYAN);
	}
	else if(strcmp(textcol,"RED")==0)
	{
		textcolor(RED);
	}
	else if(strcmp(textcol,"YELLOW")==0)
	{
		textcolor(YELLOW);
	}
	else if(strcmp(textcol,"CYAN")==0)
	{
		textcolor(CYAN);
	}
	else if (strcmp(textcol,"BLACK")==0)
	{
		textcolor(BLACK);
	}
	else if (strcmp(textcol,"LIGHTMAGENTA")==0)
	{
		textcolor(LIGHTMAGENTA);
	}
	if (strcmp(backcol,"LIGHTRED")==0)
	{
		textbackground(LIGHTRED);
	}
	else if(strcmp(backcol,"GREEN")==0)
	{
		textbackground(GREEN);
	}
	else if(strcmp(backcol,"LIGHTCYAN")==0)
	{
		textbackground(LIGHTCYAN);
	}
	else if(strcmp(backcol,"RED")==0)
	{
		textbackground(RED);
	}
	else if(strcmp(backcol,"YELLOW")==0)
	{
		textbackground(YELLOW);
	}
	cprintf(line);
	textcolor(WHITE);
	textbackground(BLACK);
}
void kbcinstructions(char name[])
{
	clrscr();
	cout<<"\n";
	cp("Instructions","LIGHTRED");
	cout<<"\n\nThe game consists of ";
	cp("13 questions","CYAN");
	cout<<" from a variety of fields.";
	getch();
	cout<<"\nEach question will have 4 options out of which ";
	cp("only 1 is correct.","CYAN");
	getch();
	cout<<"\nAnswer is to be input by pressing the respective ";
	cp("numeric key.","CYAN");
	getch();
	cout<<"\nYou have to answer the questions correctly to proceed in the game.";
	getch();
	cout<<"\nEach question carries a certain ";
	cp("prize money.","CYAN");
	getch();
	cout<<"\nWith each correct answer, the prize money for reward increases.";
	getch();
	cout<<"\n\nDuring play, if you wish to ";
	cp("QUIT","CYAN");
	cout<<" input number '";
	cp("0","CYAN");
	cout<<"' as answer.";
	getch();
	cout<<"\n\n";
	cp("DISCLAIMER: ","LIGHTRED");
	cout<<"This game is solely for entertainment purposes.\nThe programmer is not liable to pay the player any amount ";
	cp("WHATSOEVER.","CYAN");
	cout<<"\n\nPress Enter to Start Play "<<name<<"!";
	getch();
	kbcplay(name);
}
long double kbcprize(int i)
{
	i++;
	switch (i)
	{
		case 1:
		return(2500);
		case 2:
		return(5000);
		case 3:
		return(20000);
		case 4:
		return(40000);
		case 5:
		return(80000);
		case 6:
		return(160000);
		case 7:
		return(320000);
		case 8:
		return(640000);
		case 9:
		return(1250000);
		case 10:
		return(2500000);
		case 11:
		return(5000000);
		case 12:
		return(7500000);
		case 13:
		return(10000000);
	}
	return(0);
}
void kbcplay(char name[])
{
	int r=1, j, i, ch;
	long double won=0, x=0;
	randomize();
	for(i=0;i<13 && r==1; i++)
	{
		kbcques k(i);
		clrscr();
		cout<<"On the hot seat: ";
		cp(name,"YELLOW");
		cout<<"\nPrize money won: Rs. "<<won;
		cout<<"\nQuestions answered: "<<i;
		cout<<"\n\nFor Rs. "<<kbcprize(i)<<" on your computer screen:\n";
		cout<<"\n\nQ"<<i+1<<". ";
		k.putques();
		delay(1000);
		gotoxy(1,10);
		k.putopt();
		delay(200);
		gotoxy(1,16);
		cout<<"Your choice: ";
		cin>>ch;
		gotoxy(1,10);
		k.putopt(ch,"YELLOW");
		gotoxy(1,18);
		cp("Choice Locked!","YELLOW");
		r=k.checkans(ch);
		delay(1200+50*i);
		if(r==1)
		{
			gotoxy(1,10);
			k.putopt(ch,"GREEN");
			gotoxy(1,18);
			cp("RIGHT ANSWER ","GREEN");
			cp(name,"YELLOW");
			cout<<"!!";
			getch();
			clrscr();
			cout<<"\nCongratulations, ";
			cp(name,"CYAN");
			cout<<"!\n";
			k.putans();
			cout<<" is the right answer indeed!";
			k.encyclo();
			cout<<"\n\nYou have won Rs. "<<kbcprize(i)<<"\n\n";
			won=kbcprize(i);
			kbcremark(i, name);
			getch();
			kbcshowpos(i+1);
		}
		else if(r==2)
		{
			gotoxy(1,10);
			k.putopt(ch,"RED");
			gotoxy(1,18);
			cp("WRONG ANSWER ","LIGHTRED");
			cp(name,"YELLOW");
			cout<<"!!";
			getch();
			clrscr();
			cout<<"\nUnfortunately you made the wrong choice ";
			cp(name,"CYAN");
			cout<<". \nThe right answer to this question was: ";
			k.putans();
			k.encyclo();
			cout<<"\n\nUnfortunately you will have to leave us here.";
			if(i>0)
			{
				x=kbcprize(i-1);
			}
			else
			{
				x=0;
			}
			cout<<"\nYou won Rs. "<<x;
			cout<<"\n\nIt was nice playing with you!";
			getch();
			r=0;
		}
		else if(r==3)
		{
			gotoxy(1,18);
			cp("Okay so you've decided to QUIT ","CYAN");
			cp(name,"YELLOW");
			cout<<".";
			getch();
			clrscr();
			cout<<"\nUnfortunately you didn't know the answer to this one ";
			cp(name,"CYAN");
			cout<<" and you had to quit.";
			cout<<"\nThe right answer to this question was: ";
			k.putans();
			k.encyclo();
			cout<<"\n\nSo you will have to leave us here pal.";
			cout<<"\n\nIt was nice playing with you!";
			getch();
			kbcshowpos(i);
			r=0;
		}
	}
}
void kbcremark(int qno, char name[])
{
	if (qno<10)
	{
		int x=random(qno);
		switch (x)
		{
			case 0:
				cp("Nice!","RED");
				break;
			case 1:
				cp("Great play!","YELLOW");
				break;
			case 2:
				cout<<"Smart Answer ";
				cp(name,"CYAN");
				break;
			case 3:
				cout<<"Now that was a tricky one!";
				break;
			case 4:
				cp("Good Going. Keep it up!","CYAN");
				break;
			case 5:
				cout<<"You got through this one, watchout for the next ";
				cp(name,"RED");
				cout<<"!";
				break;
			case 6:
				cout<<"Wow you're really playing well ";
				cp(name,"GREEN");
				break;
			case 7:
				cp("You're on fire! Woohoo!","LIGHTRED");
				break;
			case 8:
				cp("Inching close to the jackpot!","GREEN");
				break;
		}
	}
	else if (qno==10)
	{
		cp("Excellent play! Just 2 steps away.","RED");
	}
	else if (qno==11)
	{
		cp("Fantastic! You are now going to play for the jackpot question! ","CYAN");
		cp("Celebrations are due ","CYAN");
		cp(name,"GREEN");
		cp("!!","CYAN");
	}
	else if (qno==12)
	{
		int i;
		cp("OH MY GOD!","LIGHTRED");
		cout<<"\nWE HAVE SEEN HISTORY HERE.\n";
		cp("CONGRATULATIONS ","CYAN");
		cp(name,"CYAN");
		cout<<"\nYou have become a crorepati by winning this game.\n";
		cp("You are a true Mastermind and KBC salutes you!!","GREEN");
	}
}
void kbcshowpos(int p)
{
	clrscr();
	int i,n;
	long double x;
	gotoxy(6,5);
	cp("Question","CYAN");
	gotoxy(40,5);
	cp("Prize Money","LIGHTRED");
	for(i=13;i>0;i--)
	{
		gotoxy(9,6+(13-i));
		cout<<i;
		gotoxy(41,6+(13-i));
		cout<<kbcprize(i-1);
	}
	n=p-1;
	for(i=0;i<p;i++)
	{
		gotoxy(25,18-i);
		cp("*","YELLOW");
		delay(100);
	}
	if(n==-1)
	{
		x=0;
	}
	else
	{
		x=kbcprize(n);
	}
	gotoxy(1,19);
	cout<<"\n\nPrize money won: Rs. ";
	cout<<x;
	getch();
}