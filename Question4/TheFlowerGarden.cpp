#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;
int minElement(int L[], int K)
{
	int min = L[0];
	for (int i = 0; i < K; i++)
	{
		if (L[i] <= min)
		{
			min = L[i];
		}
	}
	return min;
}

int theFlowerGarden(int F, int K, int L[], int I[])
{
	int result = 0;
	int i = minElement(L, K);
	int count = i - 1;

	while (i <= F)
	{
		for (int j = 1; j <= K; j++)
		{
			if ((i - 1) % I[j] == L[j])
			{
				break;
			}
			if (j == K)
			{
				count++;
			}
		}

		i++;
	}
	return count;
}

int main()
{
	ifstream inputdata("inputdata.txt", ios::in);	//输入文件流对象
	ofstream outputdata("outputdata.txt", ios::out); //输出文件流对象
	int F, K;
	inputdata >> F;
	inputdata >> K;
	int L[K], I[K];
	for (int i = 1; i <= K; i++)
	{
		inputdata >> L[i];
		inputdata >> I[i];
	}
	int result = theFlowerGarden(F, K, L, I);
	outputdata << result << endl;
	cout << result << endl;

	inputdata.close();
	outputdata.close();

	return 0;
}
