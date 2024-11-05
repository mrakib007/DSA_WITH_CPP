#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4];

    int arr2[3][5];
    cin >> arr2[0][0] >> arr2[0][1] >> arr2[0][2] >> arr2[0][3] >> arr2[0][4];
    cin >> arr2[1][0] >> arr2[1][1] >> arr2[1][2] >> arr2[1][3] >> arr2[1][4];
    cin >> arr2[2][0] >> arr2[2][1] >> arr2[2][2] >> arr2[2][3] >> arr2[2][4];
    cout << arr2[0][0] << " " << arr2[0][1] << " " << arr2[0][2] << " " << arr2[0][3] << " " << arr2[0][4] << endl;
    cout << arr2[1][0] << " " << arr2[1][1] << " " << arr2[1][2] << " " << arr2[1][3] << " " << arr2[1][4] << endl;

    return 0;
}