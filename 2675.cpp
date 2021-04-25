#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, R;

	char S[20];

	cin >> T;

	string *array = new string[T];

	for (int i = 0; i < T; i++)
	{
		cin >> R;
		cin >> S;

		for (int j = 0; j < strlen(S); j++)
		{
			for (int y = 0; y < R; y++) array[i] += S[j];
		}
	}

	for (int i = 0; i < T; i++) cout << array[i] << "\n";
}