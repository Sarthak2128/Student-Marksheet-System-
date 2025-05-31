#include <stdio.h>

int main() {
    int choice;
    int math, physics, chemistry, english, cs, total;
    float percentage;
    int rollNo, classStd;
    char name[50];
    int failFlag = 0;

    printf("Enter your roll no: ");
    scanf("%d", &rollNo);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your class: ");
    scanf("%d", &classStd);

    printf("\n1. Enter Marks ");
    printf("\n2. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("-------------------------\n");

    if (choice == 1) {
                printf("\nEnter marks for Mathematics: ");
        scanf("%d", &math);
        printf("Enter marks for Physics: ");
        scanf("%d", &physics);
        printf("Enter marks for Chemistry: ");
        scanf("%d", &chemistry);
        printf("Enter marks for English: ");
        scanf("%d", &english);
        printf("Enter marks for Computer Science: ");
        scanf("%d", &cs);

        
        if (math > 100 || physics > 100 || chemistry > 100 || english > 100 || cs > 100) {
            printf("\nInvalid marks entered! Marks should not exceed 100.\n");
            return 0;
        }

        total = math + physics + chemistry + english + cs;
        percentage = total / 5.0;

       
        if (math < 45 || physics < 45 || chemistry < 45 || english < 45 || cs < 45) {
            failFlag = 1;
        }

        printf("\n--------------------------------------------\n");
        printf("             GCOEY SSC/HSC SCHOOL            \n");
        printf("--------------------------------------------\n");
        printf("Roll No : %d\n", rollNo);
        printf("Name    : %s\n", name);
        printf("Class   : %d\n", classStd);
        printf("--------------------------------------------\n");
        printf("| %-20s | %-10s |\n", "Subject", "Marks");
        printf("--------------------------------------------\n");
        printf("| %-20s | %-10d |\n", "Mathematics", math);
        printf("| %-20s | %-10d |\n", "Physics", physics);
        printf("| %-20s | %-10d |\n", "Chemistry", chemistry);
        printf("| %-20s | %-10d |\n", "English", english);
        printf("| %-20s | %-10d |\n", "Computer Science", cs);
        printf("--------------------------------------------\n");
        printf("| %-20s | %-10d |\n", "Total Marks", total);
        printf("| %-20s | %-10.2f |\n", "Percentage", percentage);
        printf("--------------------------------------------\n");

       
        if (percentage >= 90) {
            printf("Grade     : A+\n");
        } else if (percentage >= 80) {
            printf("Grade     : A\n");
        } else if (percentage >= 70) {
            printf("Grade     : B\n");
        } else if (percentage >= 60) {
            printf("Grade     : C\n");
        } else if (percentage >= 50) {
            printf("Grade     : D\n");
        } else {
            printf("Grade     : F\n");
        }

        
        if (failFlag == 1) {
            printf("Pass/Fail : Fail");
        } else if (percentage >= 50) {
            printf("Pass/Fail : Pass\n");
        } else {
            printf("Pass/Fail : Fail\n");
        }

    } else if (choice == 2) {
        printf("Program Exited.\n");
    } else {
        printf("Wrong choice\n");
    }

    return 0;
}
