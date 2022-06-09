#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector <string> words;
  string a;
  int c=1;
  int d=0;
  int g;
  cin>>a;
  words.push_back(a);
  cout<<"new1\n";
  while(true){
    cin>>a;
    for(int i=0;i<=words.size();i++){
      if(a==words[i]){
        g=0;
        break;
      }else{
        g=1;
      }
    }
    if(g==0){
      cout<<"old";
      cout<<d+1;
      cout<<"\n";
      d++;
    }else{
      words.push_back(a);
      cout<<"new";
      cout<<c+1;
      cout<<"\n";
      c++;
    }
  }
}