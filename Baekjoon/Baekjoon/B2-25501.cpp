#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int recursion(const char* s, int l, int r, int& cnt) {
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else {
        cnt++;
        return recursion(s, l + 1, r - 1, cnt);
    }
}

int isPalindrome(const char* s, int& cnt) {
    return recursion(s, 0, strlen(s) - 1, cnt);
}

int main() {
    int c;
    cin >> c;

    for (int i = 0; i < c; i++) {
        char a[1001];
        int cnt = 1;
        cin >> a;
        cout << isPalindrome(a, cnt) << " " << cnt << endl;
    }

}