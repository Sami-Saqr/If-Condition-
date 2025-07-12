#include <iostream>
using namespace std;

int main() {
    int d;
    cin >> d;

    if (d == 1)
        cout << "Sunday" << endl;
    else if (d == 2)
        cout << "Monday" << endl;
    else if (d == 3)
        cout << "Tuesday" << endl;
    else if (d == 4)
        cout << "Wednesday" << endl;
    else if (d == 5)
        cout << "Thursday" << endl;
    else if (d == 6)
        cout << "Friday" << endl;
    else if (d == 7)
        cout << "Saturday" << endl;
    else
        cout << "Invalid day number" << endl;

    return 0;
}
