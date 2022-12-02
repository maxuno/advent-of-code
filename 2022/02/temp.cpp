
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <algorithm>
#include <list>
#include <vector>
#include <string.h>
using namespace std;

int main(){
    ifstream file;
    file.open("input02.txt");
    string line;

    int most_calories{0};
    stringstream ss;
    string opponent{};
    string me{};
    vector<int> elfs;
    int score{0};

    

    while(getline(file, line)){
        ss << line;
        ss >> opponent >> me;
        if(opponent == "A"){
            // Draw
            if(me == "Y"){
                score = score + 3 + 1;
            }
            // Win
            else if(me == "Z"){
                score = score + 6 + 2;
            }
            // Loss
            else if(me == "X"){
                score = score + 0 + 3;
            }
        }
        else if(opponent == "B"){
            // Loss
            if(me == "X"){
                score = score + 0 + 1;
            }
            // Draw
            else if(me == "Y"){
                score = score + 3 + 2;
            }
            // Win
            else if(me == "Z"){
                score = score + 6 + 3;
            }
        }
        else if(opponent == "C"){
            // Win
            if(me == "Z"){
                score = score  + 6 + 1;
            }
            // Loss
            else if(me == "X"){
                score = score + 0 + 2;
            }
            // Draw
            else if(me == "Y"){
                score = score + 3 + 3;
            }
        }
        ss.clear();
    }
    cout << score << endl;
}
