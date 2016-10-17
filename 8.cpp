#include <iostream>

using namespace std;

int main()
{
    double widgetWeight = 12.5;
    double palletWeight;


    cout << "The pallet weight: ";
    cin >> palletWeight;

    double widgetFinal = palletWeight / 12.5;

    cout << "Numbers of widget stacked on the pallet: " << widgetFinal <<endl;

    return 0;
}
