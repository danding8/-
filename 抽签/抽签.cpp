// 抽签.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int n;
	long m, k;
	cout << "please input the number of paper to n,the number between 1 and 50 " << endl;
	cin >> n;
	while (n < 1 || n>50)
	{
		cout << "The number is error" << endl ;
		cout << "please input the number of paper to n,the number between 1 and 50 " << endl;
		cin >> n;
	}
	cout << "please input the sum between 1 and 10^8 to m " << endl;
	cin >> m;
	while (m < 1 || m>pow(10,8))
	{
		cout << "The number is error" << endl;
		cout << "please input the sum between 1 and 10 ^ 8 to m" << endl;
		cin >> m;
	}
	int a [50] ;
	for (int i = 0; i < n; i++) {
		cout << "please input k" << i <<",the number between 1 and 10^8"<<endl;
		cin >> a[i];
		while (a[i] < 1 || a[i]>pow(10, 8)) {
			cout << "The number is error" << endl;
			cout << "please input the number between 1 and 10 ^ 8 to k" << endl;
			cin >> a[i];
		}
	}
	long text_m=0;
	bool b = false;
	for (int i_1 = 0; i_1 < n&&!b; i_1++) {
		for (int i_2 = 0; i_2 < n && !b; i_2++) {
			for (int i_3 = 0; i_3 < n && !b; i_3++) {
				for (int i_4 = 0; i_4 < n && !b; i_4++) {
					text_m = a[i_4]+ a[i_1]+ a[i_2] + a[i_3];
					cout << text_m<<endl;
					if (text_m == m) {
						cout << "YES" << endl;
						b = true;
						
					}
					else {
						text_m = 0;
					}
					
				}
			}
		}

	}
	if (!b) {
		cout << "NO" << endl;
	}
	cin >> k;
    return 0;
}

