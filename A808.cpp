#include <bits/stdc++.h>

using namespace std;

int main()
{

	long T;

	cin >> T;
	while (T--)
	{
		int n;
		int br = 0;
		cin >> n;

		vector<int> arr(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}

		for (size_t i = 1; i < n; ++i)
		{
			// cout << i << "\n";
			if (arr[i] % arr[0] != 0)
			{
				br = 1;
				break;
			}
		}
		if (br == 0)
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
}
