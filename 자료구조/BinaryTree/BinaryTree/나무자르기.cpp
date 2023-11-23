#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


long long N, M;
vector<long long> trees;

int treecuter(int h)
{
    long long result = 0;
    for (int i = 0; i < trees.size(); i++)
    {
        if (trees[i] > h)
            result += trees[i] - h;
    }

    return result;
}

int search(int k)
{
    long long left, right, mid;
    left = 0;
    right = trees[0];

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (treecuter(mid) >= k) // 특정 조건을 만족하는
            left = mid + 1;
        else
            right = mid - 1;

    }
    return right;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int num = 0;
        cin >> num;
        trees.push_back(num);
    }
    sort(trees.begin(), trees.end(), greater<>());
    cout << search(M);
}

//#include<iostream>
//#include <vector>
//using namespace std;
//
//int arr[10001];
//
//vector<int> v;
//int k, n;
//long long int vn, low, high, mid, cnt;
//long long int iMax;
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++) {
//		cin >> vn;
//		v.push_back(vn);
//		if (iMax < vn)
//			iMax = vn;
//	}
//
//	low = 1;
//	high = iMax;
//	int result = 0;
//	while (low <= high) {
//		mid = (low + high) / 2;
//		cnt = 0;
//		for (int i = 0; i < n; i++) {
//			if (v[i] - mid < 0) {
//				continue;
//			}
//			cnt += v[i] - mid;
//		}
//
//		if (cnt >= k) {
//			low = mid + 1;
//			if (result < mid)
//				result = mid;
//		}
//		else {
//			high = mid - 1;
//		}
//	}
//
//	cout << result << endl;
//}

