#include <iostream>
using namespace std;

void applydisc(double &bill)
{
    bill = bill - (bill * 0.10);
}
int main()
{
    double bill = 250.50;
    cout << bill << endl;
    applydisc(bill);
    cout << bill << endl;
    return 0;
}