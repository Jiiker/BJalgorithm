#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N = 0;
	int arr[1000005] = { 0 };

	cin >> N;

	arr[1] = 0;

	for (int i = 2; i <= N; i++)
	{
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0)
			arr[i] = min(arr[i], arr[i / 2] + 1);
		if (i % 3 == 0)
			arr[i] = min(arr[i], arr[i / 3] + 1);
	}

	cout << arr[N];

	return 0;
}