#include <iostream>

using namespace std;

int main()
{
    int n;
    int largestNum = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        cout << endl;
        if (n > largestNum)
        {
            largestNum = n;
        }
    }
    cout << largestNum << endl;
    return 0;
}
