#include <iostream>

using namespace std;

int main()
{
    int arrL = 0;
    cout << "Enter array length : ";
    cin >> arrL;
    int i = arrL * arrL;
    int twod[arrL][arrL];
    int *p_twod = &twod[0][0];
    for (size_t j = 0; j < i; j++)
    {
        *(p_twod + j) = (j + 1);
    }

    int sum = 0;
    int n = 1;
    while (n < i)
    {
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
            break;
        }

        if (!firstSpecialBlock && !secondSpecialBlock)
        {
            sum += (*(p_twod + n - 1) + *(p_twod + n));
            n += (arrL);
        }
    }

    cout << sum << endl;
    return 0;
}
