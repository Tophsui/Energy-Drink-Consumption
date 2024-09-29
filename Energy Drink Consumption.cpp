#include <iostream>
using namespace std;

int main() {
    // Constants for survey data
    const int TOTAL_CUSTOMERS = 16500;
    const double PURCHASE_PERCENT = 0.15;
    const double PREFER_CITRUS_PERCENT = 0.58;

    // Calculate the number of customers who purchase energy drinks
    int customers_purchase = TOTAL_CUSTOMERS * PURCHASE_PERCENT;

    // Calculate the number of customers who prefer citrus flavor
    int customers_prefer_citrus = customers_purchase * PREFER_CITRUS_PERCENT;

    // Display the results
    cout << "Approximate number of customers who purchase energy drinks per week: " << customers_purchase << endl;
    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: " << customers_prefer_citrus << endl;

    return 0;
}
