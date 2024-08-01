#include <iostream>
using namespace std;

int main()
{

    int a, b;
    char s;
    cin>>a>>s>>b;

    switch (s)
    {
    case '>':
    {
        if (a > b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    break;
    case '<':
    {
        if (a < b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    break;
    case '=':
    {
        if (a == b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    break;
    default:
        break;
    }

    return 0;
}