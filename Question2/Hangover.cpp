#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int getHangOver(float N) {
	int count = 1;
	float length = 0.00;

	while (length < N) {
		length = length + (float)(1 / (count + 1));
		count++;
	}
	if (length > N)	count--;

	return count;
}

int main(){
    ifstream inputdata("inputdata.txt", ios::in); //输入文件流对象
    ofstream outputdata("outputdata.txt", ios::out); //输出文件流对象
    int result = 0;
	float N;
    inputdata>>N;
    printf("%.2f", N);
    while(N > 0){
		result = getHangOver(N);
		printf("%.2f", result);
		cout << result << endl;
		outputdata << result << "card(s)" << endl;
		inputdata >> N;
    }
    inputdata.close();
    outputdata.close();

    return 0;
}
