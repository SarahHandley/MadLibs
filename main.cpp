#include <iostream>

using namespace std;

int main()
{
    string noun;
    cout << "Enter noun:" << endl;
    cin >> noun;
    string adjective;
    cout << "Enter adjective:" << endl;
    cin >> adjective;
    string verb;
    cout << "Enter verb:" << endl;
    cin >> verb;
    cout << "The " << noun << " likes to " << verb << "." << endl;
    cout << "It makes the " << noun << " very " << adjective << "." << endl;
    return 0;
}
