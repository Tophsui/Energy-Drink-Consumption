#include <iostream>
using namespace std;

int main() {
    // Variables for user input
    int totalCustomersSurveyed;
    const double ENERGY_DRINK_PERCENTAGE = 0.15; // 15% of customers purchase energy drinks
    const double CITRUS_PREFERENCE_PERCENTAGE = 0.58; // 58% prefer citrus flavor

    // Get input from user
    cout << "Enter the total number of customers surveyed: ";
    cin >> totalCustomersSurveyed;

    // Calculate the number of customers who purchase energy drinks
    int energyDrinkCustomers = totalCustomersSurveyed * ENERGY_DRINK_PERCENTAGE;

    // Calculate the number of customers who prefer citrus flavor
    int citrusPreferringCustomers = energyDrinkCustomers * CITRUS_PREFERENCE_PERCENTAGE;

    // Display the results
    cout << "Approximate number of customers who purchase one or more energy drinks per week: "
        << energyDrinkCustomers << endl;

    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: "
        << citrusPreferringCustomers << endl;

    return 0;
}