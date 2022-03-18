#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include <algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
char p[1005] = { '\0' };
char m[30] = { '\0' };
int main()
{
	int chang = 0;
	for (int i = 0; p[i-1] != '}'; i++)
	{
		cin >> p[i];
		chang++;
	}
	int res = 0;
	for (int i = 1; i < chang; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			int flag = 0;
			for (int j = 0; j < res; j++)
			{
				if (p[i] == m[j]) { flag++; break; }
			}
			if (flag == 0) 
			{
				m[res] = p[i];
				res++;
			}
		}
	}
	cout << res;
	return 0;
}
