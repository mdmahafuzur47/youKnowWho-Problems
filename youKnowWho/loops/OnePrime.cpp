#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long long x, result = true;
    cin >> x;

    if (x > 1)
    {
        for (int i = 3; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                result = false;
            }
        }
    }else{
        result=false;
    }

    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}