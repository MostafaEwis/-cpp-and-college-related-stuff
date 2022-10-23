#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int s;
    long long int mintues = 0;
    long long int hours = 0;
    long long int seconds = 0;

    cin >> s;
    hours = (s - (s % (60 * 60))) / 60 / 60;
    s -= hours * 60 * 60;
    mintues = (s - (s % 60)) / 60;
    s -= mintues * 60;
    cout << hours << " " << mintues << " " << s << endl;
    return 0;
}