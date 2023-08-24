#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, input;

    cin >> n >> m;

    vector<vector<int>> matrix;

    for (int i = 0; i < n; i++)
    {
        vector<int> element(m);

        matrix.emplace_back(element);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> input;
            cout << matrix[i][j] + input << ' ';
        }

        cout << '\n';
    }
}