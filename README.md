# Student Management System

This C program is a simple command-line based student management system. It allows the user to perform various operations on student data such as adding, finding, updating, and deleting student details, as well as finding students enrolled in a particular course and saving the data to a file.

## Features

- **Add Student**: Add a new student's details including first name, last name, roll number, CGPA, and course IDs.
- **Find by Roll Number**: Retrieve the details of a student by their roll number.
- **Find by First Name**: Retrieve the details of a student by their first name.
- **Find by Course ID**: Retrieve the details of students enrolled in a particular course.
- **Total Number of Students**: Display the total number of students currently stored.
- **Delete Student**: Remove a student's details using their roll number.
- **Update Student**: Update a student's details using their roll number.
- **Save to File**: Save all student data to a file (`students.txt`).

## How It Works

1. **Add Student**: When adding a student, you will be prompted to enter the first name, last name, roll number, CGPA, and course IDs for five courses. Input validation ensures that the entered data is within the expected range.
   
2. **Find Student by Roll Number**: Enter a roll number to search for a student. If found, their details will be displayed.
   
3. **Find Student by First Name**: Enter a first name to search for a student. If found, the details of all students with that first name will be displayed.
   
4. **Find Students by Course ID**: Enter a course ID to find all students enrolled in that course. The details of the students will be displayed.
   
5. **Total Number of Students**: Displays the total number of students stored and the remaining capacity for new students (maximum 50).
   
6. **Delete Student**: Enter the roll number of the student you want to delete. If found, their data will be removed from the system.
   
7. **Update Student**: Enter the roll number of the student whose details you want to update. You can update their first name, last name, roll number, CGPA, or course IDs.

8. **Save to File**: After every operation, the current student data is written to a file named `students.txt`.

## Code Structure

- **Main Structure (`struct sinfo`)**: Stores student information including first name, last name, roll number, CGPA, and course IDs.
- **Functions**:
  - `clear_input_buffer()`: Clears the input buffer to avoid unwanted input issues.
  - `get_valid_choice()`: Ensures the user enters a valid menu option.
  - `add_student()`: Adds a new student to the system.
  - `findrollno()`: Finds and displays a student by their roll number.
  - `findfirstname()`: Finds and displays students by their first name.
  - `findcourse()`: Finds and displays students by a course ID.
  - `findtotal()`: Displays the total number of students.
  - `deletestudent()`: Deletes a student by their roll number.
  - `updatestudent()`: Updates a student's details by their roll number.
  - `write_to_file()`: Writes all student data to a file named `students.txt`.
