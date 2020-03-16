#include <iostream>

using namespace std;

int numer_dnia;
int main() {
    cout << "Podaj numer dnia tygdonia: " << endl;
    cin >> numer_dnia;
    switch (numer_dnia)
    {
        case 1:
        case 2:
        case 3:
            cout << "Od poniedzialku do srody sklep jest otwarty od 8.00 do 20.00" << endl;
            break;
        case 4:
            cout << "W czwartki sklep jest otwarty od 9.00 do 20.00" << endl;
            break;
        case 5:
            cout << "W piatki sklep jest otwarty od 7.00 d0 22.00" << endl;
            break;
        case 6:
        case 7:
            cout << "W sobote i w niedziele sklep jest zamkniety" << endl;
            break;
        default:
            cout << "Bledny numer tygodnia!" << endl;
    }
    cout << "TEST" << endl;
    cout << "TEST BRANCH, First Branch" << endl;
    return 0;
}










