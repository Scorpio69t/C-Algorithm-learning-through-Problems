#include <iostream>
#include <stdio.h>
#include <fstream>
#include <math.h>

using namespace std;

int bitNum(int n)
{
	int count = 0;

	while (n)
	{
		n /= 10;
		count++;
	}

	return count;
}

int getGift(int x, int a, int b)
{
	int t, result = 0;

	t = bitNum(x);
	int m = (int)pow(10.0, t);
	for (int i = a; i <= b; i++)
	{
		if (i % m == x)
		{
			result++;
		}
	}
	return result;
}

int main()
{
	ifstream inputdata("inputdata.txt", ios::in);	//输入文件流对象
	ofstream outputdata("outputdata.txt", ios::out); //输出文件流对象
	int T, x, a, b;
	inputdata >> T;
	for (int i = 0; i < T; i++)
	{
		inputdata >> x;
		inputdata >> a;
		inputdata >> b;
		int result = getGift(x, a, b);
		outputdata << result << endl;
		cout << result << endl;
	}

	inputdata.close();
	outputdata.close();

	return 0;
}
