#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
  map<string, int> mp;
  int times; string word;
  while(cin>>times){
    for(int i=1;i<=times;i++){
      cin>>word;
      if(!mp[word]){
        mp[word] = mp.size();
        cout<<"New! "<< mp[word] << "\n" ;
      }
      else{
        cout<<"Old! "<< mp[word] << "\n" ;
      }
    }
   mp.clear();
  }
}
