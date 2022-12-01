#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    ifstream file;
    file.open("input02.txt");
    string line;

    int horizontalPos = 0;
    int depth = 0;
    stringstream ss;
    string command = "";
    int value = 0;
    int aim = 0;
    while(getline(file, line)){
        ss << line;
        ss >> command >> value;
        if(command == "forward"){
            horizontalPos += value;
            depth += aim * value;
        }
        else if(command == "up")
            aim -= value;
        else if(command == "down")
            aim += value;
    ss.clear();
    }
    int product = depth * horizontalPos;
    cout << "Product = " << product << endl;
    return 0;
}
