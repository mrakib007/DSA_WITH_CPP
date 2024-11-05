#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << " *";
            }
            cout << endl;
        }
        t--;
    }
    return 0;
}
