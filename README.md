This C program is a Student Report Card Generator, designed to take input from the user and generate a structured academic report for a student. It is a menu-driven console application that helps users calculate and display a student's performance in five key subjects. The program is ideal for students learning C programming, as it incorporates fundamental concepts such as input/output operations, conditional statements, validation, and formatted output.

1)Input Collection
At the beginning, the program prompts the user to enter basic student information:

Roll Number

Name

Class

This is followed by a simple menu with two options:

Enter Marks

Exit

The user selects option 1 to continue entering marks. Option 2 allows the user to exit the program gracefully.

2) Marks Input and Validation
Upon choosing to enter marks, the user is prompted to input scores for five subjects:

Mathematics

Physics

Chemistry

English

Computer Science

Each subject is expected to have a mark out of 100. The program checks if any of the entered marks exceed 100. If so, it terminates early with an error message, ensuring that invalid inputs are not processed further. This validation helps in maintaining the integrity of the result generation process.

3)Calculations and Evaluation
Once the marks are validated, the program performs the following calculations:

Total Marks: Sum of marks in all five subjects.

Percentage: Total marks divided by the number of subjects (i.e., 5).

The program then checks if the student has failed in any subject. A student is considered failed in a subject if the score is less than 45 in that subject. If the student has failed in any one or more subjects, a failFlag is raised.

4) Grade Assignment
Grades are assigned based on the percentage obtained:

A+: 90% and above

A : 80–89%

B : 70–79%

C : 60–69%

D : 50–59%

F : Below 50%

This grading logic helps in giving a qualitative measure of student performance.

5) Pass/Fail Criteria
A student passes only if:

The percentage is 50% or above

No subject has a score less than 45

If any of the above conditions are not met, the student is considered Failed.

6) Report Card Display
The program then displays a well-formatted report card with clear and clean output:

Student details: Roll number, name, class

Subject-wise marks

Total marks and percentage

Assigned grade

Pass or fail status

This output simulates an actual mark sheet and is printed in a neat tabular format using formatted printf() statements.

7)Program Termination
If the user selects option 2 from the menu, the program displays "Program Exited." and terminates normally.

