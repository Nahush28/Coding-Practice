#include <bits/stdc++.h>

using namespace std;

int main()
{

	long T;

	cin >> T;
	while (T--)
	{
		int n, br = 0;
		long l, r;

		cin >> n >> l >> r;

		vector<int> arr(n);

		for (int i = 1; i < (n + 1); ++i)
		{
			int temp = ((l-1)/i +1) * i;

			// cout << i << "\n";

			if (temp <l || temp > r)
			{
				br = 1;
				break;
			}
			arr[i-1] = temp;
		}

		if (br == 1)
		{
			cout << "NO";
		}
		else
		{
			cout << "YES\n";
			for (int i = 0; i < n ; ++i)
				cout << arr[i] << " ";
		}
		cout << "\n";
	}
}
