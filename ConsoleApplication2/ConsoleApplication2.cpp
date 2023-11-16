//Chapter 5, Lab 1
//Filename:VirusPrep.cpp
//Programmer:Tiffany Ledbetter
//Date:3/23/2023

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables
    int virus_choice;
    int COVID_choice = 1,
        Flu_choice = 2,
        RSV_choice = 3,
        Quit_choice = 4;
    int report_period = 1;
    double number_infected;
    double running_total = 0;


    //display menu
    cout << "\n\t\tVirus Menu\n\n"
        << "1.COVID\n"
        << "2.Flu\n"
        << "3.RSV\n"
        << "4.Quit option\n\n";


    // Input from user
    cout << "Enter a number for virus option: ";
    cin >> virus_choice;

    // Loop for virus option

    while (virus_choice != Quit_choice)
    {
        cout << "Enter the number of people infected: ";
        cin >> number_infected;

        cout << "Number of people infected: " << number_infected << endl;

        // Projection for 30 days
        for (int day = 1; day <= 30; ++day)
        {
            running_total += number_infected;
            if (day % 5 == 0)
            {
                cout << "Total number of people infected after " << day << "-day period: " << running_total << endl;
                report_period++;
            }
        }

        // Get input for the next iteration
        cout << "\nEnter a number for virus option: ";
        cin >> virus_choice;
    }

    // Display the table
    cout << "Week   Number infected\n";
    cout << "-----------------------------\n";
    for (int week = 1; week <= 6; ++week)
    {
        cout << "Week " << week << ": " << number_infected + 100 << endl;
    }

    //Output
    cout << "Virus chosen: " << virus_choice << endl;
    cout << "The number of infected per 5-day period: " << number_infected << endl;
    cout << "Week: " << report_period << endl;
    cout << "The number infected: " << number_infected << endl;
    cout << "The total of individuals infected: " << running_total << endl;

    return 0;
}
