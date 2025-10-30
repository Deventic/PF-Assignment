#include <iostream>
using namespace std;

int main() {
    int choice, cups, totalbefore, pricepercup, userId;
    double totalafter, GST;
    bool wantextrasugar, wantwhippedcream;
    char selection, continueOrder;
    const int Espresso = 230;
    const int Cappuccino = 250;
    const int Latte = 150;
    const int extrasugar = 30;
    const int whippedcream = 50;

    cout << "Enter starting User ID: ";
    cin >> userId;

    do {
        wantextrasugar = false;
        wantwhippedcream = false;

        do {
            cout << "\nEnter type of coffee (1 = Espresso, 2 = Cappuccino, 3 = Latte): ";
            cin >> choice;
        } while (choice != 1 && choice != 2 && choice != 3);

        cout << "Enter number of cups: ";
        cin >> cups;

        if (choice == 1)
            pricepercup = Espresso;
        else if (choice == 2)
            pricepercup = Cappuccino;
        else
            pricepercup = Latte;

        cout << "Want extra sugar? Y/N (Default = N): ";
        cin >> selection;
        if (selection == 'Y' || selection == 'y')
            wantextrasugar = true;

        cout << "Want whipped cream? Y/N (Default = N): ";
        cin >> selection;
        if (selection == 'Y' || selection == 'y')
            wantwhippedcream = true;

        totalbefore = pricepercup * cups;
        if (wantextrasugar)
            totalbefore += extrasugar * cups;
        if (wantwhippedcream)
            totalbefore += whippedcream * cups;

        GST = totalbefore * 0.2;
        totalafter = totalbefore + GST;

        cout << "\n-------------------- ORDER DETAILS --------------------\n";
        cout << "User ID: " << userId << endl;
        cout << "Coffee Type: ";
        if (choice == 1)
            cout << "Espresso";
        else if (choice == 2)
            cout << "Cappuccino";
        else
            cout << "Latte";
        cout << endl;
        cout << "Number of cups: " << cups << endl;
        cout << "Extra sugar: " << (wantextrasugar ? "Yes" : "No") << endl;
        cout << "Whipped cream: " << (wantwhippedcream ? "Yes" : "No") << endl;
        cout << "Subtotal: Rs. " << totalbefore << endl;
        cout << "GST (20%): Rs. " << GST << endl;
        cout << "Total Bill: Rs. " << totalafter << endl;
        cout << "-------------------------------------------------------\n";

        userId++;

        cout << "\nDo you want to order again? (Y/N): ";
        cin >> continueOrder;

    } while (continueOrder == 'Y' || continueOrder == 'y');

    cout << "\nThank you for visiting FAST Hub!\n";

    return 0;
}
