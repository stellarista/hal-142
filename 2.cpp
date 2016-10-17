#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int classA = 15;
    int classB = 12;
    int classC = 9;

    int a, b ,c;

    cout << "How many tickets sold in Class A?\n";
    cin >> a;
    cout << "How many tickets sold in Class B?\n";
    cin >> b;
    cout << "How many tickets sold in Class C?\n";
    cin >> c;
       double total = (a*classA) + (b*classB) + (c*classC);
    cout << setprecision(2) << fixed << showpoint <<right;
    cout << "Total amount of income: $" << total << endl;


    return 0;
}
// still no comma :(
