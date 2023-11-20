#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    sort(times.begin(), times.end());
    long long left = times.front(), right = (long long)times.front() * n; // Ž�� ���� ���ϱ�
    long long time, people;
    while (left <= right)
    {
        people = 0;
        time = (left + right) / 2;
        for (auto t : times)
            people += time / t; // �־��� �ð����� ä�� ���ִ� ��� �� ���ϱ�

        if (people >= n) // �־��� �ð����� n�� �̻� ä�� �� �ִٸ�
        {
            right = time - 1;
        }
        else // �־��� �ð����� n���� ä��� ��ƴٸ�
        {
            left = time + 1;
        }
    }
    return left;
}