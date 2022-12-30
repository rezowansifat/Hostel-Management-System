#include<stdio.h>
#include<conio.h>


//FUNCTIONS
void add();
void list();
void edit();
void delete1();
void search();
void roomdetails();

//STRUCTURE DECLARATION
struct StudentDetails
{
	char name[20];
	char id[15];
	char department[10];
	char semester [10];
	char address[25];
	char phonenumber[15];
	char email[20];
	char roomnumber[10];
}s;


//MAIN FUNCTION
int main(){
    login();
    	int i=0;
    	char choice;

    printf("\t\t|----------------------------------------------------------------------------|\n");
    printf("\t\t| LOGGED IN SUCCESSFULLY......                                               |\n");
    printf("\t\t|----------------------------------------------------------------------------|\n");
	printf("\t\t||                                                                          ||\n");
	printf("\t\t||                                                                          ||\n");
	printf("\t\t||           ##########    ##########    ##       ##      #######           ||\n");
	printf("\t\t||               ##            ##        ##       ##     ##     ##          ||\n");
	printf("\t\t||               ##            ##        ##       ##    ##                  || \n");
	printf("\t\t||               ##            ##        ##       ##    ##                  ||\n");
	printf("\t\t||               ##            ##        ##       ##    ##                  ||\n");
	printf("\t\t||               ##            ##         ##     ##      ##     ##          ||\n");
	printf("\t\t||           ##########    ##########      #######        #######           ||\n");
	printf("\t\t||                                                                          ||\n");
	printf("\t\t|----------------------------------------------------------------------------|\n");
	printf("\t\t|----------------------------------------------------------------------------|\n\n");

 	printf("\t\t\t  *********************************************************\n");
	printf("\t\t\t  *                                                       *\n");
	printf("\t\t\t  *       -----------------------------------------       *\n");
	printf("\t\t\t  *        WELCOME TO IIUC HOSTEL MANAGEMENT SYSTEM       *\n");
	printf("\t\t\t  *       -----------------------------------------       *\n");
	printf("\t\t\t  *                                                       *\n");
	printf("\t\t\t  *                                                       *\n");
	printf("\t\t\t  *                        BY                             *\n");
	printf("\t\t\t  *                 CSE 1AM Autumn 2022                   *\n");
	printf("\t\t\t  *            		   C223005 			*\n");
	printf("\t\t\t  *********************************************************\n\n\n");

	printf(" \n Press any key to continue:");
    getch(); //Reads a single character from the keyboard , But it does not show.
    system("cls");//clear console screen

    	while (1)      // INFINITE LOOP
	{
		system("cls");
		printf("\t\t");
		 for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("\t\t    ******************************  |MAIN MENU|  ***************************** \n");
		printf("\t\t");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n\n");


		printf("\t\t\t\t    *Please enter your choice for menu*:");
		printf("\n\n");
		printf("\t\t\t          -----------------------------------------\n");
        printf("\t\t\t          Enter 1 -> Register A Student      \n");
        printf("\t\t\t          -----------------------------------------\n");

        printf("\t\t\t          -----------------------------------------\n");
        printf("\t\t\t          Enter 2 -> View Student Record     \n");
        printf("\t\t\t          -----------------------------------------\n");

        printf("\t\t\t          -----------------------------------------\n");
        printf("\t\t\t          Enter 3 -> Delete Student Record      \n");
        printf("\t\t\t          -----------------------------------------\n");

        printf("\t\t\t          -----------------------------------------\n");
        printf("\t\t\t          Enter 4 -> Search Student Record     \n");
        printf("\t\t\t          -----------------------------------------\n");

        printf("\t\t\t          -----------------------------------------\n");
        printf("\t\t\t          Enter 5 -> Edit Record      \n");
        printf("\t\t\t          -----------------------------------------\n");

        printf("\t\t\t          -----------------------------------------\n");
        printf("\t\t\t          Enter 6 -> Room Details      \n");
        printf("\t\t\t          -----------------------------------------\n");

        printf("\t\t\t          -----------------------------------------\n");
        printf("\t\t\t          Enter 7 -> Exit      \n");
        printf("\t\t\t          -----------------------------------------\n");

		choice=getche(); //conio.h. It reads a single character from the keyboard and displays immediately on output screen without waiting for enter key.
		choice=toupper(choice);
		switch(choice)           // SWITCH STATEMENT
		{
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				edit();break;
			case '6':
				roomdetails();break;	
			case '7':
				system("cls");
					printf("\n ");
                    printf("\t\t\t  *********************************************************\n");
                    printf("\t\t\t  *       -----------------------------------------       *\n");
                    printf("\t\t\t  *                       THANK YOU                       *\n");
                    printf("\t\t\t  *       -----------------------------------------       *\n");
                    printf("\t\t\t  *********************************************************\n\n\n");
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
}

//LOGIN FUNCTION
void login()
{

	int a=0,i=0;
    char uname[10],c;
    char pword[10];
    char user[10]="admin";
    char pass[10]="12345";
    do
{
	system("cls");


    printf("\t\t\t  *********************************************************\n");
    printf("\t\t\t  *                                                       *\n");
	printf("\t\t\t  *                                                       *\n");
	printf("\t\t\t  *       -----------------------------------------       *\n");
	printf("\t\t\t  *        LOGIN TO IIUC HOSTEL MANAGEMENT SYSTEM         *\n");
	printf("\t\t\t  *       -----------------------------------------       *\n");
	printf("\t\t\t  *                                                       *\n");
	printf("\t\t\t  *                                                       *\n");
	printf("\t\t\t  *********************************************************\n\n\n");

	printf("\t\t\t          -----------------------------------------        \n");
	printf("\t\t\t           ENTER USERNAME:- "); scanf("%s", &uname);

    printf("\t\t\t          -----------------------------------------        \n");
	printf("\t\t\t           ENTER PASSWORD:- ");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break; // 13 = Enter key
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	i=0;

		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0) break;
	else
	{
    printf("\n\n\n");
    printf("\t\t\t  *********************************************************\n");
	printf("\t\t\t  *       -----------------------------------------       *\n");
	printf("\t\t\t  *                  WRONG CREDENTIALS !!                 *\n");
	printf("\t\t\t  *              PRESS ANY KEY TO TRY AGAIN               *\n");
	printf("\t\t\t  *       -----------------------------------------       *\n");
	printf("\t\t\t  *********************************************************\n\n\n");

		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}

//REGISTRATION FUNCTION
void add()
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}

	while(1)
	{
		system("cls");
		printf("\n ");
        printf("\t\t\t  *********************************************************\n");
        printf("\t\t\t  *       -----------------------------------------       *\n");
        printf("\t\t\t  *                  Enter Student Details:               *\n");
        printf("\t\t\t  *       -----------------------------------------       *\n");
        printf("\t\t\t  *********************************************************\n\n\n");

		printf("\t\t\t          -----------------------------------------        \n");
        printf("\t\t\t           Enter Student Name:- "); scanf("\n%s",s.name);
        printf("\t\t\t          -----------------------------------------        \n");
        printf("\t\t\t           Enter Student ID:- "); scanf("%s",s.id);
        printf("\t\t\t          -----------------------------------------        \n");
        printf("\t\t\t           Enter Student department:- "); scanf("\n%s",s.department);
        printf("\t\t\t          -----------------------------------------        \n");
        printf("\t\t\t           Enter Semester:- "); scanf("%s",s.semester );
        printf("\t\t\t          -----------------------------------------        \n");
        printf("\t\t\t           Enter Student Address:- "); scanf("%s",s.address);
        printf("\t\t\t          -----------------------------------------        \n");
        printf("\t\t\t           Enter Phone Number:- "); scanf("%s",s.phonenumber);
        printf("\t\t\t          -----------------------------------------        \n");
        printf("\t\t\t           Enter Student Email:- "); scanf(" %s",s.email);
        printf("\t\t\t          -----------------------------------------        \n");
        printf("\t\t\t           Assign A Room:- "); scanf("%s",&s.roomnumber);
        printf("\t\t\t          -----------------------------------------        \n");


		fwrite(&s,sizeof(s),1,f);
		fflush(stdin); // Cleans the  input buffer
		printf("\n\n\t\t\t1 Student Is Successfully Iegistered In Hostel!!\n");
		printf("\n\t\t\tPress | ESC | key to exit,  any other key to add another student detail:");
		test=getche(); //conio.h capable of reading one character from any given keyboard
		if(test==27) // 27 = Esc key
			break;

	}
	fclose(f);
}

//TO SEE ALL DATA
void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
    printf("____________________________________________________________________________________________________________________________________________________________________\n");

    printf("NAME        |       ID      |       DEPARTMENT      |       SEMESTER        |       ADDRESS     |       PHONENUMBER     |       EMAIL       |       ROOM NUMBER     \n");

    printf("____________________________________________________________________________________________________________________________________________________________________\n");
	for(i=0;i<164;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n%s \t %s \t\t %s \t\t\t %s \t\t %s \t\t\t %s \t       %s      \t %s",s.name, s.id , s.department , s.semester ,s.address ,s.phonenumber,s.email,s.roomnumber);
	}
	printf("\n");
	for(i=0;i<164;i++)
		printf("-");

	fclose(f);
	getch();
}

//DELETE FUNCTION
void delete1()
{
	FILE *f,*t;
	int i=1;
	char studentid[20];

	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);

	system("cls");
	printf("\n ");
    printf("\t\t\t  *********************************************************\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *              Enter the ID of the student              *\n");
    printf("\t\t\t  *            to be deleted from the database            *\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *********************************************************\n\n\n");

	fflush(stdin);
	printf("\t\t\t          -----------------------------------------        \n");
    printf("\t\t\t           Enter Student ID:- "); scanf("%s",studentid);


	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.id,studentid)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{
		printf("\n\n\t\t\t Records of Student in this  ID is not found!!");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\n\t\t\tDetails of the student is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
}

//SEARCH FUNCTION
void search()
{
system("cls");
	FILE *f;
	char studentid[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("\n ");
    printf("\t\t\t  *********************************************************\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *              Enter the ID of the student              *\n");
    printf("\t\t\t  *               to search student details               *\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *********************************************************\n\n\n");

	printf("\t\t\t          -----------------------------------------        \n");
    printf("\t\t\t           Enter Student ID:- "); scanf("%s",studentid);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.id,studentid)==0){
			flag=0;
			printf("\n\t\t\t           Record Found\n\n");

            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Student Name:- %s\n",s.name);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Student ID:- %s\n",s.id);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Student department:- %s\n",s.department);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Current Semester:- %s\n",s.semester );
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Student Address:- %s\n",s.address);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Phone Number:- %s\n",s.phonenumber);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Student Email:- %s\n",s.email);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Room Number:- %s\n",s.roomnumber);
            printf("\t\t\t          -----------------------------------------        \n");
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("\n\t\t\tRequested Student could not be found!");
	}
	getch();
	fclose(f);
}


//DATA EDIT FUNCTION
void edit()
{
	FILE *f;
	int k=1;
	char studentid[40];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("\n ");
    printf("\t\t\t  *********************************************************\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *              Enter the ID of the student              *\n");
    printf("\t\t\t  *                    to edit details                    *\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *********************************************************\n\n\n");

	printf("\t\t\t          -----------------------------------------        \n");
    printf("\t\t\t           Enter Student ID:- "); scanf("%s",studentid);
	fflush(stdin);

    system("cls");
    printf("\n ");
    printf("\t\t\t  *********************************************************\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *                  Enter Student Details:               *\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *********************************************************\n\n\n");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.id,studentid)==0)
		{
			k=0;


            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Enter Student Name:- "); scanf("\n%s",s.name);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Enter Student ID:- "); scanf("%s",s.id);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Enter Student department:- "); scanf("\n%s",s.department);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Enter Semester:- "); scanf("%s",s.semester );
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Enter Student Address:- "); scanf("%s",s.address);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Enter Phone Number:- "); scanf("%s",s.phonenumber);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Enter Student Email:- "); scanf(" %s",s.email);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Assign A Room:- "); scanf("%s",&s.roomnumber);
            printf("\t\t\t          -----------------------------------------        \n");

			fseek(f,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\n\t\t\tTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	getch();
}
}

//ROOM DETAILS FUNCTION
void roomdetails()
{
system("cls");
	FILE *f;
	char roomno[20];
	int flag=1, sit=1, lim=5;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("\n ");
    printf("\t\t\t  *********************************************************\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *                 Enter the room number                 *\n");
    printf("\t\t\t  *             to search the room details                *\n");
    printf("\t\t\t  *       -----------------------------------------       *\n");
    printf("\t\t\t  *********************************************************\n\n\n");

	printf("\t\t\t          -----------------------------------------        \n");
    printf("\t\t\t           Enter room number:- "); scanf("%s",roomno);
    printf("\n\n");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomno)==0){
			flag=0;

            printf("\t\t\t          RECORD %d FOUND        \n", sit);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Student Name:- %s\n",s.name);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Student ID:- %s\n",s.id);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Student department:- %s\n",s.department);
            printf("\t\t\t          -----------------------------------------        \n");
            printf("\t\t\t           Phone Number:- %s\n",s.phonenumber);
            printf("\t\t\t          -----------------------------------------        \n\n\n");

			flag=0;
			sit++;
		}
	}

	printf("\t\t\t\t Number of Student | %d | & Available Seat | %d |",(sit-1),(lim-(sit-1)));
	if(flag==1){
		printf("\n\t\t\tRequested Student could not be found!");
	}
	getch();
	fclose(f);
}
