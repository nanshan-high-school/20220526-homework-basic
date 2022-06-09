#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int N;
    while (cin >> N){
        int t = 1;
        vector<string> words;
        
        string word;
        cin >> word;
        words.push_back(word);
        printf("New! %d\n", t);
        t++;
    
        for(int i = 1; i < N; i++){
            cin >> word;
            bool old = false;
            
            int j = 0;
            for(; j < words.size(); j++){
                if (word == words[j]){
                    old = true;
                    break;
                }
            }

            if (old){
                printf("Old! %d\n", j+1);
            }else{
                printf("New! %d\n", t);
                words.push_back(word);
                t++;
            }
        }     
    }
}