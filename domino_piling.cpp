#include <iostream>
using namespace std;

int main()
{
    int h;
    int w;
    cin >> h;
    cin >> w;
    int numOfDom = (((h * w) % 2 == 0) ? (h * w) : ((h * w) - 1)) / 2;
    cout << numOfDom << endl;
    return 0;
}