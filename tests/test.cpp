#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }

    for (auto &&j : a)
    {
        cout << j << " ";
    }

    return 0;
}