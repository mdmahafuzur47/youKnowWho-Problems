#include <iostream>
using namespace std;

int main()
{

    int n, i = 1;
    cin >> n;

    while (i <= 12)
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }

    return 0;
}