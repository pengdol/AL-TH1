#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
using namespace std;

/*
1. 종이컵 마술

int main() {
  int n;
  scanf("%d", &n);
  stack<int> s;
  for(int i = 0; i < n; i++){
    int sz;
    scanf("%d", &sz);
    while(!s.empty() && s.top() < sz)
      s.pop();
    s.push(sz);
  }
  printf("%d", sz);
  return 0;
}

2. 숫자 만들기

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int num = q.front();
    q.pop();
    if(num == 0){
      printf("1");
      return 0;
    }
    if(num * 2 <= b)
      q.push(num * 2);
    if(num * 10 + 1 <= b)
      q.push(num * 10 + 1);
  }
  printf("-1");
  return 0;
}

3. 후위 표기법

int main(){
  char str[101];
  scanf("%s", str);
  stack<int> s;
  for(int i = 0; str[i]; i++){
    if('0' <= str[i] && str[i] <= '9')
      s.push(str[i] - '0');
    else{
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      if(str[i] == '+')
        s.push(b + a);
      else
        s.push(b - a);
    }
  }
  printf("%d", s.top());
  return 0;
}
*/
