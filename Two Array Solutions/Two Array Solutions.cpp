// Two Array Solutions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int T, N, K;
	bool flag;
	cin >> T;
	while (T--) {
		cin >> N >> K;
		vector<int> A(N), B(N);
		for (int i = 0; i < N; i++) {
			cin >> A[i];
		}
		for (int i = 0; i < N; i++) {
			cin >> B[i];
		}
		sort(A.begin(), A.end());
		sort(B.begin(), B.end(), greater<int>());
		flag = true;

		for (int i = 0; i < N; i++) {
			if (A[i] + B[i] > K) {
				flag = false;
				break;
			}
		}
		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;

	}

    return 0;
}

