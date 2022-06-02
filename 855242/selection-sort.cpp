#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> vector = {};
  int input;

  cout << "請輸入所有數字(若不是數字或空格即結束):";
  while (cin >> input) {
    vector.push_back(input);
  }
  int vLength = vector.size();
  if (vLength == 0) {
    cout << "沒有任何數字排個X!";
    return 0;
  }
  
  for (int i = 0; i < vLength; i++) {
    int min = vector[i];
    int minOrdinal = i;
    for (int j = i; j < vLength; j++) {
      if (vector[j] < min) {
        min = vector[j];
        minOrdinal = j;
      }
    }
    int temp = vector[minOrdinal];
    vector[minOrdinal] = vector[i];
    vector[i] = temp;
  }
  
  cout << "由小到大為:";
  for (int i : vector) {
    cout << i << " ";
  }
}
