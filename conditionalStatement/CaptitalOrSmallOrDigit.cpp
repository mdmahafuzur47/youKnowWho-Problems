#include <iostream>
using namespace std;

int main()
{

    char x;
    cin >> x;

    if (int(x) >= 48 && int(x) < 65)
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (int(x) >= 65 && int(x) < 97)
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}