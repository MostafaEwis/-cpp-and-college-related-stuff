#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int n = 0;
    cin >> n;
    long long int e_num;
    if (n % 2 == 0)
    {
        e_num = n / 2;
    }
    else
    {
        e_num = (n - 1) / 2;
    }
    cout << (e_num * (e_num + 1)) << endl;
    return 0;
}
