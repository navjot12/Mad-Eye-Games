#include<iostream.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
void cp(char line[], char textcol[]="WHITE", char backcol[]="BLACK");
void kbcshowpos(int p);
void kbcstart();
void kbcinstructions(char name[]);
void kbcremark(int qno, char name[]);
void kbcplay(char name[]);
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