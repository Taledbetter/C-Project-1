//Chapter 5 & 6, Project 3 
//File:Project3.cpp
//Programmer:Tiffany Ledbetter
//Date: 4/14/2023

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variables
    string first_name;
    string last_name;
    string course_ID;
    double final_grade = 0;
    double lab_average = 0;
    double test_average = 0;
    double project_average = 0;
    double exam_score = 0;

    // Display Menu
    cout << "\n\t\tGrade Category Menu\n\n"
        << "Grade Categories\n\n"
        << "1. Lab: \n"
        << "2. Project: \n"
        << "3. Test: \n"
        << "4. Final Exam: \n"
        << "5. Quit: \n";

    // Enter Grading Averages
    cout << "Enter Lab average: ";
    cin >> lab_average;
    cout << "Enter Project Average: ";
    cin >> project_average;
    cout << "Enter Test Average: ";
    cin >> test_average;
    cout << "Enter Final Exam: ";
    cin >> exam_score;

    // Calculate Final Grade
    final_grade = (lab_average * 0.3) + (test_average * 0.3) + (project_average * 0.3) + (exam_score * 0.1);

    // Input from the Instructor
    cout << "Enter the student's first name: ";
    cin >> first_name;
    cout << "Enter the student's last name: ";
    cin >> last_name;
    cout << "Enter the student's Course ID: ";
    cin >> course_ID;

    // Grade Point Scale
    const int A_score = 90,
        B_score = 80,
        C_score = 70,
        D_score = 60,
        min_score = 0,
        max_score = 100;

    // Determine the letter grade
    char grade_letter;
    if (final_grade >= A_score)
        grade_letter = 'A';
    else if (final_grade >= B_score)
        grade_letter = 'B';
    else if (final_grade >= C_score)
        grade_letter = 'C';
    else if (final_grade >= D_score)
        grade_letter = 'D';
    else
        grade_letter = 'F';

    // Output
    cout << "Hello " << first_name << " " << last_name << endl;
    cout << "The course ID is " << course_ID << endl;
    cout << "The final calculated grade: " << final_grade << endl;
    cout << "The final letter grade: " << grade_letter << endl;

    return 0;
}
