/*
 * Class: CMSC140 CRN 21086
 * Instructor: Chwen-Huey Wu
 * Project<1>
 * Description: The Department plans to purchase a humanoid robot. The Chairman would like you to write a program to show a greeting script the robot can use later. Your first task is—using a script—to prototype the robot for presentation.
 * Due Date: 26/09/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Sebastian Ashcallay
 * Pseudocode or Algorithm for the program:
  1. Ask user for their name
  2. Read input into <visitorName>
  3. Respond user with personal greeting
  4. Ask user for age of important person/pet for game purposes
  5. Read input into <petOrPersonAge>
  6. Respond user with age entered
  7. Calculate <ageYears> as <petOrPersonAge> times <HUMAN_YEARS>
  8. Calculate <ageMonths> as <ageYears> times 12
  9. Calculate <ageDays> as <ageMonths> times <DAYS_OF_MONTH>
  10. Calculate <ageHours> as <ageDays> times 24
  11. Calculate <ageMinutes> as <ageHours> times 60
  12. Calculate <ageSeconds> as <ageMinutes> times 60
  13. Calculate <ageDogYears> as <ageYears> times <DOG_YEARS>
  14. Calculate <ageGfishYears> as <ageYears> times <GFISH_YEARS>
  15. Display <ageYears>, <ageMonths>, <ageDays>, <ageHours>, <ageMinutes>, <ageSeconds>, <ageDogYears>, <ageGfishYears>
  16. Ask user for whole number for second game
  17. Read input into <num1>
  18. Ask user for another whole number
  19. Read input into <num2>
  20. Calculate <numAdd> as the sum of <num1> and <num2>
  21. Calculate <numDivide> as the division of <num1> by <num2>
  22. Calculate <numDivideDouble> as the <double> data-type division of <num1> and <num2>
  23. Display <numAdd> and <numDivide>
  24. Display <numDivideDouble> with 1 decimal place
  25. Display closing remarks, Programmer Name, Project Name, and Due Date
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int HUMAN_YEARS = 1; //Age factor of human age
const int DAYS_OF_MONTH = 30; //Standard number of days in one month
const int MONTHS_CALENDAR_YR = 12; //Number of months for each calendar year
const int HRS_PER_DAY = 24; //Number of hours for each day
const int MIN_PER_HOUR = 60; //Number of minutes for each hour
const int SECONDS_PER_MIN = 60; //Number of seconds for each minute
const int DOG_YEARS = 7; //Age factor of dog age
const int GFISH_YEARS = 5; //Age factor of goldfish age
const int ASSIGNMENT_NUMBER = 1; //Project number
const string DUE_DATE = "26/09/2022"; //Due date

int main() {

    string robotName = "Jake"; //Robot's name
    string programmerName = "Sebastian Ashcallay"; //Programmer's name
    string visitorName;
    int petOrPersonAge, ageYears, ageMonths, ageDays, ageHours, ageMinutes, ageSeconds, ageDogYears, ageGfishYears;
    int numDivide, numAdd, num1, num2;
    double numDivideDouble;
    //Variables for this program

    cout << "************************ Robot Prototype Scripting **********************" << endl;
    cout << "\nHello, welcome to Montgomery College! My name is " << robotName << ". May I have your name?" << endl;
    getline(cin, visitorName); //Enter visitor's name

    cout << "\nNice to have you with us today, " << visitorName << "!" << endl << "Let me impress you with a small game.\nGive me the age of an important person or a pet to you.\nPlease only give me a number:" << endl;
    cin >> petOrPersonAge; //Enter desired age for first game

    cout << "\nYou have entered " << petOrPersonAge << "." << endl;
    ageYears = petOrPersonAge * HUMAN_YEARS; //Age in human years
    ageMonths = ageYears * MONTHS_CALENDAR_YR; //Age in months
    ageDays = ageMonths * DAYS_OF_MONTH; //Age in days
    ageHours = ageDays * HRS_PER_DAY; //Age in hours
    ageMinutes = ageHours * MIN_PER_HOUR; //Age in minutes
    ageSeconds = ageMinutes * SECONDS_PER_MIN; //Age in seconds
    ageDogYears = ageYears * DOG_YEARS; //Age in dog years
    ageGfishYears = ageYears * GFISH_YEARS; //Age in goldfish years

    cout << "If this is for a person, the age can be expressed as:\n"
        << ageYears << " years" << endl << "or " << ageMonths << " months" << endl
        << "or about " << ageDays << " days" << endl << "or about " << ageHours << " hours" << endl
        << "or about " << ageMinutes << " minutes" << endl << "or about " << ageSeconds << " seconds." << endl << "If this is for a dog, it is " << ageDogYears << " years old in human age.\nIf this is for a goldfish, it is " << ageGfishYears << " years old in human age.";
    //Outputs ages for all corresponding categories

    cout << "\n\nLet's play another game, " << visitorName << ". Give me a whole number." << endl;
    cin >> num1; //Enter first whole number for another game

    cout << "Very well. Give me another whole number." << endl;
    cin >> num2; //Enter second whole number

    numAdd = num1 + num2; //sum
    numDivide = num1 / num2; //quotient (int)
    numDivideDouble = static_cast<double>(num1) / static_cast<double>(num2);
    //quotient (double)

    cout << "\nUsing the operator '+' in C++, the result of " << num1 << " + " << num2 << " is " << numAdd << "." << endl;
    cout << "Using the operator '/', the result of " << num1 << " / " << num2 << " is " << numDivide << "." << endl;
    cout << "However, the result of " << showpoint << setprecision(1) << fixed << static_cast<double> (num1) << " / " << showpoint << setprecision(1) << fixed << static_cast<double> (num2) << " is about " << showpoint << setprecision(1) << fixed << numDivideDouble << "." << endl;
    //Outputs results for all corresponding mathematical operations

    cout << "\nThank you for testing my program!!" << endl
        << "PROGRAMMER: " << programmerName << endl
        << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl
        << "Due Date: " << DUE_DATE << endl;
    //Closing remarks and additional information

    return 0;

}
