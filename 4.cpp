#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string monthOne, monthTwo, monthThree;
    float inchOne, inchTwo, inchThree;

    cout <<"Type the month(1): \n";
    cin >> monthOne;
    cout <<"Inches: \n";
    cin >>inchOne;
    cout << "Type the month(2): \n";
    cin >> monthTwo;
    cout <<"Inches: \n";
    cin>> inchTwo;
    cout <<"Type the month(3): \n";
    cin >> monthThree;
    cout <<"Inches: \n";
    cin >> inchThree;

    float average =   (inchOne+inchTwo+inchThree) / 3;

    cout << setprecision(2) << fixed << showpoint << right;
    cout << "The average for " << monthOne <<", "<<monthTwo<<", and "<<monthThree<< " is " <<average << " inches.\n";
    return 0;
}
