#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream inputdata("Get the Inversion/inputdata.txt"); //输入文件流对象
    ofstream outputdata("Get the Inversion/outputdata.txt") //输出文件流对象
    int N = 0;
    inputdata>>N;
    while(N>0){
        vector<int> A(N);
        for(int i = 0; i < N; i++){
            inputdata>>A[i];
        }
    }

}