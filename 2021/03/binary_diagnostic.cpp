#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<vector<int>> ALL_BITS;
    vector<int> ROW_BITS;
    fstream file;
    string line;
    file.open("input03.txt");   

    while(getline(file, line)){
        for(char c : line){
            ROW_BITS.push_back((int)c);
            cout << c << endl;
        }
    }

}