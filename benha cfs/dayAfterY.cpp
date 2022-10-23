#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 0;
    int y = 0;
    int days = 0;
    cin >> x >> y;
    days = x + y;
    cout << ((days >= 7) ? (days % 7) : days) << endl;
    return 0;
}
