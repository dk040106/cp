#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int div = 2;
    while (N != 1)
    {
        if (N % div == 0)
        {
            cout << div << '\n';
            N /= div;
        }
        else
        {
            div++;
        }
    }
    return 0;
}