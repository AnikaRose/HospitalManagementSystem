#include <stdio.h>
#include "head.h"

int main()
{
    int choice;

    while(1){
    printf("\n");
    printf(
    "*****************************************************\n"
    "*                                                   *\n"
    "*           HOSPITAL MANAGEMENT SYSTEM              *\n"
    "*                                                   *\n"
    "*****************************************************\n"

);

        printf("\n");
        printf(" [1] Add Patient Record\n");
        printf(" [2] View Patient Records\n");
        printf(" [3] Exit System\n");
        printf("\n");
        printf(" Enter Choice: ");

        if(scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            while(getchar() != '\n'); // clear buffer
            continue;
        }

        if(choice == 1)
        {
            addPatient();
        }
        else if(choice == 2)
        {
            viewPatient();
        }
        else if(choice == 3)
        {
            printf("Thank You!\n");
            break;
        }
        else
        {
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}
