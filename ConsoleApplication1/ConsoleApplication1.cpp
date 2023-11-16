#include <iostream>
using namespace std;

int main()
{
    // variables
    string student_name;
    char camp_package;
    double package_hours = 0;
    double additional_hours = 0;
    double package_price = 0;

    // constants
    double campA_price = 200.00;
    double campB_price = 275.00;
    double campC_price = 350.00;

    int campA_hours = 20;
    int campB_hours = 30;
    int campC_hours = 40;

    // DISPLAY Packages
    cout << "\t\tCamp Packages Menu\n\n"
        << "Camp A: Price: $200, Hours: 20, Competitions: 1, Additional tutoring: $10 per hour\n"
        << "Camp B: Price: $275, Hours: 30, Competitions: 2, Additional tutoring: $5 per hour\n"
        << "Camp C: Price: $350, Hours: 40, Competitions: 3, Additional tutoring: $0\n";

    // Get input from user
    cout << "Enter name of student: ";
    cin >> student_name;
    
    while (true)
    {
        cout << "Enter Camp package (A, B, or C): ";
        cin >> camp_package;
        if (camp_package == 'A' || camp_package == 'B' || camp_package == 'C')
            break; // Valid input, exit loop
        else
            cout << "Invalid input. Please enter A, B, or C.\n";
    }

    // Camp packages if/else
    if (camp_package == 'A')
    {
        package_hours = campA_hours;
        cout << "Enter additional hours: ";
        cin >> additional_hours;
        package_price = campA_price + additional_hours * 10;
    }
    else if (camp_package == 'B')
    {
        package_hours = campB_hours;
        cout << "Enter additional hours: ";
        cin >> additional_hours;
        package_price = campB_price + additional_hours * 5;
    }
    else if (camp_package == 'C')
    {
        package_hours = campC_hours;
        // No additional hours for camp C
        package_price = campC_price;
    }

    // Output
    cout << "Name: " << student_name << endl;
    cout << "Programming package choice: " << camp_package << endl;
    cout << "Number of hours included: " << package_hours << endl;
    cout << "Number of additional hours: " << additional_hours << endl;
    cout << "Price of package: " << package_price << endl;

    return 0;
}
