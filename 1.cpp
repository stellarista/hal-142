#include <iostream>

using namespace std;

int main()
{
    int gallons;
    double miles;

    cout << "Enter the number of gallons of gas: \n";
    cin >> gallons;
    cout << "Enter miles the car can handle with full tank: \n";
    cin >> miles;
    cout <<"The car can drive " << miles / gallons <<" miles with this much gallons of gas.\n";
    return 0;
}
