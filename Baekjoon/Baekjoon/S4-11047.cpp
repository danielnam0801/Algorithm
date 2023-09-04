#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, cnt = 0;

    int a[10]{ 0 };
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        a[i] = value;
    }

    sort(a, a + 10);

    for (int i = 9; i >= 0; i--) {
        if (k <= 0) {
            break;
        }
        else if (a[i] <= k) {
            while (a[i] <= k) {
                k -= a[i];
                cnt++;
            }
        }
    }
    cout << cnt;
}