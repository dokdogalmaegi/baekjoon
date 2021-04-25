#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<char> alpabetArr = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	vector<int> numArr = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	char inputArr[100];

	cin >> inputArr;

	for (int i = 0; i < strlen(inputArr); i++)
	{
		for (int j = 0; j < alpabetArr.size(); j++)
		{
			if (inputArr[i] == alpabetArr[j] && numArr[j] == -1)
			{
				numArr[j] = i;
			}
		}
	}

	for (int i = 0; i < numArr.size(); i++) cout << numArr[i] << " ";
}