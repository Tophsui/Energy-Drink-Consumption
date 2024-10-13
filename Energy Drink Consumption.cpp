#include <iostream>
using namespace std;

int main() {
    // Constants
    const int TOTAL_CUSTOMERS_SURVEYED = 16500;
    const double ENERGY_DRINK_PERCENTAGE = 0.15; // 15% of customers purchase energy drinks
    const double CITRUS_PREFERENCE_PERCENTAGE = 0.58; // 58% prefer citrus flavor

    // Calculate the number of customers who purchase energy drinks
    int energyDrinkCustomers = TOTAL_CUSTOMERS_SURVEYED * ENERGY_DRINK_PERCENTAGE;

    // Calculate the number of customers who prefer citrus flavor
    int citrusPreferringCustomers = energyDrinkCustomers * CITRUS_PREFERENCE_PERCENTAGE;

    // Display the results
    cout << "Approximate number of customers who purchase one or more energy drinks per week: "
        << energyDrinkCustomers << endl;

    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: "
        << citrusPreferringCustomers << endl;

    return 0;
}