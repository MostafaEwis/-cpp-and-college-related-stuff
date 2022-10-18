#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string> takeMultipleLines()
{
    vector<string> lines;
    string line;
    do
    {
        line = "";
        getline(cin, line);
        lines.push_back(line);
    } while (!line.empty());
    return lines;
}

int main()
{
    vector<string> c = takeMultipleLines();
    int x = 0;
    for (size_t i = 1; i < int(c[0][0]) - 48 + 1; i++)
    {
        if (c[i][0] == 'x' || c[i][0] == 'X')
        {
            (c[i][1] == '-') ? (x--) : (x++);
        }
        else if (c[i][0] == '-')
        {
            x--;
        }
        else
        {
            x++;
        }
        cout << x << endl;
    }
    return 0;
}