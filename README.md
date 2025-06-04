This project is a Student Report Card Generator developed in the C programming language. It serves as a console-based tool for generating and displaying a student's academic report card based on marks entered for five subjects. This program is ideal for beginners learning C, as it covers core programming concepts such as user input, decision-making, basic validation, and formatted output.

When executed, the program begins by prompting the user to enter essential student information:

Roll Number

Name

Class

Once these details are entered, the user is given a choice:

Enter Marks

Exit the Program

If the user chooses to enter marks, the program sequentially asks for the scores in the following five subjects:

Mathematics

Physics

Chemistry

English

Computer Science

After entering the marks, the program performs a validation check to ensure that none of the entered marks exceed 100, which is the maximum allowed per subject. If any subject mark is greater than 100, the program alerts the user with an "Invalid marks entered!" message and terminates.

If all marks are valid, the program calculates:

Total Marks: The sum of all five subject marks.

Percentage: Total marks divided by the number of subjects (5), calculated as a floating-point number.

Grade: Assigned based on the percentage as per the following scale:

A+ : 90 and above

A : 80 to 89

B : 70 to 79

C : 60 to 69

D : 50 to 59

F : Below 50

In addition to overall percentage, the program also checks if the student has scored at least 45 marks in each subject. If the student scores below 45 in even a single subject, they are marked as "Fail", regardless of their overall percentage. Otherwise, a student with at least 50% and no failing subject is marked as "Pass".

Finally, the report card is printed in a clean, tabular format showing:

Student details (Roll No, Name, Class)

Individual marks for each subject

Total marks

Percentage

Grade

Pass/Fail status

🎯 Educational Purpose
This project is a great exercise in:

Working with basic I/O in C (scanf and printf)

Applying conditional logic (if, else if, else)

Validating user input

Using flags (failFlag) to control program flow

Presenting output in a user-friendly, formatted style

It's especially useful for computer science students looking to strengthen their foundation in C programming.

💡 Future Enhancements (Ideas)
Support for multiple students in a single session

File I/O to save report cards to a text file

GUI version using C with graphics libraries or integration with other platforms

Add subject name inputs and variable number of subjects

