#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int getGoldenCount(int N) {
	int count = 0;
	int k = 1, days = 0;

	while ((days + k) <= N) {
		count += k * k;
		days += k;
		k++;
	}
	int j = N - days;
    count += k * j;

	return count;
}

int main(){
    ifstream inputdata("inputdata.txt", ios::in); //输入文件流对象
    ofstream outputdata("outputdata.txt", ios::out); //输出文件流对象
    int N = 0, result = 0;
    inputdata>>N;
    while(N>0){
        result = getGoldenCount(N);
		cout << result << endl;
		outputdata << N << " " << result << endl;
		inputdata >> N;
    }
    inputdata.close();
    outputdata.close();

    return 0;
}
