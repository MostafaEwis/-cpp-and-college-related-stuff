#include <iostream>

using namespace std;

int main()
{
    int arrL = 5;
    int twod[arrL][arrL] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
    };
    int sum = 0;
    for (size_t i = 0; i < arrL; i++)
    {
        bool regRow = (i == 0 || i == (arrL - 1));
        for (size_t j = 0; j < (regRow ? arrL : 2); j++)
        {
            regRow ? (sum += twod[i][j]) : (sum += ((j == 0) ? (twod[i][0]) : (twod[i][arrL - 1])));
        }
    }
    cout << sum << endl;
    return 0;
}
