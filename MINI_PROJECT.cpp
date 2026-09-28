#include <iostream>
#include <string>
using namespace std;

// Function to calculate total marks
int calculateTotal(int marks[], int n)
{
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        total += marks[i];
    }

    return total;
}

// Function to find highest marks
int findHighest(int marks[], int n)
{
    int highest = marks[0];

    for(int i = 1; i < n; i++)
    {
        if(marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

// Function to find lowest marks
int findLowest(int marks[], int n)
{
    int lowest = marks[0];

    for(int i = 1; i < n; i++)
    {
        if(marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

// Function to calculate grade
char calculateGrade(float percentage)
{
    if(percentage >= 90)
        return 'A';

    else if(percentage >= 80)
        return 'B';

    else if(percentage >= 70)
        return 'C';

    else if(percentage >= 60)
        return 'D';

    else if(percentage >= 50)
        return 'E';

    else
        return 'F';
}

int main()
{
    string name;
    int rollNo;
    int marks[5];

    // Taking student details
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> rollNo;

    // Taking marks
    cout << "Enter marks of 5 subjects:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Calculations
    int total = calculateTotal(marks, 5);

    float percentage = total / 5.0;

    int highest = findHighest(marks, 5);

    int lowest = findLowest(marks, 5);

    char grade = calculateGrade(percentage);

    // Display report
    cout << "\n\n";
    cout << "====================================\n";
    cout << "        STUDENT REPORT CARD\n";
    cout << "====================================\n";

    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << rollNo << endl;

    cout << "\nMarks:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : "
             << marks[i] << endl;
    }

    cout << "\nTotal      : " << total << " / 500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Highest    : " << highest << endl;
    cout << "Lowest     : " << lowest << endl;
    cout << "Grade      : " << grade << endl;

    if(grade == 'F')
        cout << "Result     : FAIL" << endl;
    else
        cout << "Result     : PASS" << endl;

    cout << "====================================\n";

    return 0;
}