#include <iostream>
using namespace std;

int main()
{

    long long x, pass = 1999;

    while (true)
    {
        cin >> x;
        if (x == pass)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}