#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

/*
1.명령어

string s;

void in(int b, string temp) {
  s = s.substr(0, b) + temp + s.substr(b, s.size() - b);
}

void dlt(int b) {
  s = s.substr(0, b) + s.substr(b + 1, s.size() - 1 - b);
}

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int a;
    scanf("%d", &a);
    if(a == 0){
      int b;
      scanf("%d", &b);
      string temp;
      cin >> temp;
      in(b, temp);
    }
    else if(a == 1){
      int b;
      scanf("%d", &b);
      dlt(b);
    }
    else{
      cout << s;
      printf("\n");
    }
  }
  return 0;
}

2.우수학생

int main(){
  string best_std = "";
  string name;
  int n;
  scanf("%d", &n);
  int plus = 0;
  for(int i = 0; i < n; i++){
    cin >> name;
    int innm = best_std.find(name);
    if(innm < 0){
      if(plus == 0){
        best_std += name;
        plus++;
      }
      else if(plus <= 2){
        best_std += " " + name;
        plus++;
      }
      else{
        int inX = best_std.find(" ");
        best_std = best_std.substr(inX + 1, best_std.size());
        best_std += " " + name;
      }
    }
    cout << best_std;
    printf("\n");
  }
  return 0;
}
*/
