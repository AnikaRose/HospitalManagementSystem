#include <stdio.h>
#include "head.h"

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== Hospital Management System =====\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

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
