// Program Name:- Generate marksheet using C programming laungauge.
// programmar name :- Kundan
// programmer Email:- kundan_229142@saitm.org
// Date:- 18 March 2023

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void student_details();
void marks_input();
void pass_fail();
void template();
void storedata();

void view_record();
void view_marksheet();
void search_record();

int roll_no;
char name[30], fa_name[30], dob[20], co_name[30], sem[10];
int c_marks, loc_marks, mfcs_marks, ssad_marks, so_marks, grand_total;
float presentage;

// student detailas Enter form user function
void student_details()
{
    system("cls");
    printf("\n\n<-----------------------------WELCOME IN MARKSHEET GENERATED PROGRAM------------------------------>\n\n");
    printf("\n               !!If You want to Generate Your Marksheet Fill Some basic Information!!                \n");
    printf("\n\n<--------Enter Your Basic Details---------->\n\n");

    printf("Enter your Roll no:- \t\t");
    scanf("%d", &roll_no);
    printf("Enter your name:- \t\t");
    fflush(stdin);
    gets(name);
    printf("Enter your Father name:- \t");
    fflush(stdin);
    gets(fa_name);
    printf("Enter your Date of Birth:- \t");
    fflush(stdin);
    gets(dob);
    printf("Enter your Course Name:- \t");
    fflush(stdin);
    gets(co_name);
    printf("Enter your Sem/Part:- \t\t");
    fflush(stdin);
    gets(sem);
}

// Subject marks input form user function
void marks_input()
{
    printf("\n\n<--------Enter Your Subject Marks---------->\n\n");
repeat1:
    printf("Enter C programming Marks:\t ");
    scanf("%d", &c_marks);
    if (c_marks > 100 || c_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeat1;
    }
repeat2:
    printf("Enter LOC Marks:\t\t ");
    scanf("%d", &loc_marks);
    if (loc_marks > 100 || loc_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeat2;
    }

repeat3:
    printf("Enter MFCS Marks:\t\t ");
    scanf("%d", &mfcs_marks);
    if (mfcs_marks > 100 || mfcs_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeat3;
    }
repeat4:
    printf("Enter SSAD_marks:\t\t ");
    scanf("%d", &ssad_marks);
    if (ssad_marks > 100 || ssad_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeat4;
    }
repeat5:
    printf("Enter Software Lab Marks:\t ");
    scanf("%d", &so_marks);
    if (so_marks > 100 || so_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeat5;
    }

    // grand total of all subject marks
    grand_total = c_marks + loc_marks + mfcs_marks + ssad_marks + so_marks;
    presentage = grand_total * 100 / 500;
}

// Presentage pass/fail and Grade print function
void pass_fail()
{
    if (presentage >= 81 && presentage <= 100)
    {
        printf("|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        printf("|\tRESULT : PASS WITH FIRST DIVISION\t\t\t\t\t\t  |\n");
        printf("|\tGRADE  : A+\t\t\t\t\t\t\t\t\t  |\n");
    }
    else if (presentage >= 61 && presentage <= 80)
    {
        printf("|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        printf("|\tRESULT : PASS WITH FIRST DIVISION\t\t\t\t\t\t  |\n");
        printf("|\tGRADE  : A\t\t\t\t\t\t\t\t\t  |\n");
    }
    else if (presentage >= 41 && presentage <= 60)
    {
        printf("|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        printf("|\tRESULT : PASS WITH SECOND DIVISION\t\t\t\t\t\t  |\n");
        printf("|\tGRADE  : B\t\t\t\t\t\t\t\t\t  |\n");
    }
    else if (presentage >= 33 && presentage <= 40)
    {
        printf("|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        printf("|\tRESULT : PASS WITH THIRD DIVISION\t\t\t\t\t\t  |\n");
        printf("|\tGRADE  : C\t\t\t\t\t\t\t\t\t  |\n");
    }
    else if (presentage >= 1 && presentage <= 32)
    {
        printf("|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        printf("|\tRESULT : Fail\t\t\t\t\t\t\t\t\t  |\n");
        printf("|\tGRADE  : D\t\t\t\t\t\t\t\t\t  |\n");
    }
}

// print marksheet template using this function
void template()
{
    system("cls");
    printf("\n\n<-----------------------------WELCOME IN MARKSHEET GENERATED PROGRAM------------------------------>\n\n");

    printf("                                       STUDENT MARKSHEET                                   \n");
    printf("|-----------------------------------------------------------------------------------------|\n");
    printf("|                            MAHARSHI DAYANAND UNIVERSITY ROHTAK                          |\n");
    printf("|-----------------------------------------------------------------------------------------|\n");
    printf("|                                     STUDENTS DETAILS                                    |\n");
    printf("|-----------------------------------------------------------------------------------------|\n");
    printf("| \t Name: %s            \t Father Name: %s\t\t  |\n", name, fa_name);
    printf("| \t Roll No:  %d     \t\t Date of Birth: %s\t\t\t  |\n", roll_no, dob);
    printf("| \t Course Name: %s   \t\t Semester: %s\t\t\t\t\t  |\n", co_name, sem);
    printf("|-----------------------------------------------------------------------------------------|\n");
    printf("|\tSUBJECTS                 \tMAX MARKS  \tMIN MARKS   \tTHEORY MARKS   \t  |\n");
    printf("|-----------------------------------------------------------------------------------------|\n");
    printf("|\tC PROGRAMMING(106)       \t  100      \t   33       \t    %d  \t  |\n", c_marks);
    printf("|\tLOC 2(107)               \t  100      \t   33       \t    %d  \t  |\n", loc_marks);
    printf("|\tMFCS(108)                \t  100      \t   33       \t    %d  \t  |\n", mfcs_marks);
    printf("|\tSSAD(109)                \t  100      \t   33       \t    %d  \t  |\n", ssad_marks);
    printf("|\tSOFTWARE LAB(110)        \t  100      \t   33       \t    %d  \t  |\n", so_marks);
    printf("|-----------------------------------------------------------------------------------------|\n");
    printf("|\t                         \t  500    |    GRAND TOTAL\t    %d  \t  |\n", grand_total);
    printf("|-----------------------------------------------------------------------------------------|\n");

    pass_fail();

    printf("|-----------------------------------------------------------------------------------------|\n");
    printf("|                   ..........ALL THE BEST FOR YOU BRIGHT FUTURE..........                |\n");
    printf("|-----------------------------------------------------------------------------------------|\n");
}
// store data in record.txt fill
void storedata()
{
    FILE *fptr;
    fptr = fopen("Record.txt", "a");

    fprintf(fptr, "Roll no:              %d\n", roll_no);
    fprintf(fptr, "Name:                 %s\n", name);
    fprintf(fptr, "Father Name:          %s\n", fa_name);
    fprintf(fptr, "Date Of Birth:        %s\n", dob);
    fprintf(fptr, "Course Name:          %s\n", co_name);
    fprintf(fptr, "Semester:             %s\n", sem);
    fprintf(fptr, "C PROGRAMMING(106):   %d\n", c_marks);
    fprintf(fptr, "LOC 2(107):           %d\n", loc_marks);
    fprintf(fptr, "MFCS(108):            %d\n", mfcs_marks);
    fprintf(fptr, "SSAD(109):            %d\n", ssad_marks);
    fprintf(fptr, "SOFTWARE LAB(110):    %d\n", so_marks);
    fprintf(fptr, "TOTAL:                %d\n", grand_total);
    fprintf(fptr, "PRESENTAGE:           %.2f\n", presentage);
    fprintf(fptr, "_________________________________________\n\n");

    fclose(fptr);

    FILE *fp;
    fp = fopen("Template.txt", "a");
    fprintf(fp, "                                       STUDENT MARKSHEET                                   \n");
    fprintf(fp, "|-----------------------------------------------------------------------------------------|\n");
    fprintf(fp, "|                            MAHARSHI DAYANAND UNIVERSITY ROHTAK                          |\n");
    fprintf(fp, "|-----------------------------------------------------------------------------------------|\n");
    fprintf(fp, "|                                     STUDENTS DETAILS                                    |\n");
    fprintf(fp, "|-----------------------------------------------------------------------------------------|\n");
    fprintf(fp, "| \t Name: %s            \t Father Name: %s\t\t  |\n", name, fa_name);
    fprintf(fp, "| \t Roll No:  %d     \t\t Date of Birth: %s\t\t\t  |\n", roll_no, dob);
    fprintf(fp, "| \t Course Name: %s   \t\t Semester: %s\t\t\t\t\t  |\n", co_name, sem);
    fprintf(fp, "|-----------------------------------------------------------------------------------------|\n");
    fprintf(fp, "|\tSUBJECTS                 \tMAX MARKS  \tMIN MARKS   \tTHEORY MARKS   \t  |\n");
    fprintf(fp, "|-----------------------------------------------------------------------------------------|\n");
    fprintf(fp, "|\tC PROGRAMMING(106)       \t  100      \t   33       \t    %d  \t  |\n", c_marks);
    fprintf(fp, "|\tLOC 2(107)               \t  100      \t   33       \t    %d  \t  |\n", loc_marks);
    fprintf(fp, "|\tMFCS(108)                \t  100      \t   33       \t    %d  \t  |\n", mfcs_marks);
    fprintf(fp, "|\tSSAD(109)                \t  100      \t   33       \t    %d  \t  |\n", ssad_marks);
    fprintf(fp, "|\tSOFTWARE LAB(110)        \t  100      \t   33       \t    %d  \t  |\n", so_marks);
    fprintf(fp, "|-----------------------------------------------------------------------------------------|\n");
    fprintf(fp, "|\t                         \t  500    |    GRAND TOTAL\t    %d  \t  |\n", grand_total);
    fprintf(fp, "|-----------------------------------------------------------------------------------------|\n");

    if (presentage >= 81 && presentage <= 100)
    {
        fprintf(fp, "|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        fprintf(fp, "|\tRESULT : PASS WITH FIRST DIVISION\t\t\t\t\t\t  |\n");
        fprintf(fp, "|\tGRADE  : A+\t\t\t\t\t\t\t\t\t  |\n");
    }
    else if (presentage >= 61 && presentage <= 80)
    {
        fprintf(fp, "|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        fprintf(fp, "|\tRESULT : PASS WITH FIRST DIVISION\t\t\t\t\t\t  |\n");
        fprintf(fp, "|\tGRADE  : A\t\t\t\t\t\t\t\t\t  |\n");
    }
    else if (presentage >= 41 && presentage <= 60)
    {
        fprintf(fp, "|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        fprintf(fp, "|\tRESULT : PASS WITH SECOND DIVISION\t\t\t\t\t\t  |\n");
        fprintf(fp, "|\tGRADE  : B\t\t\t\t\t\t\t\t\t  |\n");
    }
    else if (presentage >= 33 && presentage <= 40)
    {
        fprintf(fp, "|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        fprintf(fp, "|\tRESULT : PASS WITH THIRD DIVISION\t\t\t\t\t\t  |\n");
        fprintf(fp, "|\tGRADE  : C\t\t\t\t\t\t\t\t\t  |\n");
    }
    else if (presentage >= 1 && presentage <= 32)
    {
        fprintf(fp, "|\tPRESENTAGE : %.2f%%\t\t\t\t\t\t\t\t  |\n", presentage);
        fprintf(fp, "|\tRESULT : Fail\t\t\t\t\t\t\t\t\t  |\n");
        fprintf(fp, "|\tGRADE  : D\t\t\t\t\t\t\t\t\t  |\n");
    }

    fprintf(fp, "|-----------------------------------------------------------------------------------------|\n");
    fprintf(fp, "|                   ..........ALL THE BEST FOR YOU BRIGHT FUTURE..........                |\n");
    fprintf(fp, "|-----------------------------------------------------------------------------------------|\n\n");
    fprintf(fp, "\n\n\n|_________________________________________________________________________________________________________________________________|\n\n\n");

    if (fp == NULL)
    {
        printf("\n\nSOME TECHNICAL ERROR..............!!\n");
        printf("FILE NOT REACHED..............!!\n\n\n");
    }
    else
    {
        printf("\n\nYOUR MARKSHEET STORE SUCESSFULLY....................!!\n");
        printf("THANK YOU....................!!\n\n");
    }
    fclose(fp);
}
void view_record()
{
    system("cls");
    printf("\n\n\n<----------------All STUDENS MARKSHEET REPORT HERE---------------->\n\n\n");
    FILE *fptr;
    char ch;
    fptr = fopen("Record.txt", "r");

    if (fptr == NULL)
    {
        printf("\n\nSOME TECHNICAL ERROR..............!!\n");
        printf("FILE NOT REACHED..............!!\n\n\n");
    }
    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fptr);
}
void view_marksheet()
{
    system("cls");
    printf("\n\n\n<----------------All STUDENS MARKSHEET REPORT HERE---------------->\n\n\n");
    FILE *fptr;
    char ch;
    fptr = fopen("Template.txt", "r");

    if (fptr == NULL)
    {
        printf("\n\nSOME TECHNICAL ERROR..............!!\n");
        printf("FILE NOT REACHED..............!!\n\n\n");
    }
    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fptr);
}
void search_recod()
{
    system("cls");
    printf("\n\n<-----------------------------WELCOME IN MARKSHEET GENERATED PROGRAM------------------------------>\n\n");

    FILE *fpts = fopen("Record.txt", "r");
    if (fpts == NULL)
    {
        printf("\n\nSOME TECHNICAL ERROR..............!!\n");
        printf("FILE NOT REACHED..............!!\n\n\n");
    }

    int roll;
    printf("Enter roll no you want to search:- ");
    scanf("%d", &roll);

    fscanf(fpts, "Roll no:              %d", &roll_no);
    fscanf(fpts, "Name:                 %s", &name);
    fscanf(fpts, "Father Name:          %s", &fa_name);
    fscanf(fpts, "Date Of Birth:        %s", &dob);
    fscanf(fpts, "Course Name:          %s", &co_name);
    fscanf(fpts, "Semester:             %s", &sem);
    fscanf(fpts, "C PROGRAMMING(106):   %d", &c_marks);
    fscanf(fpts, "LOC 2(107):           %d", &loc_marks);
    fscanf(fpts, "MFCS(108):            %d", &mfcs_marks);
    fscanf(fpts, "SSAD(109):            %d", &ssad_marks);
    fscanf(fpts, "SOFTWARE LAB(110):    %d", &so_marks);
    fscanf(fpts, "TOTAL:                %d", &grand_total);
    fscanf(fpts, "PRESENTAGE:           %.2f", &presentage);

    if (roll == roll_no)
    {
        template();
    }
    else
    {
        printf("MARKSHEET NOT FOUND.....!!");
    }
    fclose(fpts);
}
// main function start here.........
void main()
{
choise_again:
    system("cls");

    int choice;
    printf("\n\n<-----------------------------WELCOME IN MARKSHEET GENERATED PROGRAM------------------------------>\n\n");
    printf("1.  ADD STUDENT MARKSHEET\n");
    printf("2.  VIEW STUDENT RECORD\n");
    printf("3.  VIEW STUDENT MARKSHEET\n");
    printf("4.  SEARCH STUDENT MARKSHEET\n");
    printf("5.  EXIT\n");
    printf("Enter Your Choice:-  \t ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        student_details();
        marks_input();
        storedata();
        printf("\n\nEnter Any key for Generate Marksheet......");
        getch();
        template();
        break;
    case 2:
        view_record();
        break;
    case 3:
        view_marksheet();
        break;
    case 4:
        search_recod();
        break;
        
    case 5:
        exit(0);
        break;
    default:
        printf("You choise Wrong Number........!!\n\n\n");
        getch();
        goto choise_again;
        break;
    }
    printf("\n\nEnter Any key for continue....");
    getch();
    goto choise_again;
}
// Thank You for seeing my C programing project work.