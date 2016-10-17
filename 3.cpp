#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int one, two, three;
    cout <<"Please input the text scores.\n";
    cout <<"Score one: \n";
    cin >> one;
    cout <<"Score two: \n";
    cin >> two;
    cout << "Score three: \n";
    cin >> three;

    float total = (one+two+three)/3;
    cout << setprecision(1) << fixed << showpoint;
    cout << "The average of score: "<< total <<endl;

}
