
using namespace std;
#include <iostream>
#include <string>
#include <iomanip>


int main() {

    string book[5];
    string author[5];
    double price[5];
    char monies = '$';

    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter the title of book " << i + 1 << ": ";
        getline(cin, book[i]);
        cout << endl;
        cout << "Who is the auther of '" << book[i]
             << "'? (Last name, followed by a space and first initial): ";
        getline(cin, author[i]);
        cout << endl;
        cout << "How much is '" << book[i] << "'?: $";
        cin >> price[i];
        cout << endl << endl;

        cin.get();

        system("cls");
    }

    //now a loop to output the 5 books

    for (int i = 0; i < 5; i++)
    {
        cout << setfill('.');
        cout << left;
        cout << setw(40) << book[i] << setw(20) << author[i] << monies
             << setfill(' ') << setw(7) << fixed << setprecision(2) << price[i];
        cout << endl << endl;
    }

    system("PAUSE");

    return 0;
}