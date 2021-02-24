#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int subset = 1 << n;
        for (int i = 1; i < subset; i++)
        {
            int sum = 0;
            int pos = 0;
            int temp = i;
            while (temp > 0)
            {
                if (temp & 1){
                    sum = sum + a[pos];
                }
                pos++;
                temp = temp >> 1;
            }
            if (sum == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }

    return 0;
}
