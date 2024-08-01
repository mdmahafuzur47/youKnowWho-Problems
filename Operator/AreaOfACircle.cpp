#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double r, area, p = 3.141592653;
    cin >> r;
    area = p * r * r;
    cout << fixed << setprecision(9) << area << endl;

    return 0;
}