#include <iostream>

using namespace std;

int main()
{
    double numOfMales, numOfFemales;
    cout << "Enter the number of males in the class: \n";
    cin >> numOfMales;
    cout <<"Enter the number of females in the class: \n";
    cin >> numOfFemales;

    double percentMales = (numOfMales / (numOfFemales+numOfMales)) * 100;
    double percentFemales = (numOfFemales / (numOfFemales+numOfMales)) * 100;

    cout << "Percentage of males: " << percentMales << "%\n";
    cout << "Percentage of females: " << percentFemales << "%\n";
    return 0;
}
