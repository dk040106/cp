#include <iostream>

using namespace std;

int main()
{
    int T; cin >> T;
    int arr[15][15] = {{ 0, }};

    for(int i=0; i<=14; i++) arr[0][i] = i;
    for(int i=1; i<=14; i++) 
        for(int j=1; j<=14; j++) 
            arr[i][j] = arr[i-1][j] + arr[i][j-1];

    while (T--)
    {
        int k, n; cin >> k >> n;
        cout << arr[k][n] << endl;
    }
    return 0;
}