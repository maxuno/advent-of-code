
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <list>

int sumArray(int array[]);

int main(){
    ifstream file;
    file.open("input01.txt");
    string line;

    int prevDepth = 0;
    int sumIncreased = -3;
    int sumDecreased = 0;
    int prevSumThreeLines = 0;
    int counter = 0;
    int prevsum = 0;

    int list[3];
    /*
    for(int i = 0; i < 3; i++){
        getline(file,line);
        int intline = stoi(line);
        list[i] = intline;
        cout << list[i] << endl;
    }
    */

    while(getline(file, line)){
            int intline = stoi(line);
            list[0] = list[1];
            list[1] = list[2];
            list[2] = intline;
            int sum = sumArray(list);
            cout << list[0] << " + " << list[1] << " + " << list[2] << " = " << sum << endl;
            cout << sum << " > " << prevsum << endl;
            if(sum > prevsum)
                sumIncreased++;
            else{
                sumDecreased++;
            }

            prevsum = sum;
        }

    cout << "sumIncreased : " << sumIncreased << endl;
    cout << "sumDecreased : " << sumDecreased << endl;
    cout << "Totalt iterations: " << sumIncreased + sumDecreased << endl;
    return 0;
}

int sumArray(int array[]){
    int sum{0};
    for(int i = 0; i < 3; i++){
        sum +=array[i];
    }
    return sum;
}