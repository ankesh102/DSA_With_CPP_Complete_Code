// In this section i am going to design a cal. that will calculate that how many note is required to fullfill that amount

#include <iostream>
using namespace std;

int main()
{

    int note;
    int Rs100, Rs50, Rs20, Rs1;
    cout << "Please Enter amount : " << endl;
    cin >> note;
    switch (1)
    {
    case 1:
        Rs100 = note / 100;
        note = note - (Rs100 * 100);
        cout << "The count of  Rs. 100 note is : " << Rs100 << endl;

    case 2:
        Rs50 = note / 50;
        note = note - (Rs50 * 50);
        cout << "The count of Rs50 is " << Rs50 << endl;
    case 3:
        Rs20 = note / 20;
        note = note - (Rs20 * 20);
        cout << "The count of Rs20 is " << Rs20 << endl;
    case 4:
        Rs1 = note / 1;
        cout << "The count of Rs1 is :" << Rs1 << endl;
    default:
        cout << "The total count of note is " << (Rs100 + Rs50 + Rs20 + Rs1) << endl;
        cout << "Counted Successfully " << endl;
    }

    return 0;
}