#include <iostream>
using namespace std;

int main()
{

    long long a, b, c, min, max, mid;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        max = a;
        if (b > c)
        {
            mid = b;
            min = c;
        }
        else
        {
            mid = c;
            min = b;
        }
    }
    else if (b >= a && b >= c)
    {
        max = b;
        if (a > c)
        {
            mid = a;
            min = c;
        }
        else
        {
            mid = c;
            min = a;
        }
    }
    else
    {
        max = c;
        if (a > b)
        {
            mid = a;
            min = b;
        }
        else
        {
            mid = b;
            min = a;
        }
    }

    cout << min << endl
         << mid << endl
         << max << endl
         << endl;
    cout << a << endl
         << b << endl
         << c;

    return 0;
}