#include <iostream>
#include <vector>
using namespace std;

int main(){
  string word;
  int number, oldTimes;
  bool isSame;
  while (cin >> number) {
    vector<string> words;
    int newTimes = 1;
    for (int i = 0; i < number; i++) {
      cin >> word;
      if (i == 0) {
        cout << "New! 1\n";
        words.push_back(word);
      } else {
        for(int i = 0; i <= words.size(); i++){
          if (word == words[i]) {
            isSame = true;
            oldTimes = i + 1;
            break;
          } else {
            isSame = false;
          }
        }
        if (isSame) {
          cout << "Old! " << oldTimes << "\n";
          oldTimes++;
        } else {
          words.push_back(word);
          cout << "New! " << newTimes + 1 <<"\n";
          newTimes++;
        }
      }
    }
  }
}
