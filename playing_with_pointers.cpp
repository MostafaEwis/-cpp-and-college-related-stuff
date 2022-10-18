#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int c = 33;
    int *pC = &c;
    cout << pC << "    " << *pC << endl;
    return 0;
}