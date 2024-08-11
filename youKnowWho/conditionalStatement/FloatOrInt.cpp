#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float n;
    cin >> n;

    cout << n - int(n) << endl;
    if (n - int(n) == 0)
    {
        cout << "int " << int(n) << endl;
    }
    else
    {
        cout << "float " << int(n) << " " << fixed << setprecision(3) << n - int(n) << endl;
    }

    return 0;
}