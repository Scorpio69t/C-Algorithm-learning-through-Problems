#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int getHangOver(double N) {
	int n = 1;
	double length = 0.00;

	while (length < N) {
		length += (double)((double)1 / (double)(n + 1));
		n++;
	}
	if (length > N)	n--;

	return n;
}

int main(){
    ifstream inputdata("inputdata.txt", ios::in); //输入文件流对象
    ofstream outputdata("outputdata.txt", ios::out); //输出文件流对象
	int count = 0;
	int N, M;
	inputdata >> count;
	cout << count << endl;
    inputdata >> N;
    cout << N << endl;
    inputdata >> M;
    cout << M;
    inputdata.close();
    //outputdata.close();

    return 0;
}
