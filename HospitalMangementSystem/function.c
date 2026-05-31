#include <stdio.h>
#include "head.h"

struct Patient
{
    int id;
    char name[50];
    int age;
};

void addPatient()
{
    struct Patient p;

    FILE *fp = fopen("patient.txt", "a");

    if(fp == NULL)
    {
        printf("File could not be opened!\n");
        return;
    }

    printf("Enter Patient ID: ");
    scanf("%d", &p.id);

    printf("Enter Patient Name: ");
    scanf("%s", p.name);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    fprintf(fp, "%d %s %d\n",
            p.id,
            p.name,
            p.age);

    fclose(fp);

    printf("\nPatient Added Successfully!\n");
}

void viewPatient()
{
    struct Patient p;

    FILE *fp = fopen("patient.txt", "r");

    if(fp == NULL)
    {
        printf("No Patient Record Found!\n");
        return;
    }

    printf("\n----- Patient List -----\n");

    while(fscanf(fp,
                 "%d %s %d",
                 &p.id,
                 p.name,
                 &p.age) != EOF)
    {
        printf("ID   : %d\n", p.id);
        printf("Name : %s\n", p.name);
        printf("Age  : %d\n", p.age);
        printf("----------------------\n");
    }

    fclose(fp);
}
