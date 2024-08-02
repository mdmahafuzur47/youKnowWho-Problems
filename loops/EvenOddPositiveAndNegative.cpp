#include <iostream>
using namespace std;

int main()
{

    int n, i=1, even = 0, odd = 0, pos = 0, neg = 0;
    long long num;
    cin >> n;
    while (i <= n)
    {
        cin >> num;
        if (num % 2 == 0)
        {
            even++;
        }
        else if (num % 2 != 0)
        {
            odd++;
        }
        if (num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
        }
        i++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}