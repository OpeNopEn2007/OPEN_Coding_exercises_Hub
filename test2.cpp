#include <iostream>
#include <string>
using namespace std;

string Swap(const string &str, int n, char opt)
{
    int len = str.length();
    if (len == 0)
        return str;
    n = n % len;
    string re;
    if (opt == 'R')
    {
        for (int i = len - n; i < len; i++)
        {
            re += str[i];
        }
        for (int i = 0; i < len - n; i++)
        {
            re += str[i];
        }
    }
    else if (opt == 'L')
    {
        for (int i = n; i < len; i++)
        {
            re += str[i];
        }
        for (int i = 0; i < n; i++)
        {
            re += str[i];
        }
    }
    else
        re = str;
    return re;
}

string out_odd(string str)
{
    string re;
    int len = str.length();
    for (int i = 0; i < len; i += 2)
    {
        re += str[i];
    }
    return re;
};

int main()
{
    string str, re;
    int N, n;
    char opt;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> str >> opt >> n;
        re = out_odd(Swap(str, n, opt));
        cout << re << endl;
    }

    return 0;
}