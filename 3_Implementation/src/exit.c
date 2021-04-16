#include <stdio.h> ///for input output functions like printf, scanf
#include <stdlib.h>
#include <conio.h>
#include <windows.h> 
#include <string.h>  ///string operations
/** List of Global Variable */
COORD b = {1,0};
void a(int x,int y)
{
    b.X = x;
    b.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),b);
}
/** Main function */
int main()
{
    FILE *fp, *ft; 
    char another;
	char choice;
  /** structure that represent a employee */
    struct emp
    {
        char name[40];  ///name of employee
        int DOB;       /// date of birth of employee
        int age;     /// age of employee
		char ms[40];   /// marital status of employee
		char qualification[40];  /// qualification of employee
		char employement[40];    /// previous employement of employee
        float bs;        /// basic salary of employee
    };
    struct emp e; 
    char employeename[40]; 
    long int resize; 
    fp = fopen("EMP.DAT","rb+");  //open file
    if(fp == NULL)  //if file is null
    {
        fp = fopen("EMP.DAT","wb+"); //write
        if(fp == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }
/// sizeo of each record i.e. size of structure variable e
    resize = sizeof(e);
    while(1)
    {
        system("cls"); 
        a(20,5); 
        printf("6. Exit"); /// exit from the program
        a(20,15);
        printf("Your Choice: ");
        fflush(stdin); 
        choice = getchar(); 
        switch(choice)
        {
			 case '5':
            fclose(fp); /// close the file
            exit(0); /// exit from the program
        }
    }
    return 0;
}