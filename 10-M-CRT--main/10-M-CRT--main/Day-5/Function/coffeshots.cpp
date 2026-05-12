#include <iostream>
using namespace std;
int coffeevol(int shots)
{
    return shots * 30;
}
int main()
{
    int shots;
    cout << "enter no. of coffee shots : ";
    cin >> shots;

    cout << "Volume of coffee: " << coffeevol(shots) << " ml" << endl;
    return 0;
}