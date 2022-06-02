#include <iostream>
#include <map>
using namespace std;

int main() {
  int times = 0;
  string word = "";
  while (cin >> times) {
    map<string,int> maps;
    for (int i = 0; i < times; i++) {
      cin >> word;
      if (maps[word] == 0) {
        maps[word] = i + 1;
        cout << "New! " << maps[word] << endl;
      } else {
        cout << "Old! " << maps[word] << endl;
      }
    }
  }
}
