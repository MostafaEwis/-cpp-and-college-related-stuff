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
    vector<string> inputs = takeMultipleLines();
    int problemSolved = 0;

    for (size_t i = 1; i < inputs.size() - 1; i++)
    {
        int assuranceNum = 0;
        for (size_t j = 0; j < 5; j += 2)
        {
            (int(inputs[i][j] - 48)) && (assuranceNum++);
        }
        (assuranceNum >= 2) && (problemSolved++);
        assuranceNum = 0;
    }
    cout << problemSolved << endl;
    return 0;
}
