#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] = '\0'; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout << str << endl;

    return 0;
}