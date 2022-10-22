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
    int *p_twod = &twod[0][0];
    int i = arrL * arrL;
    int n = 1;
    while (n < i)
    {
        cout << "n = " << n;
        bool firstSpecialBlock = (n == 1);
        bool secondSpecialBlock = (n == (i - arrL));
        if (firstSpecialBlock || secondSpecialBlock)
        {
            for (size_t j = 0; j < arrL + 1; j++)
            {
                sum += *(p_twod + n + j - 1);
            }
        }

        firstSpecialBlock && (n += (arrL + arrL - 1));
        if (secondSpecialBlock && !firstSpecialBlock)
        {
            cout << " sum = " << sum << endl;

            break;
        }

        if (!firstSpecialBlock && !secondSpecialBlock)
        {
            sum += (*(p_twod + n - 1) + *(p_twod + n));
            n += (arrL);
        }

        cout << " sum = " << sum << endl;
    }

    cout << sum << endl;
    return 0;
}
