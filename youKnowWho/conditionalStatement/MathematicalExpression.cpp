#include <iostream>
using namespace std;

int main()
{

    long long a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    switch (s)
    {
    case '+':
        if (a + b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a + b << endl;
        }
        break;
    case '-':
        if (a - b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a - b << endl;
        }
        break;
    case '*':
        if (a * b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a * b << endl;
        }
        break;

    default:
        break;
    }

    return 0;
}