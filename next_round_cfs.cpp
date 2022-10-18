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
    vector<string> userInput = takeMultipleLines();
    int numberOfWinners = 0;

    for (size_t i = 0; i < userInput[1].length(); i += 2)
    {
        ((int(userInput[1][i]) - 48 > 0) & (int(userInput[1][i]) - 48 >= int(userInput[0][2]) - 48)) && (numberOfWinners++);
    }
    cout << numberOfWinners << endl;

    return 0;
}
