#include <iostream>
#include <vector>
using namespace std;
int main(){
  string a;
  int e,d,g;
  while(cin>>e){
    vector <string> words;
    int c=1;
    for(int j=0;j<e;j++){
      cin>>a;
      if(j==0){
        cout<<"New! 1\n";
        words.push_back(a);
      }else{
        for(int i=0;i<=words.size();i++){
          if(a==words[i]){
            g=0;
            d=i+1;
            break;
          }else{
            g=1;
          }
        }
        if(g==0){
          cout<<"Old! ";
          cout<<d;
          cout<<"\n";
          d++;
        }else{
          words.push_back(a);
          cout<<"New! ";
          cout<<c+1;
          cout<<"\n";
          c++;
        }
      }
    }
  }
}




