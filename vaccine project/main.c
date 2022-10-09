#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>

void gotoxy(int, int);
void adm();
void search();
void  citizenlist();
void searchbyphoneno(); //phone not unique
//onlu nid is unique in 10000 data
//void registration();
void pass();
void menu();
void menu2();
void searchbynid();
void searchbyupzila();
void searchbynad();
void searchby1stdose();
void searchbyupzvac();
void searchbybothdose();

void regi();
void manual();

//int nidver();
void vcard();
void vcertif();
void takevc();
void creditos();

struct citizen
{
    char name[20];
    char profession[15];
    char gender[8];
    char nid[20];
    char phoneno[15];
    char district[15];
    char upzila[15];
    char dose1[20];
    char dose2[20];
    char vname[20];
    char vcenter[35];
    char reg[10];
    int mday;
    int mmon;
    int myear;


};

void pass()
{


    char hj[15];
    char mm[15]="m";
    gotoxy(10, 17);
    printf("        Please Enter Password : \n  ");
    gotoxy(10, 18);
    scanf("%s", hj);
    if(strcmp(hj,mm)==0)
    {

        menu();
    }

    else
    {
        gotoxy(10, 18);
        printf("        Invalid Pass, Press any key to continue.");
        _getch();
        adm();

    }


}
void adm()
{

    system("cls");
    int choice;
    gotoxy(33, 2);
    printf("======================================================\n");
    gotoxy(33, 3);
    printf("*                     Welcome to                     *\n");
    gotoxy(33, 4);
    printf("*              Vaccine Registration system           *\n");
    gotoxy(33, 5);
    printf("*                                                    *\n");
    gotoxy(33, 6);

    printf("*                                                    *\n");
    gotoxy(33, 8);

    printf("======================================================\n");
    gotoxy(33, 9);
    // printf("*                                                    *\n");
    gotoxy(33, 10);
    printf("*                 1.Admin Panel                      *\n");
    gotoxy(33, 11);
    printf("*                 2.User Panel                       *\n");
    gotoxy(33, 12);
    printf("*                 3.Credits                          *\n");
    gotoxy(33, 13);
    printf("*                 4.Exit                             *\n");
    gotoxy(33, 14);
    printf("======================================================\n");
    gotoxy(33, 15);
    printf("Enter appropriate number to perform following task : ");
    scanf("%d", &choice);


    switch (choice)
    {


    case 1:


        pass();
        break;



    case 2:
        menu2();
        break;

    case 3:
        creditos();
        break;

    case 4:
        exit(1);
        break;

    default:
        gotoxy(33, 17);
        printf("          Invalid Choice, Press any key to continue.");
        _getch();
        adm();
    }
}
void menu()
{

    system("cls");
    int choice;
    gotoxy(33, 3);
    printf("===========================================================\n");
    gotoxy(33, 4);
    printf("*                 Welcome Admin                           *\n");
    gotoxy(33, 5);
    printf("*                                                         *\n");
    gotoxy(33, 6);

    printf("*                                                         *\n");
    gotoxy(33, 8);

    printf("===========================================================\n");
    gotoxy(33, 10);
    printf("*                                                         *\n");
    gotoxy(33, 11);
    printf("*                 1.View All Information                  *\n");
    gotoxy(33, 12);
    printf("*                 2.Give Vaccine                          *\n");
    gotoxy(33, 13);
    printf("*                 3.Search by Upazila(Registered)         *\n");
    gotoxy(33, 14);
    printf("*                 4.Search by Nid                         *\n");
    gotoxy(33, 15);
    printf("*                 5.Vaccinated 1st dose only              *\n");
    gotoxy(33, 16);
    printf("*                 6.Vaccinated Double dose                *\n");
    gotoxy(33, 17);
    printf("*                 7.Search by Upazila(Full Vaccinated)    *\n");
    gotoxy(33, 18);
    printf("*                 8.Go back                               *\n");

    gotoxy(33, 19);
    printf("===========================================================\n");
    gotoxy(33, 20);

    gotoxy(33, 21);
    printf("Enter appropriate number to perform following task : ");
    scanf("%d", &choice);
    fflush(stdin);
    switch (choice)
    {


    case 1:
        citizenlist();
        break;

    case 2:
        takevc();
        //search();
        break;

    case 3:
        searchbyupzila();
        break;

    case 4:
        searchbynad();
        break;

    case 5:
        searchby1stdose();
        break;

    case 6:
        searchbybothdose();
        break;

    case 7:
        searchbyupzvac();
        break;

    case 8:
        adm();
        break;

    default:
        gotoxy(33, 23);
        printf("          Invalid Choice, Press any key to continue.");
        _getch();
        menu();
    }
}
void menu2()
{

    system("cls");
    int choice;
    gotoxy(33, 3);
    printf("======================================================\n");
    gotoxy(33, 4);
    printf("*                   Welcome User                     *\n");
    gotoxy(33, 5);
    printf("*                                                    *\n");
    gotoxy(33, 6);

    printf("*                                                    *\n");
    gotoxy(33, 8);

    printf("======================================================\n");
    gotoxy(33, 10);
    printf("*                                                    *\n");
    gotoxy(33, 11);
    printf("*                 1.Registration                     *\n");
    gotoxy(33, 12);
    printf("*                 2.View Vaccine CARD                *\n");
    gotoxy(33, 13);
    printf("*                 3.View Vaccine Certificate         *\n");
    gotoxy(33, 14);
    printf("*                 4.User Manual                      *\n");
    gotoxy(33, 15);
    printf("*                 5.Go back                          *\n");
    gotoxy(33, 16);
    printf("======================================================\n");
    gotoxy(33, 17);
    printf("Enter appropriate number to perform following task : ");
    scanf("%d", &choice);

    switch (choice)
    {


    case 1:

        regi();
        break;

    case 2:
        vcard();
        break;

    case 3:
        vcertif();
        break;

    case 4:
        manual();
        break;

    case 5:
        adm();
        break;


    default:
        gotoxy(33, 17);
        printf("          Invalid Choice, Press any key to continue.");
        _getch();
        adm();
    }
}

int day = 0, month = 0, year = 0;

int main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    year = tm.tm_year + 1900, month = tm.tm_mon + 1, day = tm.tm_mday;

    adm();

    return 0;
}

void regi()
{

    printf("\n\n");

    char nd[12];
    //gotoxy(10, 18);
    printf(" \t\t\t\t      Please enter your NID no: ");
    //gotoxy(38, 21);
    fflush(stdin);
    gets(nd);
    char dobb[15];
    //gotoxy(10, 22);
    fflush(stdin);
    printf("\n\n\t\t\t\t      Please enter your Birth date: ");

    //VERIFY BIRTH DATE

    //gotoxy(33, 23);

    gets(dobb);
    system("cls");
    printf("\n\n\n\t\t\t\t\t      CAPTCHA VERIFY : \n\n");

    srand(time(0));


    int random = rand();

    int scanRandom;
    printf("\t\t\t\t\t\t ___________\n");
    printf("\t\t\t\t\t\t|    %d  |\n",random);
    printf("\t\t\t\t\t\t|           |\n");
    printf("\t\t\t\t\t\t|___________|\n");


    while(1)
    {
        printf("\n\n\t\t\t\t\t Enter  CAPTCHA: ");


        scanf("%d",&scanRandom);
        if(random==scanRandom)
        {
            break;
        }
        else
            printf("\n\nYou have entered the wrong CAPTCHA, please try again!\n\n");

    }


    printf("\n\n\t\t\t\t\t Please wait... your NID is verifying.\n");

    printf(" \t\t\t\t\t Press any key after two seconds .\n");
    getch();


    struct citizen ctz;
    //char cp[12]="8417513848";
    FILE *fp;
    fp = fopen("record.bin", "rb+");


    if (fp == NULL)
    {
        gotoxy(10, 7);
        printf("No data found,Please Add Citizen information.");
        gotoxy(10, 10);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    int hyp=0;
    char hk[5];
    hk[0]='O';
    hk[1]='K';
    while ( fread(&ctz, sizeof(ctz), 1, fp)==1)
    {

        if(strcmp(nd,ctz.nid)==0  )

        {
            hyp=1;

            if(ctz.reg[0] == 'O')
            {

                // puts(ctz.reg);
                printf("\n\t\t\t\t\t\tAlready Registered.\n");
                break;
            }


            //puts(ctz.name);

            printf("\n\n\n\t\t\t\t\t\tYOUR details: \n");
            printf("\t\t\t\t\t\tName:");
            puts(ctz.name);
            printf("\t\t\t\t\t\tProfession:");
            puts(ctz.profession);
            printf("\t\t\t\t\t\tGender:");
            puts(ctz.gender);
            printf("\t\t\t\t\t\tUpazila:");
            puts(ctz.upzila);
            printf("\t\t\t\t\t\tPhoneno:");
            puts(ctz.phoneno);
            printf("\t\t\t\t\t\tNid:");
            puts(ctz.nid);
            //puts(ctz.reg);
            // gotoxy(10, 27);




            printf("\n\n\t\t\t\t\t\tCONFIRM TO REGISTER ?\n");
            printf("\t\t\t\t\t\t1.YES\n \t\t\t\t\t\t2.No\n");
            int fr;
            scanf("%d",&fr);
            if(fr==1)
            {

                system("cls");
                printf("\n\n\n\n\n ");
                //gotoxy(33,10);
                printf("\t\t\t\t\tPlease choose your district from below: ");
                printf("\n\n ");

                // gotoxy(23,12);
                printf("\t\t\t\t\t\t\t1.Chittagong  \n");
                printf("\t\t\t\t\t\t\t2.Dhaka  \n");
                printf("\t\t\t\t\t\t\t3.Rajshahi  \n");
                printf("\t\t\t\t\t\t\t4.Sylhet \n");
                printf("\t\t\t\t\t\t\t5.Jessore  \n");
                printf("\t\t\t\t\t\t\t6.Dinajpur  \n");
                printf("\t\t\t\t\t\t\t7.Mymensingh  \n");
                printf("\t\t\t\t\t\t\t8.Comilla  \n");
                printf("\t\t\t\t\t\t\t9.Barisal  \n");
                printf("\t\t\t\t\t\t\t10.Faridpur \n");

                gotoxy(36,26);
                int gkk=0,ukk=0,vck=0;
                scanf("%d",&gkk);
                system("cls");
                char bh[15];
                char uz[15];
                char vcen[35];
                switch(gkk)
                {


                case 1:
                    strcpy(bh,"Chittagong");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Hathazari \n");
                    printf("\t\t\t\t\t\t\t2.Patiya \n");
                    printf("\t\t\t\t\t\t\t3.Raozan \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Hathazari");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Hathazari Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Hathazari Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Hathazari govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Hathazari Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Hathazari Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Hathazari govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Patiya");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Patiya Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Patiya Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Patiya govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Patiya Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Patiya Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Patiya govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Raozan");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Raozan Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Raozan Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Raozan govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Raozan Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Raozan Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Raozan govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;




                case 2:
                    strcpy(bh,"Dhaka");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Dhamrai \n");
                    printf("\t\t\t\t\t\t\t2.Dohar \n");
                    printf("\t\t\t\t\t\t\t3.Savar \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Dhamrai");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Dhamrai Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Dhamrai Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Dhamrai govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Dhamrai Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Dhamrai Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Dhamrai govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Dohar");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Dohar Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Dohar Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Dohar govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Dohar Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Dohar Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Dohar govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Savar");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Savar Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Savar Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Savar govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Savar Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Savar Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Savar govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;




                case 3:
                    strcpy(bh,"Rajshahi");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Charghat \n");
                    printf("\t\t\t\t\t\t\t2.Durgapur \n");
                    printf("\t\t\t\t\t\t\t3.Mohanpur \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Charghat");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Charghat Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Charghat Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Charghat govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Charghat Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Charghat Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Charghat govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Durgapur");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Durgapur Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Durgapur Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Durgapur govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Durgapur Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Durgapur Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Durgapur govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Mohanpur");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Mohanpur Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Mohanpur Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Mohanpur govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Mohanpur Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Mohanpur Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Mohanpur govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;




                case 4:
                    strcpy(bh,"Sylhet");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Fenchuganj \n");
                    printf("\t\t\t\t\t\t\t2.Golapganj \n");
                    printf("\t\t\t\t\t\t\t3.Zakiganj \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Fenchuganj");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Fenchuganj Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Fenchuganj Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Fenchuganj govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Fenchuganj Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Fenchuganj Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Fenchuganj govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Golapganj");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Golapganj Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Golapganj Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Golapganj govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Golapganj Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Golapganj Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Golapganj govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Zakiganj");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Zakiganj Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Zakiganj Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Zakiganj govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Zakiganj Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Zakiganj Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Zakiganj govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;




                case 5:
                    strcpy(bh,"Jessore");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Sharsha \n");
                    printf("\t\t\t\t\t\t\t2.Bagherpara \n");
                    printf("\t\t\t\t\t\t\t3.Manirampur \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Sharsha");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Sharsha Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Sharsha Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Sharsha govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Sharsha Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Sharsha Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Sharsha govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Bagherpara");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Bagherpara Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Bagherpara Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Bagherpara govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Bagherpara Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Bagherpara Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Bagherpara govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Manirampur");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Manirampur Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Manirampur Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Manirampur govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Manirampur Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Manirampur Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Manirampur govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;




                case 6:
                    strcpy(bh,"Dinajpur");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Birampur \n");
                    printf("\t\t\t\t\t\t\t2.Phulbari \n");
                    printf("\t\t\t\t\t\t\t3.Hakimpur \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Birampur");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Birampur Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Birampur Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Birampur govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Birampur Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Birampur Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Birampur govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Phulbari");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Phulbari Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Phulbari Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Phulbari govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Phulbari Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Phulbari Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Phulbari govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Hakimpur");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Hakimpur Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Hakimpur Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Hakimpur govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Hakimpur Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Hakimpur Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Hakimpur govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;



                case 7:
                    strcpy(bh,"Mymensingh");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Bhaluka \n");
                    printf("\t\t\t\t\t\t\t2.Fulbaria \n");
                    printf("\t\t\t\t\t\t\t3.Gauripur \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Bhaluka");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Bhaluka Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Bhaluka Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Bhaluka govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Bhaluka Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Bhaluka Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Bhaluka govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Fulbaria");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Fulbaria Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Fulbaria Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Fulbaria govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Fulbaria Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Fulbaria Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Fulbaria govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Gauripur");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1. Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2. Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3. govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Gauripur Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Gauripur Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Gauripur govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;



                case 8:
                    strcpy(bh,"Comilla");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Barura \n");
                    printf("\t\t\t\t\t\t\t2.Homna \n");
                    printf("\t\t\t\t\t\t\t3.Laksam \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Barura");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Barura Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Barura Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Barura govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Barura Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Barura Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Barura govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Homna");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Homna Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Homna Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Homna govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Homna Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Homna Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Homna govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Laksam");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Laksam Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Laksam Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Laksam govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Laksam Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Laksam Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Laksam govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;



                case 9:
                    strcpy(bh,"Barisal");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Babuganj \n");
                    printf("\t\t\t\t\t\t\t2.Bakerganj \n");
                    printf("\t\t\t\t\t\t\t3.Muladi \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Babuganj");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Babuganj Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Babuganj Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Babuganj govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Babuganj Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Babuganj Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Babuganj govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Bakerganj");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Bakerganj Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Bakerganj Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Bakerganj govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Bakerganj Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Bakerganj Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Bakerganj govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Muladi");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Muladi Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Muladi Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Muladi govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Muladi Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Muladi Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Muladi govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;




                case 10:
                    strcpy(bh,"Faridpur");
                    printf("\t\t\t\t\t\t\tPlease Choose Upazila: \n\n");
                    printf("\t\t\t\t\t\t\t1.Bhanga \n");
                    printf("\t\t\t\t\t\t\t2.Boalmari \n");
                    printf("\t\t\t\t\t\t\t3.Nagarkanda \n");
                    scanf("%d",&ukk);
                    switch(ukk)
                    {
                    case 1:
                        strcpy(uz,"Bhanga");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Bhanga Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Bhanga Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Bhanga govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Bhanga Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Bhanga Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Bhanga govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;

                    case 2:
                        strcpy(uz,"Boalmari");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Boalmari Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Boalmari Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Boalmari govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Boalmari Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Boalmari Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Boalmari govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        strcpy(uz,"Nagarkanda");
                        printf("\t\t\t\t\t\t\tPlease Choose VACCINE CENTER: \n\n");
                        printf("\t\t\t\t\t\t\t1.Nagarkanda Health Complex\n ");
                        printf("\t\t\t\t\t\t\t2.Nagarkanda Sadar Hospital \n ");
                        printf("\t\t\t\t\t\t\t3.Nagarkanda govt. Hospital \n ");
                        scanf("%d",&vck);
                        switch(vck)
                        {
                        case 1:
                            strcpy(vcen,"Nagarkanda Health Complex");
                            break;
                        case 2:
                            strcpy(vcen,"Nagarkanda Sadar Hospital");
                            break;
                        case 3:
                            strcpy(vcen,"Nagarkanda govt. Hospital");
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;

                default:
                    printf("\t\t\t\t\t\t\twrong input");
                    break;


                }

                for (int i = 0; i <strlen(bh); i++)
                {
                    ctz.district[i] = bh[i];
                }
                for (int i = 0; i <strlen(uz); i++)
                {
                    ctz.upzila[i] = uz[i];
                }
                for (int i = 0; i <strlen(vcen); i++)
                {
                    ctz.vcenter[i] = vcen[i];
                }

                //    gotoxy(10, 31);
                printf("\n\n\n\t\t\t\t\t\t\tCONFIRMED REGISTER. \n");
                ctz.reg[0]='O';
                ctz.reg[1]='K';
                fflush(stdin);

                fseek(fp, -sizeof(ctz), SEEK_CUR);

                //replacing struct.
                fwrite(&ctz, sizeof(ctz), 1, fp);
                break;


            }
        }




    }
    fclose(fp);

    //gotoxy(10, 27);
    if(!hyp)
    {
        printf("\n\n\t\t\t\t\t\tSorry, nid is not valid.\n");
    }
    //  gotoxy(10, 32);
    printf("\n\t\t\t\t\t\tPress any key to continue.");
    _getch();
    // CONFIRM REGISTER

    //SAVE INFO  ctz.reg=OK;

    menu2();



}

//void



void  citizenlist()
{
    FILE *fp;
    int i = 1, j;
    struct citizen ctz;
    system("cls");
    gotoxy(3, 3);
    printf("<--:View all citizen records:-->");
    gotoxy(3, 5);
    printf("No.  Name               Profession      Gender   National-ID    Phone-Number   Birth-date    Upazila");
    gotoxy(3, 6);
    printf("----------------------------------------------------------------------------------------------------------------");
    fp = fopen("record.bin", "rb+");
    if (fp == NULL)
    {
        gotoxy(3, 8);
        printf("No data found,Please Add Citizen information.");
        gotoxy(3, 11);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    j = 8;
    char hk[20];
    hk[0]='O';
    hk[1]='K';

    while (fread(&ctz, sizeof(ctz), 1, fp) == 1)
    {
        //only

        //if ctz.reg=OK;
        if (strcmp(hk, ctz.reg) == 0)
        {

            gotoxy(3, j);
            printf("%-5d%-19s%-16s%-9s%-15s%-15s%d/%d/%d%11s", i, ctz.name, ctz.profession,ctz.gender,ctz.nid, ctz.phoneno, ctz.mday,ctz.mmon,ctz.myear, ctz.upzila);
            i++;
            j++;
        }
    }
    fclose(fp);
    gotoxy(3, j + 3);
    printf("Press any key to continue.");
    _getch();
    menu();
}

void  searchbyupzila()
{
    char upz[20];


    system("cls");

    gotoxy(10, 5);
    printf("Enter Upazila name : ");
    fflush(stdin);
    gets(upz);



    FILE *fp;
    int i = 1, j;
    struct citizen ctz;
    system("cls");
    gotoxy(3, 3);
    printf("<--:View all citizen records in upzila(All registered):-->");
    gotoxy(3, 5);
    printf("No.  Name               Profession      Gender   National-ID    Phone-Number   Birth-date    Upazila");
    gotoxy(3, 6);
    printf("----------------------------------------------------------------------------------------------------------------");
    fp = fopen("record.bin", "rb+");
    if (fp == NULL)
    {
        gotoxy(3, 8);
        printf("No data found,Please Add Citizen information.");
        gotoxy(3, 11);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    j = 8;
 int df=0;

    while (fread(&ctz, sizeof(ctz), 1, fp) == 1)
    {
        //only

        //if ctz.reg=OK;
        if (strcmp(upz, ctz.upzila) == 0)
        {
               df=1;
            gotoxy(3, j);
            printf("%-5d%-19s%-16s%-9s%-15s%-15s%d/%d/%d%11s", i, ctz.name, ctz.profession,ctz.gender,ctz.nid, ctz.phoneno, ctz.mday,ctz.mmon,ctz.myear, ctz.upzila);
            i++;
            j++;
        }
    }
    fclose(fp);
    gotoxy(3, j + 3);
    if(!df)
    {
        printf("\t\t\t\t\t\tSorry, nid is not registered.\n");
    }
    gotoxy(4, j + 4);
    printf("Press any key to continue.");
    _getch();
    menu();
}


void  searchbynad()
{
    char nad[20];


    system("cls");

    gotoxy(10, 5);
    printf("Enter Nid no : ");
    fflush(stdin);
    gets(nad);



    FILE *fp;
    int i = 1, j;
    struct citizen ctz;
    system("cls");
    gotoxy(3, 3);
    printf("<--:View citizen records Using Nid:-->");
    gotoxy(3, 5);
    printf("No.  Name               Profession      Gender   National-ID    Phone-Number   Birth-date    Upazila");
    gotoxy(3, 6);
    printf("----------------------------------------------------------------------------------------------------------------");
    fp = fopen("record.bin", "rb+");
    if (fp == NULL)
    {
        gotoxy(3, 8);
        printf("No data found,Please Add Citizen information.");
        gotoxy(3, 11);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    j = 8;

 int df=0;
    while (fread(&ctz, sizeof(ctz), 1, fp) == 1)
    {
         if (strcmp(nad, ctz.nid) == 0)
        {

            if( ctz.reg[0] =='O')
            {
            df=1;

            gotoxy(3, j);
            printf("%-5d%-19s%-16s%-9s%-15s%-15s%d/%d/%d%11s", i, ctz.name, ctz.profession,ctz.gender,ctz.nid, ctz.phoneno, ctz.mday,ctz.mmon,ctz.myear, ctz.upzila);
            i++;
            j++;
        }
        }
    }
    fclose(fp);
     gotoxy(3, j + 3);
    if(!df)
    {
        printf("\t\t\t\t\t\tSorry, nid is not registered.\n");
    }
    gotoxy(4, j + 4);
    printf("Press any key to continue.");

    _getch();
    menu();
}



void  searchby1stdose()
{
    //char upz[20];


    system("cls");

    gotoxy(10, 5);
    //printf("Enter Upazila name : ");
    fflush(stdin);
    //gets(upz);



    FILE *fp;
    int i = 1, j;
    struct citizen ctz;
    system("cls");
    gotoxy(3, 3);
    printf("<--:View all citizen records with 1st dose:-->");
    gotoxy(3, 5);
    printf("No.  Name               Profession      Gender   National-ID    Phone-Number   Birth-date    Upazila");
    gotoxy(3, 6);
    printf("----------------------------------------------------------------------------------------------------------------");
    fp = fopen("record.bin", "rb+");
    if (fp == NULL)
    {
        gotoxy(3, 8);
        printf("No data found,Please Add Citizen information.");
        gotoxy(3, 11);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    j = 8;
int df=0;

    while (fread(&ctz, sizeof(ctz), 1, fp) == 1)
    {

       if( ctz.reg[0] =='O')
       {
       if( ctz.dose1[0] !='N' && ctz.dose2[0] =='N' )

        {
          df=1;
            gotoxy(3, j);
            printf("%-5d%-19s%-16s%-9s%-15s%-15s%d/%d/%d%11s", i, ctz.name, ctz.profession,ctz.gender,ctz.nid, ctz.phoneno, ctz.mday,ctz.mmon,ctz.myear, ctz.upzila);
            i++;
            j++;
        }
    }
    }
    fclose(fp);
    gotoxy(3, j + 3);
    if(!df)
    {
        printf("\t\t\t\t\t\tSorry, nobody taken only 1st dose.\n");
    }
    gotoxy(4, j + 4);
    printf("Press any key to continue.");
    _getch();
    menu();
}

void  searchbybothdose()
{
    //char upz[20];


    system("cls");

    gotoxy(10, 5);
    //printf("Enter Upazila name : ");
    fflush(stdin);
   // gets(upz);



    FILE *fp;
    int i = 1, j;
    struct citizen ctz;
    system("cls");
    gotoxy(3, 3);
    printf("<--:View all citizen records with Double dose:-->");
    gotoxy(3, 5);
    printf("No.  Name               Profession      Gender   National-ID    Phone-Number   Birth-date    Upazila");
    gotoxy(3, 6);
    printf("----------------------------------------------------------------------------------------------------------------");
    fp = fopen("record.bin", "rb+");
    if (fp == NULL)
    {
        gotoxy(3, 8);
        printf("No data found,Please Add Citizen information.");
        gotoxy(3, 11);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    j = 8;

   int df=0;
    while (fread(&ctz, sizeof(ctz), 1, fp) == 1)
    {
        if( ctz.reg[0] =='O')
       {
       if(ctz.dose1[0] !='N' && ctz.dose2[0] !='N')
        {
          df=1;
            gotoxy(3, j);
            printf("%-5d%-19s%-16s%-9s%-15s%-15s%d/%d/%d%11s", i, ctz.name, ctz.profession,ctz.gender,ctz.nid, ctz.phoneno, ctz.mday,ctz.mmon,ctz.myear, ctz.upzila);
            i++;
            j++;
        }
    }
    }
    fclose(fp);
    gotoxy(3, j + 3);
    if(!df)
    {
        printf("\t\t\t\t\t\tSorry, nobody taken both dose.\n");
    }
    gotoxy(4, j + 4);
    printf("Press any key to continue.");
    _getch();
    menu();
}


void  searchbyupzvac()
{
    char upz[20];


    system("cls");

    gotoxy(10, 5);
    printf("Enter Upazila name : ");
    fflush(stdin);
    gets(upz);



    FILE *fp;
    int i = 1, j;
    struct citizen ctz;
    system("cls");
    gotoxy(3, 3);
    printf("<--:View all citizen records in upzila(Full Vaccinated):-->");
    gotoxy(3, 5);
    printf("No.  Name               Profession      Gender   National-ID    Phone-Number   Birth-date    Upazila");
    gotoxy(3, 6);
    printf("----------------------------------------------------------------------------------------------------------------");
    fp = fopen("record.bin", "rb+");
    if (fp == NULL)
    {
        gotoxy(3, 8);
        printf("No data found,Please Add Citizen information.");
        gotoxy(3, 11);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    j = 8;

int df=0;
    while (fread(&ctz, sizeof(ctz), 1, fp) == 1)
    {

        if (strcmp(upz, ctz.upzila) == 0)
        {
             if(ctz.dose1[0] !='N' && ctz.dose2[0] !='N')
             {

            df=1;
            gotoxy(3, j);
            printf("%-5d%-19s%-16s%-9s%-15s%-15s%d/%d/%d%11s", i, ctz.name, ctz.profession,ctz.gender,ctz.nid, ctz.phoneno, ctz.mday,ctz.mmon,ctz.myear, ctz.upzila);
            i++;
            j++;
        }
    }
    }
    fclose(fp);
    gotoxy(3, j + 3);
    if(!df)
    {
        printf("\t\t\t\t\t\tSorry, nobody Full vaccinated in this Upazila.\n");
    }
    gotoxy(4, j + 4);
    printf("Press any key to continue.");
    _getch();
    menu();
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


void vcard()
{

    printf("\n\n");

    char cp[12];
    gotoxy(10, 18);
    printf(" \t\t\t\t\t      Please enter your NID no: \n\n\n");
    gotoxy(10, 21);
    fflush(stdin);
    gets(cp);
    printf(" \t\t\t\t\t      Please wait... your NID is verifying.\n");

    printf(" \t\t\t\t\t      Press any key after two seconds .\n");
    getch();
    system("cls");

    struct citizen ctz;
    //char cp[12]="8417513848";
    FILE *fp;
    fp = fopen("record.bin", "ab+");


    if (fp == NULL)
    {
        gotoxy(10, 7);
        printf("No data found,Please Add Citizen information.");
        gotoxy(10, 10);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    int flag=0;
    while ( fread(&ctz, sizeof(ctz), 1, fp)==1)
    {

        if(strcmp(cp,ctz.nid)==0)

        {

            flag=1;
            int age=year-ctz.myear;

            printf("\n\n");

            printf("\t\t\t******************************************************************************\n");
            printf("\t\t\t*                         Covid-19 Vaccination card                          *\n");
            printf("\t\t\t******************************************************************************\n");
            printf("\t\t\t*                                                                            *\n");
            printf("\t\t\t*   Registration no.-  %d            Date- %d/%d/%d                    *\n",ctz.nid,day,month,year);
            printf("\t\t\t*                                                                            *\n");
            printf("\t\t\t*   Name- %s                                                                *\n",ctz.name);
            printf("\t\t\t*                                                                            *\n");
            printf("\t\t\t*   Date of birth-  %d/%d/%d                 Age- %d                        *\n",ctz.mday,ctz.mmon,ctz.myear,age);
            printf("\t\t\t*                                                                            *\n");
            printf("\t\t\t*   NID. no.-  %s                                                    *\n",ctz.nid);
            printf("\t\t\t*                                                                            *\n");
            printf("\t\t\t*   Upazilla-  %s                                                      *\n",ctz.upzila);
            printf("\t\t\t*                                                                            *\n");
            printf("\t\t\t*   Zilla-  %s                                                         *\n",ctz.district);
            printf("\t\t\t*                                                                            *\n");
            printf("\t\t\t*   Vaccination center-   %s                            *\n",ctz.vcenter);
            //printf("\t\t\t*                                                                            *\n");
            printf("\t\t\t*                                                                            *\n");
            printf("\t\t\t******************************************************************************\n");
            printf("\t\t\t|                       Covid-19 Vaccination Information                     |\n");
            printf("\t\t\t|____________________________________________________________________________|\n");
            printf("\t\t\t|   Dose no        |           Date             |             Sign           |\n");
            printf("\t\t\t|__________________|____________________________|____________________________|\n");
            // printf("\t\t\t|____________________________________________________________________________|\n");
            printf("\t\t\t|    1st           |          %s        |                 adm        |\n",ctz.dose1);
            printf("\t\t\t|__________________|____________________________|____________________________|\n");
            // printf("\t\t\t|____________________________________________________________________________|\n");
            printf("\t\t\t|    2nd           |          %s        |                adm         |\n",ctz.dose2);
            printf("\t\t\t|__________________|____________________________|____________________________|\n");

            printf("\n");
            //printf("\t\t\t*******--------_||||_____Please Input your choice:");


        }
    }

    if (!flag)
    {
        printf("\n\n\n\t\t\t\t\t      SORRY , your nid is not valid\n.");
    }

    fclose(fp);

    gotoxy(50, 30);
    printf("Press any key to continue.");
    _getch();

    menu2();

}


void vcertif()
{
    printf("\n\n");

    char cp[12];
    printf(" \t\t\t\t\t      Please enter your NID no: \n\n\n");
    fflush(stdin);
    gets(cp);
    printf(" \t\t\t\t\t      Please wait... your NID is verifying.\n");

    printf(" \t\t\t\t\t      Press any key after two seconds .\n");
    getch();

    system("cls");
    struct citizen ctz;
    //char cp[12]="8417513848";
    FILE *fp;
    fp = fopen("record.bin", "ab+");


    if (fp == NULL)
    {
        gotoxy(10, 7);
        printf("No data found,Please Add Citizen information.");
        gotoxy(10, 10);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    int flag=0;
    while ( fread(&ctz, sizeof(ctz), 1, fp)==1)
    {

        if(strcmp(cp,ctz.nid)==0)

        {

            flag=1;
            int age=year-ctz.myear;

            printf("\n\n");

            printf("\t\t\t************************************************************************************\n");
            printf("\t\t\t*                              Covid-19 Vaccination certificate                    *\n");
            printf("\t\t\t************************************************************************************\n");
            printf("\t\t\t*                                                                                  *\n");
            printf("\t\t\t************************************************************************************\n");
            printf("\t\t\t*   Beneficiary Details:              *        Vaccination Details:                *\n");
            printf("\t\t\t************************************************************************************\n");
            printf("\t\t\t*   Certificate no.-  %d         *   Date of Dose1-  %s               *\n",ctz.nid,ctz.dose1);
            printf("\t\t\t*                                     *                                            *\n");
            printf("\t\t\t*   Name- %s                         *   Name of vaccine- %s               *\n",ctz.name,ctz.vname);
            printf("\t\t\t*                                     *                                            *\n");
            printf("\t\t\t*   Date of birth-  %d/%d/%d         *   Date of Dose2-  %s               *\n",ctz.mday,ctz.mmon,ctz.myear,ctz.dose2);
            printf("\t\t\t*                                     *                                            *\n");
            printf("\t\t\t*   NID. no.-  %s             *   Name of vaccine- %s               *\n",ctz.nid,ctz.vname);
            printf("\t\t\t*                                     *                                            *\n");
            printf("\t\t\t*   Gender-  Male                     *   Vaccination                              *\n");
            printf("\t\t\t*                                     *   center      - %s    *\n",ctz.vcenter);
            printf("\t\t\t*                                     *                                            *\n");
            printf("\t\t\t*   Nationality- Bangladeshi          *   Vaccinated by - Directorate General      *\n" );
            printf("\t\t\t*                                     *                   of  Health Services      *\n");
            printf("\t\t\t************************************************************************************\n");
            printf("\n");
            //printf("\t\t\t*******--------_||||_____Please Input your choice:");


        }
    }

    if (!flag)
    {
        printf("\n\n\n\t\t\t\t\t      SORRY , your nid is not valid\n.");
    }



    fclose(fp);

    gotoxy(50, 30);
    printf("Press any key to continue.");
    _getch();

    menu2();

}


void takevc()
{
    system("cls");

    char kdd[20];
    char dd1[20];
    char dd2[20];

    printf("\t\t\t\t\t\t\tPlease Enter Nid to Take vaccine:");
    fflush(stdin);
    gets(kdd);


    FILE *fp;
    struct citizen ctz;
    fp = fopen("record.bin", "rb+");
    if (fp == NULL)
    {
        gotoxy(10, 7);
        printf("No data found,Please Add Citizen information.");
        gotoxy(10, 10);
        printf("Press any key to continue.");
        _getch();
        adm();
    }
    int df=0;
//    char hk[20];
//    hk[0]='O';
//    hk[1]='K';
    while (fread(&ctz, sizeof(ctz), 1, fp) == 1)
    {
        if (strcmp(kdd, ctz.nid) == 0)
        {

            if(ctz.reg[0] =='O' && ctz.dose1[0] !='N' && ctz.dose2[0] !='N')
            {
                df=1;
                printf("\n\n\n\t\t\t\t\t\t\tBoth Dose Taken.\n");
                break;
            }
            else if( ctz.reg[0] =='O' && ctz.dose1[0] =='N' && ctz.dose2[0] =='N')
            {
                df=1;
                printf("\n\n\n\t\t\t\t\t\t\tDate Format: dd/mm/yyyy \n\n");
                printf("\t\t\t\t\t\t\tEnter 1st dose date:");
                fflush(stdin);
                gets(dd1);



                for (int i = 0; i <strlen(dd1); i++)
                {
                    ctz.dose1[i] = dd1[i];
                }


                fseek(fp, -sizeof(ctz), SEEK_CUR);

                //replacing struct.
                fwrite(&ctz, sizeof(ctz), 1, fp);
                break;


            }

           else if( ctz.reg[0] =='O' && ctz.dose1[0] !='N' && ctz.dose2[0] =='N')
            {
                df=1;
                printf("\n\n\n\t\t\t\t\t\t\tDate Format: dd/mm/yyyy \n\n");
                printf("\n\n\t\t\t\t\t\t\tEnter 2nd dose date:");
                fflush(stdin);
                    gets(dd2);

                    for (int i = 0; i <strlen(dd2); i++)
                    {
                        ctz.dose2[i] = dd2[i];
                    }


                fseek(fp, -sizeof(ctz), SEEK_CUR);

                //replacing struct.
                fwrite(&ctz, sizeof(ctz), 1, fp);
                break;


            }

        }
    }

    fclose(fp);

    //gotoxy(10, 27);
    if(!df)
    {
        printf("\t\t\t\t\t\tSorry, nid is not registered.\n");
    }
    //  gotoxy(10, 32);
    printf("\n\nt\t\t\t\t\tPress any key to continue.");
    _getch();
    // CONFIRM REGISTER

    //SAVE INFO  ctz.reg=OK;

    menu();

}




void creditos()
{
     system("cls");
    printf("\n\n\n\n\t\t\t\t\tVaccine Management System \n");

    printf("\n\t\t\t\t\t\t CREDITS: \n\n");
    printf("\t\t\t\t\t------Supervised by------  \n\n");

    printf("\t\t\t\t\tDr. Md. Sazzad Hossain Sir\n\n");
    printf("\t\t\t\t\t      Professor  \n\n");
    printf("\t\t\t\t\tDepartment of CSE,MBSTU \n\n");
    printf("\t\t\t\t\t------Developed by------  \n\n");
    printf("\t\t\t\t\tSikder Abdur Rahman Jony\n\n");
    printf("\t\t\t\t\t      Id- CE20007 \n\n");
    printf("\t\t\t\t\tDepartment of CSE,MBSTU \n\n");



    printf("\n\n\t\t\t\t\t press any key to continue\n");
     _getch();

     menu2();
}


void manual()
{
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t      Vaccine Management System \n");

    printf("\n\t\t\t\t\t\t   USER MANUAL: \n\n");
    printf("\t\t\t\t\tDeveloped by Department of CSE,MBSTU \n\n");
    printf("\n\t\t\t\t\t**********1.Registration************\n");
    printf("\n\tClicking on the Register button will bring up a screen ,select Category from here.");
    printf("After selecting Category,\n\tthe following screen will appear.Here you have to click on Verify button after providing National Identity\n\tCard ");
    printf("number, date of birth (according to National Identity Card) and CAPTCHA. \n\n");

    printf("\tIf all is correct, the following English names will be displayed. Provide mobile number here.\n\t(OTP and vaccine information will ");
    printf("be notified through SMS to this mobile number). \n\n");


    printf("\tAt this stage select the current address on the screen below (Division,District,Upazila / Thana / City\n\tCorporation, Union / Municipality etc. ");
    printf("Select the center where you want to receive the vaccine. Note that \n\t");

    printf("the center will be received according to the selected upazila. \n\n\t");
    printf("Congratulations! Your registration has been completed successfully. Now at any time you can Download the\n\tVaccine Card online.\n");



    printf("\n\n\t\t\t\t\t*******2.Covid-19 Vaccine Card*******\n\n");

    printf("\tClicking on the Vaccine Card button will bring up the following screen, click on Verify button with the\n\tNational Identity Card");
    printf(" number, date of birth (according to National Identity Card) and CAPTCHA.\n\n\n\tYou can ");




    printf("download the vaccine card by clicking on the Download Vaccine Card button using the OTP code\n\treceived via");
    printf(" SMS to the mobile number provided at the time of registration. If you do not get OTP on  \n\t");


    printf("mobile, you can just try resending the OTP again.\n\n ");


    printf("\n\n\t\t\t\t\t*****3.Covid-19 Vaccine Certificate****\n\n");

    printf("\tClicking on the Vaccine Certificate button will bring up the following screen, click on Verify button\n\twith theNational Identity Card");
    printf(" number, date of birth (according to National Identity Card) and CAPTCHA.\n\n\n\tYou can ");




    printf("view the vaccine Certificate by clicking on the view Vaccine Card button using the OTP code\n\treceived via");
    printf(" SMS to the mobile number provided at the time of registration. If you do not get OTP on  \n\t");


    printf("mobile, you can just try resending the OTP again.\n\n\t");

    printf("Vaccine certificate can be received from the user menu after completion of 2 doses of Covid-19 vaccine.\n\t");


    printf("\n\n\n\t\t\t\t\t**********THANK YOU************\n");

    printf("\n\n\t\t\t\t\t press any key to continue\n");
     _getch();

     menu2();
}












