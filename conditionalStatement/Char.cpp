#include <iostream>
using namespace std;

int main()
{

    char x;
    cin >> x;
    if (int(x) < 97)
    {
        cout << char(int(x) + 32) << endl;
    }
    else
    {
        cout << char(int(x) - 32) << endl;
    }

    return 0;
}