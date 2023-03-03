#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
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

4. sort 예제문제

bool cmp(int left, int right){
  return left > right;
}
int main(){
  int data[10];
  for(int i = 0; i < 10; i++)
    scanf("%d", &data[i]);
  sort(data, data + 10);
  for(int i = 0; i < 10; i++)
    printf("%d ", data[i]);
  printf("\n");
  sort(data, data + 10, cmp);
  for(int i = 0; i < 10; i++)
    printf("%d ", data[i]);
  return 0;
}

5. 줄 세우기

int main(){
  double height[100001];
  double temp[100001];
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%lf", &height[i]);
    temp[i] = height[i];
  }
  sort(height, height + n);
  int plus = 0;
  for(int i = 0; i < n; i++){
    if(height[i] != temp[i])
      plus++;
  }
  printf("%d", plus);
  return 0;
}

6. 팀원 집합

int main(){
  pair<int, int> p[100001] = {};
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    cin >> p[i].first;
    cin >> p[i].second;
  }
  sort(p, p + n);
  for(int i = 0; i < n; i++){
    printf("%d ", p[i].second);
    if(p[i].first != p[i + 1].first)
      printf("\n");
  }
  return 0;
}

7. 인터넷 강의

int main(){
  pair<int, int> p[100001];
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d %d", &p[i].second, &p[i].first);
  sort(p, p + n);
  int start = 0, num = 0;
  for(int i = 0; i < n; i++){
    if(start <= p[i].second){
      start = p[i].first;
      num++;
    }
  }
  printf("%d", num);
  return 0;
}
*/
