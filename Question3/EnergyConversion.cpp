#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int energyConversion(int N, int M, int V, int K)
{
	int result = 0;

	int A = M;
	while (1)
	{
		if (A >= N)
		{
			return result;
		}
		else if (A < V)
		{
			return -1;
		}
		else
		{
			if (A >= (A - V) * K)
			{
				return -1;
			}
			A = (A - V) * K;
			result++;
		}
	}
}

int main()
{
	ifstream inputdata("inputdata.txt", ios::in);	//输入文件流对象
	ofstream outputdata("outputdata.txt", ios::out); //输出文件流对象
	int count = 0;
	inputdata >> count;
	for (int i = 0; i < count; i++)
	{
		int N, M, V, K;
		inputdata >> N;
		inputdata >> M;
		inputdata >> V;
		inputdata >> K;
		int result = energyConversion(N, M, V, K);
		outputdata << result << endl;
		cout << result << endl;
	}

	inputdata.close();
	outputdata.close();

	return 0;
}
