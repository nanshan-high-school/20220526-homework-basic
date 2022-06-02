#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> vector = {};
  int input;
  bool isSwapped = true;

  cout << "請輸入所有數字(若不是數字或空格即結束):";
  while (cin >> input) {
    vector.push_back(input);
  }
  int vLength = vector.size();

  if (vLength == 0) {
    cout << "沒有任何數字排個X!";
    return 0;
  }
  
  do {
    isSwapped = false;
    if (vLength < 2) break;
    for (int i = 0; i < vLength - 1; i++) {     
      if (vector[i] > vector[i + 1]) {
        int temp;
        temp = vector[i];
        vector[i] = vector[i + 1];
        vector[i + 1] = temp;
        isSwapped = true;
      }
    }
    vLength --;
  } while (isSwapped);
  
  cout << "由小到大為:";
  for (int i : vector) {
    cout << i << " ";
  }
}
