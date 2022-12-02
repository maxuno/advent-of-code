
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <algorithm>
#include <list>
#include <vector>


int main(){
    ifstream file;
    file.open("input.txt");
    string line;

    int most_calories{0};
    int second_most_calories{0};
    int third_most_calories{0};
    int current_calories{0};

    vector<int> elfs;

    while(getline(file, line)){
        if(line == ""){
            elfs.push_back(current_calories);
            current_calories = 0;
        }
        else{
            int line_calories = stoi(line);
            current_calories += line_calories;
            if(current_calories > most_calories)
                most_calories = current_calories;
        }
    }
    std::sort(elfs.begin(), elfs.end());
      std::cout << "elfs contains:";
  for (std::vector<int>::iterator it=elfs.begin(); it!=elfs.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
}
