#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            int even = 0,odd=0,opt=0;
            for (int i = 0; i < n; i++)
            {
                if(arr[i]%2 == 0){
                    even++;
                }else{
                    odd++;
                }
            }

            cout<<even<<" "<<odd<<endl;
        }
    }

    return 0;
}