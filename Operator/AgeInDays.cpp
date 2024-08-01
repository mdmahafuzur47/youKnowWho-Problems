#include <iostream>
using namespace std;

int main()
{

    long long age, y, m, d, remain;
    cin >> age;

    y = age / 365;
    remain = age % 365;
    m = remain / 30;
    d = remain % 30;

    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;

    return 0;
}