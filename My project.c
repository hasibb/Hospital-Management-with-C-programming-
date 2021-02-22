#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
    int count;
     FILE *seat;
void o();
void login();
int main();
void npd();
void bh();
void psrln();
void lrp();
void adr();
void ldp();
void checkSeat()
{
    FILE *seat;
    char hasib[] = "test.txt";
    seat = fopen(hasib,"r");
    fscanf(seat,"%i",&count);
    fclose(seat);
}

void    info()
{
    count++;
    FILE *abc;
    abc = fopen("test.txt","w");
    fprintf(abc,"%d",count);
    fclose(abc);
}

void o()
{
     system("cls");
    int o,k;
    system ("color 2");
    printf("    \n\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("                          ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          ooooooooooooooooo                                      ooooooooooooo\n");
    printf("                          ooooooooooooooooo    WELLCOME TO HOSPITAL MANAGEMENT   ooooooooooooo\n");
    printf("                          ooooooooooooooooo                                      ooooooooooooo\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("                          ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("                          oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("                          ooooooooooooooooooooooooooooooooooooooooo   press 1 for login   oooo\n");



        scanf("%d",&o);

    switch(o)
        {
        case 1:

           login();

            break;
             default:
            printf("\nYOU ENTERED WRONG CHOICE..");
            printf("\nPRESS 1 TO TRY AGAIN");
            scanf("%d",&k);
            if(k==1){

        system("cls");

    switch(k)
        {
        case 1:
            login();

            break;
        }
            }
            else
            {
            system("cls");
            system("color 9");
            printf("\n\n\n\n\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||                                      ||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||         THANK YOU FOR TRYING         ||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||                                      ||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("               ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

                 exit(0);
            }

        }




getch();
        }


 void login()
 {

    system("cls");
     printf("::::presented by MD HASIBUL ISLAM::::\n");
     printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n");
{    printf("                                       :::::::::::::::::::::::::::::::::::::::::      ");
     printf("\n                                                HOSPITAL MANAGEMENT              \n ");
     printf("                                      :::::::::::::::::::::::::::::::::::::::::      \n");
    system("color 4");
    char username[15];
    char password[10];
    do
    {
        printf(" \n\n");
        printf("                >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("                         <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
        printf("                                  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("                                           Please Enter your username :");
        scanf("%s",&username);
        printf("\n                                           Please Enter your password :");
         scanf("%s",&password);
        printf("                                  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("                         <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
        printf("                >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>n");


        if(strcmp(username,"hasib")==0)
        {
            if(strcmp(password,"2349")==0)
            {
                printf("\n\n                                                       LODING ...                          press ANY KEY for next");
                printf("\a");
                break;
                   }
            else
            {
                system("cls");
                printf("\n             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
                printf("                   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
                printf("                        ||||||||||||||||||||!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|||||||||||||||||\n\n\n\n");
                printf("                                   ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
                printf("                                   :::::::::::::::                         ::::::::::::: \n");
                printf("                                   :::::::::::::::  PASSWORD IS INCORRECT  ::::::::::::: \n");
                printf("                                   :::::::::::::::                         ::::::::::::: \n");
                printf("                                   ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
                printf("\n\n\n                                                press ANY KEY for try again  \n ");

                getch();
                system("cls");
                if(strcmp(password,"2349")==0)
            {
                printf("\n ...welcome ...BOSS... ");
                printf("\a");
                break;
                   }

            }
        }
        else
        {
            system("cls");
                printf("\n             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
                printf("                   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
                printf("                        ||||||||||||||||||||!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|||||||||||||||||\n\n\n\n");
                printf("                                   ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
                printf("                                   :::::::::::::::                         ::::::::::::: \n");
                printf("                                   :::::::::::::::  USERNAME IS INCORRECT  ::::::::::::: \n");
                printf("                                   :::::::::::::::                         ::::::::::::: \n");
                printf("                                   ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
                printf("\n\n\n                                                press ANY KEY for try again  \n ");
                getch();
                system("cls");
        }
         }
    while(strcmp(username,"hasib")!=0 || strcmp(password,"2349")!=0);
}
 }
 COORD coord= {0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


 int main()

 {

    o();

   char id[20],pass[20],mno[11],fname[15],sname[15],age[3],disease[16],s[20],l[3],info[100];

    int i=0,c,retry=4,sr,e,o,ch,chab;

    FILE *sp,*fp,*ep;
//int k=0;
 //time_t t;
 //   time(&t);

 //npd();
    fflush(stdin);
    system("cls");
    printf("    \t                                       \t::::::::::::::::: ");
    printf("\n  \t                                       \t::  HOME PAGE  ::\n");
    printf("     mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm\n");
    printf("     .............................................................................................................");
    system("color 3");
    printf("\n\n\t1.Input New Patient Details.\n");
    printf("\n\t2.List Record of Patients.\n");
    printf("\n\t3.Delete Patient Records.\n");
    printf("\n\t5.Emergency Service.\n");
    printf("\n\t6.Available Doctor.\n");
    printf("\n\t7.Nurse Available.\n");
    printf("\n\t8.Refresh page.\n");
    printf("\n\t9.Log Out.\n");
    printf("     .............................................................................................................\n");
    printf("     mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm");
    printf("\n\n\tENTER YOUR CHOICE:");
        scanf("%d",&ch);


        switch(ch)
        {
        case 1:
            npd();
            break;

        case 2:
            lrp();
            break;
        case 3:
            dpr();
            break;
        case 5:
            ems();
            break;
        case 6:
            dp();
            break;
        case 7:
            np();
            break;
        case 8:
           bh();
            break;

        case 9:
            system("cls");
            system("color 6");
            printf("\n\n\n\n\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||                                      ||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||   THANK YOU FOR USING THIS SOFTWARE   ||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||                                      ||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");





            getch();
            exit(0);

        default:
            printf("\nYOU ENTERED WRONG CHOICE..");
            printf("\nPRESS 1 TO TRY AGAIN");
        scanf("%d",&chab);
        system("cls");

    switch(chab)
        {
        case 1:
            bh();

            break;
        }
        }




getch();
}




 void npd()
{

    system("cls");
    system("color 2");
    int pm,pa,pgm,cha,se;
    char pfn[20],pg[10],pgn[20];
    FILE *npsntd;
    npsntd = fopen("Input New Patient Details.txt","a");
     if(npsntd == NULL)
   {
       printf("File does not exist ");
     }
     else {
         printf("Follow the instruction  ");
    checkSeat();
    printf("\n                                          Input New Patient Details.");
     printf("\a\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
     printf("\n                                                                                            Serial Number :000%d",count+1);
     fprintf(npsntd,"                                                                                      Serial Number :000 %d\n",count+1);
    info();
    printf("\n\tPatient Name  :");
     scanf("%s",&pfn);
    fprintf(npsntd,"Name : %s \n",pfn);
    printf("\n\tPatient age  :");
    scanf("%d",&pa);
    fprintf(npsntd,"Age : %d\n",pa);

    printf("\n\tPatient Gender  :");
     scanf("%s",&pg);
    fprintf(npsntd,"Gender : %s\n",pg);
    printf("\n\tPatient mobile  :");
    scanf("%d",&pm);
    fprintf(npsntd,"Patient Mobile : %d\n",pm);
    printf("\n\tPatient Guardian name  :");
     scanf("%s",&pgn);
    fprintf(npsntd,"Gender Name: %s\n",pgn);
    printf("\n\tPatient Guardian mobile  :");
    scanf("%d",&pgm);
    fprintf(npsntd,"Gender Mobile: %d\n\n\n",pgm);
    printf("\a\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t* Information Save Successfully *                                                              BACK TO HOME\n");
    fclose(npsntd);

    getch();
     }

    printf("press 1 :\n");
        scanf("%d",&cha);

    switch(cha)
        {
        case 1:
            bh();

            break;
        }
    getch();

}
 void epr()
{
    exit(0);
}
void lrp()
{
     system("color 9");
    system("cls");
    char lrp;
     int chad;
     FILE *npsntd;
    npsntd = fopen("Input New Patient Details.txt","r");
     if(npsntd == NULL)
   {
       printf("File does not exist ");
     }
      else {

    printf("\n                                         List Record of Patients.");
     printf("\a\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
     while(!feof(npsntd))
     {
         lrp = fgetc(npsntd);
         printf("%c",lrp);
     }
      fclose(npsntd);
        printf("\n\n\tBACK TO HOME\n");
    printf("press 1 :\n");
        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            bh();

            break;
        }


    getch();
     }

}

void idr();

void idr()
{
     system("cls");
    system("color 9");
    int chad;
    char idr;
    FILE *aidr;
    aidr = fopen("INTERN DOCTORS PROFILE.txt","r");
     if(aidr == NULL)
   {
       printf("File does not exist ");
     }
     else {
     printf("  \n                                             INTERN DOCTORS PROFILE ");
     printf("\a\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");

     while(!feof(aidr))
     {
         idr = fgetc(aidr);
         printf("%c",idr);
     }

     printf("\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    fclose(aidr);
    printf("\n\n\t1.BACK TO DOCTORS PROFILE\n");
    printf("\n\n\t2.BACK TO HOME\n");

        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            dp();

            break;
             case 2:
            bh();

            break;
        }


    getch();
     }


}







void adr()
{
     system("cls");
    system("color 9");
    int dm,da,pgm,cha,se,chad;
    char dn[20],dg[10],pgn[20],mc[30];
    FILE *ad;
    ad = fopen("INTERN DOCTORS PROFILE.txt","a");
     if(ad == NULL)
   {
       printf("File does not exist ");
     }
     else {
    //checkSeat();
       FILE *seat;
    char hasib[] = "Serial.txt";
    seat = fopen(hasib,"r");
    fscanf(seat,"%i",&count);
    fclose(seat);
    printf("\n                                      >>>>INTERN DOCTORS PROFILE<<<\n  ");
    printf("\a  oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");

    printf("\n\tNew Doctor Name  :");
    scanf("%s",&dn);
    fprintf(ad,"Name : %s \n",dn);
    printf("\n\tDoctor Gender  :");
    scanf("%s",&dg);
    fprintf(ad,"Doctor Gender : %s\n",dg);
    printf("\n\tDoctor mobile  :");
    scanf("%d",&dm);
    fprintf(ad,"Doctor Mobile : %d\n",dm);
    printf("\n\tMedical College  :");
    scanf("%s",&mc);
    fprintf(ad,"Medical College: %s\n",mc);

     printf("\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("\n\t* Information Save Successfully *");
    fclose(ad);
    printf("\n\n\t1.BACK TO DOCTORS PROFILE\n");
    printf("\n\n\t2.BACK TO HOME\n");

        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            dp();
            break;
             case 2:
            bh();

            break;
        }
    getch();
     }


}
void ldp()
{

      system("color 9");
    system("cls");
    char adp;
     int chad;
     FILE *adpp;
    adpp = fopen("Available doctor.txt","r");
     if(adpp == NULL)
   {
       printf("File does not exist ");
     }
      else {

    printf("\n                                             >>>ALL DOCTOR PROFILES<<<");
     printf("\a\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
     printf("\a\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
     while(!feof(adpp))
     {
         adp = fgetc(adpp);
         printf("%c",adp);
     }
      fclose(adpp);
       printf("\n\n\t1.BACK TO DOCTORS PROFILE\n");
    printf("\n\n\t2.BACK TO HOME\n");

        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            dp();
            break;
             case 2:
            bh();

            break;
        }
    getch();
     }


}
void dp();
void dp()
{   system("cls");
    int chab,cha;
        printf("\n\n\t                                           DOCTORS PROFILE\n");

    printf ("\n\n      ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\n\t1.DOCTOR PROFILES.\n");
    printf("\n\t2.Edit INTERN DOCTOR.\n");
    printf("\n\t3.INTERN DOCTORS PROFILE.\n");
    printf("\n\t4.BACK TO HOME.\n");
    printf ("\n\n      :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::ENTER YOUR CHOIS:::\n");

        scanf("%d",&chab);

    switch(chab)
        {
        case 1:
            ldp();
        break;
        case 2:
            adr();
        break;
        case 3:
            idr();
        break;
        case 4:
            bh();

        break;
        }
    getch();

    exit(0);
}
void as();
void as()
{
    exit(0);
}

void dpr()
{

     system("cls");
    system("color 2");
    int pm,pa,pgm,cha,se;
    char pfn[20],pg[10],pgn[20];
    FILE *npsntd;
    npsntd = fopen("Input New Patient Details.txt","w");
     if(npsntd == NULL)
   {
       printf("File does not exist ");
     }
     else {
     printf("\a\n   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");

                printf("\n\n\n\n\n\n");
                printf("                                   ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
                printf("                                   ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
                printf("                                   :::::::::::::::                         ::::::::::::: \n");
                printf("                                   :::::::::::::::    FILE IS EMPTY NOW    ::::::::::::: \n");
                printf("                                   :::::::::::::::                         ::::::::::::: \n");
                printf("                                   ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
                printf("                                   ::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
                printf("\n\n\n\n\n\n");
                printf("\a                                                            PLEASE ENTER YOUR NAME SIR :");
     scanf("%s",&pfn);
    fprintf(npsntd,"           >>>>>>> :::::::::::::::::::Name (Who delete the last record): %s :::::::::::::::::::::<<<<<<<\n",pfn);

     printf("   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t* Information Delete Successfully *                                                              BACK TO HOME\n");
    fclose(npsntd);

     }

    printf("press 1 :\n");
        scanf("%d",&cha);

    switch(cha)
        {
        case 1:
            bh();

            break;
        }
    getch();
}


void bh()
{
   char id[20],pass[20],mno[11],fname[15],sname[15],age[3],disease[16],s[20],l[3],info[100];

    int i=0,c,retry=4,sr,e,o,ch,chab;

    FILE *sp,*fp,*ep;

    fflush(stdin);
    system("cls");
    printf("    \t                                       \t::::::::::::::::: ");
    printf("\n  \t                                       \t::  HOME PAGE  ::\n");
    printf("     mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm\n");
    printf("     .............................................................................................................");
    system("color 3");
    printf("\n\n\t1.Input New Patient Details.\n");
    printf("\n\t2.List Record of Patients.\n");
    printf("\n\t3.Delete Patient Records.\n");
    printf("\n\t5.Emergency Service.\n");
    printf("\n\t6.Available Doctor.\n");
    printf("\n\t7.Nurse Available.\n");
    printf("\n\t8.Refresh page.\n");
    printf("\n\t9.Log Out.\n");
    printf("     .............................................................................................................\n");
    printf("     mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm");
    printf("\n\n\tENTER YOUR CHOICE:");
        scanf("%d",&ch);


        switch(ch)
        {
        case 1:
            npd();
            break;

        case 2:
            lrp();
            break;
        case 3:
            dpr();
            break;
        case 5:
            ems();
            break;
        case 6:
            dp();
            break;
        case 7:
            np();
            break;
        case 8:
           bh();
            break;

        case 9:
            system("cls");
            system("color 6");
            printf("\n\n\n\n\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||                                      ||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||   THANK YOU FOR USING THIS SOFTWARE  ||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||                                      ||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("             ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

            getch();
            exit(0);

        default:
            printf("\nYOU ENTERED WRONG CHOICE..");
            printf("\nPRESS 1 TO TRY AGAIN");
        scanf("%d",&chab);
        system("cls");

    switch(chab)
        {
        case 1:
            bh();

            break;
        }
        }

getch();
}
void np();
void np()
{   system("cls");
    int chab,cha;
        printf("\n\n\t                                           NURSE PROFILE\n");

    printf ("\n\n      ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\n\t1.NURSE PROFILES.\n");
    printf("\n\t2.Edit INTERN NURSE.\n");
    printf("\n\t3.INTERN NURSE PROFILE.\n");
    printf("\n\t4.BACK TO HOME.\n");
    printf ("\n\n      :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::ENTER YOUR CHOIS:::\n");

        scanf("%d",&chab);

    switch(chab)
        {
        case 1:
            ndp();
        break;
        case 2:
            anr();
        break;
        case 3:
            inr();
        break;
        case 4:
            bh();

        break;
        }
    getch();

    exit(0);
}
void ndp();
void ndp()
{

      system("color 9");
    system("cls");
    char adp;
     int chad;
     FILE *adpp;
    adpp = fopen("Available Nurse.txt","r");
     if(adpp == NULL)
   {
       printf("File does not exist ");
     }
      else {

    printf("\n                                               >>>NURSES PROFILES<<<");
     printf("\a\n   =============================================================================================================\n");
     while(!feof(adpp))
     {
         adp = fgetc(adpp);
         printf("%c",adp);
     }
      fclose(adpp);
       printf("\n\n\t1.BACK TO NURSE PROFILE\n");
    printf("\n\n\t2.BACK TO HOME\n");

        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            np();
            break;
             case 2:
            bh();

            break;
        }
    getch();
     }


}

void anr();
void anr()
{
     system("cls");
    system("color 9");
    int dm,da,pgm,cha,se,chad;
    char dn[20],dg[10],pgn[20],mc[30];
    FILE *ad;
    ad = fopen("INTERN NURSE PROFILE.txt","a");
     if(ad == NULL)
   {
       printf("File does not exist ");
     }
     else {
    //checkSeat();
       FILE *seat;
    char hasib[] = "Serial.txt";
    seat = fopen(hasib,"r");
    fscanf(seat,"%i",&count);
    fclose(seat);
    printf("  \n                                           >>>>INTERN NURSE PROFILE<<<<");
    printf("\a\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");



    printf("\n\tNew Nurse Name  :");
    scanf("%s",&dn);
    fprintf(ad,"Nurse Name : %s \n",dn);
    printf("\n\tNurse Gender  :");
    scanf("%s",&dg);
    fprintf(ad,"Nurse Gender : %s\n",dg);
    printf("\n\tNurse mobile  :");
    scanf("%d",&dm);
    fprintf(ad,"Nurse Mobile : %d\n",dm);
    printf("\n\tNursing College  :");
    scanf("%s",&mc);
    fprintf(ad,"Nursing College: %s\n",mc);

     printf("\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("\t* Information Save Successfully *");
    fclose(ad);
    printf("\n\n\t1.BACK TO NURSE PROFILE\n");
    printf("\n\n\t2.BACK TO HOME\n");

        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            np();
            break;
             case 2:
            bh();

            break;
        }
    getch();
     }


}


void inr();

void inr()
{
     system("cls");
    system("color 9");
    int chad;
    char idr;
    FILE *aidr;
    aidr = fopen("INTERN NURSE PROFILE.txt","r");
     if(aidr == NULL)
   {
       printf("File does not exist ");
     }
     else {
     printf("  \n                                             INTERN NURSE PROFILE ");
     printf("\a\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");

     while(!feof(aidr))
     {
         idr = fgetc(aidr);
         printf("%c",idr);
     }

     printf("\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    fclose(aidr);
    printf("\n\n\t1.BACK TO NURSE PROFILE\n");
    printf("\n\n\t2.BACK TO HOME\n");

        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            np();

            break;
             case 2:
            bh();

            break;
        }


    getch();
     }


}

void ems();
void ems()
{   system("cls");
    int chab,cha;
        printf("\n\n\t                                           EMERGENCY SERVICES");

    printf ("\n\n      ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\n\t1.EMERGENCY AMBULANCE INFO.\n");
    printf("\n\t2.EMERGENCY DOCTOR.\n");
    printf("\n\t3.EMERGENCY NURSE.\n");
    printf("\n\t4.BACK TO HOME.\n");
    printf ("\n        :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::ENTER YOUR CHOIS:::\n");

        scanf("%d",&chab);

    switch(chab)
        {
        case 1:
            ema();
        break;
        case 2:
            ed();
        break;
        case 3:
            en();
        break;
        case 4:
            bh();

        break;
        }
    getch();

    exit(0);
}







void ema();
void ema()
{

    system("color 9");
    system("cls");
    char adp;
     int chad;
     FILE *adpp;
    adpp = fopen("EMERGENCY AMBULANCE INFO.txt","r");
     if(adpp == NULL)
   {
       printf("File does not exist ");
     }
      else {

    printf("\n                                              EMERGENCY AMBULANCE INFO");
    printf("\a\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\a\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
     while(!feof(adpp))
     {
         adp = fgetc(adpp);
         printf("%c",adp);
     }
      fclose(adpp);
    printf("\a\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\a\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
       printf("\n\t1.EMERGENCY SERVICES\n");
    printf("\n\n\t2.BACK TO HOME\n");

        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            ems();
            break;
             case 2:
            bh();

            break;
        }
    getch();
     }


}
void en();

void en()
{
     system("cls");
    system("color 9");
    int chad;
    char idr;
    FILE *aidr;
    aidr = fopen("EMERGENCY NURSE PROFILE.txt","r");
     if(aidr == NULL)
   {
       printf("File does not exist ");
     }
     else {
     printf("  \n                                             EMERGENCY NURSE PROFILE ");
     printf("\a\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");

     while(!feof(aidr))
     {
         idr = fgetc(aidr);
         printf("%c",idr);
     }

     printf("\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    fclose(aidr);
    printf("\n\n\t1.EMERGENCY SERVICES\n");
    printf("\n\n\t2.BACK TO HOME\n");

        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            ems();

            break;
             case 2:
            bh();

            break;
        }


    getch();
     }


}
void ed();

void ed()
{
     system("cls");
    system("color 9");
    int chad;
    char idr;
    FILE *aidr;
    aidr = fopen("EMERGENCY DOCTOR PROFILE.txt","r");
     if(aidr == NULL)
   {
       printf("File does not exist ");
     }
     else {
     printf("  \n                                             EMERGENCY DOCTOR PROFILE ");
     printf("\a\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");

     while(!feof(aidr))
     {
         idr = fgetc(aidr);
         printf("%c",idr);
     }

     printf("\n   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    fclose(aidr);
    printf("\n\n\t1.EMERGENCY SERVICES\n");
    printf("\n\n\t2.BACK TO HOME\n");

        scanf("%d",&chad);

    switch(chad)
        {
        case 1:
            ems();

            break;
             case 2:
            bh();

            break;
        }


    getch();
     }


}

