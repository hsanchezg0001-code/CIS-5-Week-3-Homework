// Name: Herberth Sanchez-Gomez
// Week: Week 03 - Types & Variables

#include <iostream>
#include <string>

int main() {
    // Lab 3 variables
    std::string name = "Herberth";
    int age = 24;
    double height_m = 1.75;
    char initial = 'H';
    bool student = true;
    const int CURRENT_YEAR = 2026; //The year is fixed for this semester and should never change during runtime.

    // Week 3 additions
    int credits = 12;      // Credits are counted as whole, non-fractional numbers.
    double gpa = 3.2;    // GPA requires decimal precision.

    // Value change demonstration
    // credits started at 12. I changed it to 15. The console displays 15 because cout outputs the current value stored in the variable credits, not the initial assignment.
    credits = 15;

    // Output formatted block
    std::cout << "=== About me ===" << std::endl;
    std::cout << "Name: " << name << " (" << initial << ".)" << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height_m << " m" << std::endl;
    std::cout << "Active Student: " << std::boolalpha << student << std::endl;
    std::cout << "Credits: " << credits << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Year: " << CURRENT_YEAR << std::endl << std::endl;

    // Readable short paragraph
    std::cout << name << " is " << age << " years old, currently taking " 
              << credits << " credits in " << CURRENT_YEAR 
              << ", and holds a " << gpa << " GPA." << std::endl;

    // Two lines that would not compile:
    // int bad_age = "twenty-four"; // Compile error: A string literal cannot be assigned to an integer variable.
     //CURRENT_YEAR = 2027;         // Compile error: Assignment of read-only variable 'CURRENT_YEAR' (marked const).

return 0;
}