/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Employee//this is a globally available structure the main function and the user defined functions can use it
{
    char name[20];
    int age;
    float salary;
    char email[10];
};
    void add_record()
        {
            printf("You can enter new record credentials here\n");
            printf("enter the name of the person:")
            sca
            
        }
    void modify_record()
        {
            printf("You can modify old record credentials here\n");
        }
    void delete_record()
        {
            printf("You can delete previously entered credentials here\n");
        }
    void display_record()
        {
            printf("You can display previously enterd credentials here\n");
        }
int main()
{
    int flag=0, x=0;
    printf("Welcome to the Employee Management System\n");

    while (flag == 0)
    {
    printf("Press 1 to Create a new Record\nPress 2 to modify record\nPress 3 to delete record\nPress 4 to view record\nPress 6 to exit EMS\nEnter your response here:");
    scanf("%d", &x);
    
    if (x==1)
        add_record();
    if (x==2)
        modify_record();
    if (x==3)
        delete_record();
    if (x==4)
        display_record();
    if (x==6)
        flag = 1;//jaise hi flag 1 hoga tabhi exit ho jayega while loop
    }
    return 0;
}


