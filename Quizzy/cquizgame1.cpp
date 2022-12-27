#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\t\n");
     printf("\n\t\t");

     printf("\n\t\t\tTHIS IS THE TIME TO SHOW YOUR INTELLIGENCE ");
     printf("\n\t\t\t        WELCOME TO THE GAME ");
     printf("\n\t\t       ______________________________________________");
     printf("\n\t\t       ______________________________________________");
     
     printf("\n\t\t        Prove your intelligence to the world!!!!    ") ;
     printf("\n\t\t       ______________________________________________");
     printf("\n\t\t       ______________________________________________");
     printf("\n\t\t        > Press S to start the game");
     printf("\n\t\t        > Press V to view the highest score  ");
     printf("\n\t\t        > Press R to reset score");
     printf("\n\t\t        > press H for help            ");
     printf("\n\t\t        > press Q to quit             ");
     printf("\n\t\t  \n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
     gets(playername);

    system("cls");
    printf("\n -----------------  Welcome %s --------------------------",playername);
    printf("\n\n These are some tips which might help you while playing this game:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ~ This game is basically divided into two segments,Trail & Main ROUND");
    printf("\n ~ In trail round you will be asked a total of 3 questions to test your");
    printf("\n    intelligence.You will be eligible to play the game only if you give atleast 2");
    printf("\n    right answers, otherwise you will not proceed further to the Main Round.");
    printf("\n ~ The game will start with MAIN round. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded with some exciting cash prize amount");
    printf("\n    By this way you can test and prove your intelligence and win some cash prize!!!!!..........");
    printf("\n ~ You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n ~ You will be asked questions continuously, till right answers are given");
    printf("\n ~ No negative marking for wrong answers!");
    printf("\n\n\t  BUD! You can do it. All the very best!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhat is the name of India's national aquatic animal?");
		printf("\n\nA.River Dolphin\t\tB.Crocodile\n\nC.Katla fish\t\tD.Green Frog");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is River Dolphin");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nWhich national team is called Baggy Greens?");
		printf("\n\nA.NEWZEELAND\t\tB.AUSTRAILA\n\nC.ENGLAND\t\tD.SOUTHAFRICA");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.AUSTRALIA");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nAccording to the Constitution of India, which of the following is NOT one of the main organs of the Government??");
		printf("\n\nA.Legislature\t\tB.Bureaucracy\n\nC.Executive\t\tD.Judiciary");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Bureaucracy");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWhich Indian state is popularly known as 'God's Own Country'?");
		printf("\n\nA.Gujarat\t\tB.Kerala\n\nC.Madhya Pradesh\t\tD.Goa");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Kerala");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhen did India become a republic?");
        printf("\n\nA.1935\t\tB.1947\n\nC.1950\t\tD.1963");
        if (toupper(getch())=='C')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is C.1950");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nGrass appears green because:?");
		printf("\n\nA.It absorbs green light.\t\tB.It reflects green light back to your eyes.\n\nC.It reflects red light back to your eyes.\t\tD.None of the above");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.It reflects green light back to your eyes.");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nAnatomy is a branch of Science which deals with:");
		printf("\n\nA.Structure of animals and plants\t\tB.Functioning of body organs\n\nC. Animal behaviour\t\tD.Cells and tissues");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Structure of animals and plants");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nWhich are the twin cities?");
		printf("\n\nA.Delhi and Faridabad\t\tB.Mumbai and Pune\n\nC.Hyderabad and Secunderabad\t\tD.Bangalore and Mysore");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Hyderabad and Secunderabad");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nWho became the first Indian Director to shoot at NASA?");
		printf("\n\nA.Ashutosh Gawariker(Film-Swadesh)\t\tB.AK Hangal\n\nC.Thala� Ajith\t\tD.Arjun Sarja");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Ashutosh Gawariker(Film-Swadesh)");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nWhich is the nearest of the sun?");
		printf("\n\nA.Proxima Centaury\t\tB.Alpha Centaury\n\nC.Gamma centaury\t\tD.Beta Centaury");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Proxima Centaury");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich of the following metal can be cut down with the help of knife?");
		printf("\n\nA.Zinc\t\tB.Sodium\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Sodium");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat was the first manned mission of NASA?");
		printf("\n\nA.PQS-5\t\tB.PQS-5\n\nC.STS-1\t\tD.Bell X-1");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.STS-1");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\n In which part of the body digestion of protein begins?");
		printf("\n\nA.Pancreas\t\tB.Stomach\n\nC.Small Intestine\t\tD.Large intestine");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Stomach");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhich one of the following waves are used by the common TV remote control?");
		printf("\n\nA.Radio waves\t\tB.Lasers\n\nC.Infrasonic waves\t\tD.Ultrasonic waves");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Infrasonic waves");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nIn which place in India can we find cave temples of three faiths?");
		printf("\n\nA.Madurai\t\tB.Delhi\n\nC.Ellora\t\tD.Agra");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Ellora");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhich of the following country won Football world Cup maximum times?");
		printf("\n\nA.Germany\t\tB.Italy\n\nC.Brazil\t\tD.Argentina");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Brazil");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhat is the tallest breed of dog?");
		printf("\n\nA.Pit Bull\t\tB.Great Dane\n\nC.Irish Wolfhound\t\tD.Scottish Deerhound");
		if (toupper(getch())=='C')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Irish Wolfhound");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nWhich type of tree features in the Harry Potter franchise, famously concealing the tunnel that leads to the Shrieking Shack?");
		printf("\n\nA.Maple\t\tB.Alder\n\nC.Buckthrones\t\tD.Willow");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Willow");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWhich Cricketer has scored the most runs at the World Cup?");
		printf("\n\nA.Sachin Tendulkar \t\tB.Ricky Ponting\n\nC.Saurabh Gaungly\t\tD.Rohit Sharma");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Sachin Tendulkar");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nName the gland which controls blood pressure?");
		printf("\n\nA.Thalamus Gland\t\tB.Adrenal Gland\n\nC.Thyroid Gland\t\tD. Pancreas Gland");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Adrenal Gland");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhich of the following planets has the largest number of planets?");
		printf("\n\nA.Saturn\t\tB.Jupitar\n\nC.Neptune\t\tD.Mars");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Saturn");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nThe celebrated Novel 'The Godfather' was authored by");
		printf("\n\nA.John Milton\t\tB.Victor Hugo\n\nC.Mario Puzo\t\tD.Harold Robbins");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Mario Puzo");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWho built the first working, programmable, electro mechanical computer?");
		printf("\n\nA.Konrad Zuse\t\tB.Laszlo Jozsef Biro\n\nC. Brandenburg\t\tD.Karl Benz\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Konrad Zuse");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nIn which country would you find The Parliament of European Union?");
		printf("\n\nA.Belgium\tB.Holland\n\nC.England\tD.France\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\n1 Gigabyte (Gb) =");
		printf("\n\nA.1000 Mb\t\tB.1275 Mb\n\nC.1275 Mb\t\tD.1024 Mb");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.1024 Mb");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nWhich gas is mainly responsible for depletion of the Ozone layer?");
		printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWho was the first Indian woman to ever win an Olympic medal ?");
		printf("\n\nA.Sakshi\t\tB.Karnam Malleswari\n\nC.Geeta Phogat\t\tD.None of these");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Karnam Malleswari");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nThis person has been nominated six times and won two Oscars. But this is the performer�s first nomination in a different category. Who is the star?");
		printf("\n\nA.Al Pacino\t\tB.Charlize Theron\n\nC.Tom Hanks\t\tD.Kathy Bates");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Tom Hanks");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU WON SUCH A HUGE PRIZE !!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****THIS GAME IS DEVELOPED JUST FOR A PROJECT FOR COLLEGE********");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
