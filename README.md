This C program is a console-based application that simulates the creation of a student report card. It allows the user to input student details and marks for five subjects, then calculates the total, percentage, grade, and pass/fail status. The output is displayed in a structured format, similar to a school-issued mark sheet.

Program Workflow and Features
1.  Student Detail Input
The program begins by prompting the user for:

Roll Number (int)

Name (char[])

Class Standard (int)

These are collected using scanf():


2.  Menu-Driven Interaction
The user is presented with two choices:

1. Enter Marks
2. Exit
The program uses a basic menu system to:

Proceed to the mark entry screen if the user selects 1

Exit the program if the user selects 2

Print an error message if the input is invalid (e.g., 3, 99)

3.  Subject Marks Entry
Upon choosing option 1, the user is prompted to enter marks for the following 5 subjects:

Mathematics

Physics

Chemistry

English

Computer Science

printf("Enter marks for Mathematics: ");
scanf("%d", &math);
4. Validation of Marks
Immediately after input, the program checks if any subject marks exceed 100:

if (math > 100 || physics > 100 || chemistry > 100 || english > 100 || cs > 100)
If invalid, an error is displayed:

Invalid marks entered! Marks should not exceed 100.
The program then terminates early using return 0;.

5. Total and Percentage Calculation
If all marks are valid, the program computes:

Total Marks:

total = math + physics + chemistry + english + cs;
Percentage:

percentage = total / 5.0;
6. Fail Check
The program uses a flag (failFlag) to determine if the student has failed in any subject (marks < 45):

if (math < 45 || physics < 45 || chemistry < 45 || english < 45 || cs < 45)
    failFlag = 1;
7.  Report Card Display
A well-formatted report card is displayed with headings and subject-wise marks using formatted printf statements.

printf("| %-20s | %-10d |\n", "Mathematics", math);
The output includes:

Roll number

Name

Class

Each subject's marks

Total marks

Percentage

8.  Grade Assignment
Based on the percentage, a grade is assigned:

if (percentage >= 90)         → A+
else if (percentage >= 80)    → A
else if (percentage >= 70)    → B
else if (percentage >= 60)    → C
else if (percentage >= 50)    → D
else                          → F
9.  Pass or Fail Status
The program decides Pass or Fail using two conditions:

If the student has failed in any subject (using failFlag)

If the overall percentage is less than 50%

Output:

if (failFlag == 1)
    printf("Pass/Fail : Fail");
else if (percentage >= 50)
    printf("Pass/Fail : Pass");
else
    printf("Pass/Fail : Fail");
10.  Exit Option
If the user selects option 2, the program exits:


printf("Program Exited.\n");
Sample Execution Flow
markdown
Copy
Edit
Enter your roll no: 101
Enter your name: John
Enter your class: 12

1. Enter Marks
2. Exit
Enter your choice: 1

Enter marks for Mathematics: 90
Enter marks for Physics: 85
Enter marks for Chemistry: 78
Enter marks for English: 88
Enter marks for Computer Science: 92

--------------------------------------------
             GCOEY SSC/HSC SCHOOL
--------------------------------------------
Roll No : 101
Name    : John
Class   : 12
--------------------------------------------
| Subject              | Marks      |
| Mathematics          | 90         |
| Physics              | 85         |
| Chemistry            | 78         |
| English              | 88         |
| Computer Science     | 92         |
--------------------------------------------
| Total Marks          | 433        |
| Percentage           | 86.60      |
--------------------------------------------
Grade     : A
Pass/Fail : Pass
