#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, city, college, profession, animal, petName;
    int age;

    cout << "Name: \n";
    cin>> name;
    cout <<"Age: \n";
    cin>>age;
    cout <<"City: \n";
    cin >>city;
    cout <<"College: \n";
    cin >> college;
    cout << "Profession: \n";
    cin >> profession;
    cout << "Animal: \n";
    cin >> animal;
    cout << "Pet name: \n";
    cin >> petName;

    cout << "There once a person named " << name << " who lived in " << city <<
    " At the age of " << age << ", " <<name<< " went to college. " << name <<
    " graduated and went to work as a " << profession << ". Then, " <<name<<
    " adopted a(n) "<<animal<< " named "<<petName<< ". They both loved happily ever after!";

    return 0;
}
