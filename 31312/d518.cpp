#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    string word;
    while(cin >> n) {
        map<string, int> words;
        for (int i = 0; i < n; i++){
            cin >> word;

            if (words[word] == 0) {
                words[word] = words.size();
                cout << "New! " << words[word] << endl;
            } else {
                cout << "Old! " << words[word] << endl;
            }
        }
    }
}
