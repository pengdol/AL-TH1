#include <iostream>
#include <string>
#include <cstdio>
#include <utility>
#include <stack>
#include <queue>
using namespace std;

/*
1. 반 자리배정

int main() {
  pair<int, int> p[51][51];
  int n, m;
  scanf("%d %d", &n, &m);
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      int c, d;
      scanf("%d %d", &c, &d);
      p[i][j] = make_pair(c, d);
    }
  }
  int c1, d1, c2, d2;
  scanf("%d %d", &c1, &d1);
  scanf("%d %d", &c2, &d2);
  pair<int, int> temp = p[c1][d1];
  p[c1][d1] = p[c2][d2];
  p[c2][d2] = temp;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++)
      printf("%d %d ", p[i][j].first, p[i][j].second);
    printf("\n");
  }
  return 0;
}

2. 물건관리

struct NF{
  int an, mn, sz, ps;
};

NF product[1000];
int cnt_product = 0;

void add_NF(int an, int mn, int sz, int ps){
  product[cnt_product].an = an;
  product[cnt_product].mn = mn;
  product[cnt_product].sz = sz;
  product[cnt_product].ps = ps;
  cnt_product++;
}

void chng_NF(int an, int nb, int ch){
  for(int i = 0; i < cnt_product; i++){
    if(an == product[i].an){
      if(nb == 0)
        product[i].an = ch;
      else if(nb == 1)
        product[i].mn = ch;
      else if(nb == 2)
        product[i].sz = ch;
      else if(nb == 3)
        product[i].ps = ch;
    }
  }
}

void print_NF(int an){
  for(int i = 0; i < cnt_product; i++){
    if(an == product[1].an)
      printf("%d %d %d %d\n", product[i].an, product[i].mn, product[i].sz, product[i].ps);
  }
}

int main(){
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int signal;
    scanf("%d", &signal);
    if(signal == 0){
      int an, mn, sz, ps;
      scanf("%d %d %d %d", &an, &mn, &sz, &ps);
      add_NF(an, mn, sz, ps);
    }
    else if(signal == 1){
      int an, nb, ch;
      scanf("%d %d %d", &an, &nb, &ch);
      chng_NF(an, nb, ch);
    }
    else if(signal == 2){
      int an;
      scanf("%d", &an);
      print_NF(an);
    }
  }
  return 0;
}

3. stack과 queue

int main(){
  stack<int> s;
  queue<int> q;
  for(int i = 1; i <= 10; i++){
    int t;
    scanf("%d", &t);
    s.push(t);
    q.push(t);
  }
  while(!s.empty()){
    printf("%d ", s.top());
    s.pop();
  }
  printf("\n");
  while(!q.empty()){
    printf("%d ", q.front());
    q.pop();
  }
}

4. 화물 배송

int main(){
  int n;
  cin >> n;
  stack<int> s;
  queue<string> q;
  for(int i = 1; i <= n; i++){
    int a;
    string b;
    scanf("%d", &a);
    cin >> b;
    s.push(a);
    q.push(b);
  }
  while(!s.empty()){
    printf("%d ", s.top());
    s.pop();
  }
  printf("\n");
  while(!q.empty()){
    cout << q.front();
    printf(" ");
    q.pop();
  }
}

5. 요세푸스 순열

int main(){
  int n, k;
  cin >> n;
  cin >> k;
  queue<int> q;
  for(int i = 1; i <= n; i++)
    q.push(i);
  while(!q.empty()){
    for(int i = 0; i < k - 1; i++){
      q.push(q.front());
      q.pop();
    }
    cout << q.front() << " ";
    q.pop();
  }
  return 0;
}

6. 괄호 검사기

int main(){
  char str[100000];
  stack<char> s;
  scanf("%s", str);
  for(int i = 0; str[i]; i++){
    if(str[i] == '(' || str[i] == '{' || str[i] == '[')
      s.push(str[i]);
    else{
      if(s.empty())
        printf("0");
      else if(str[i] == ')' && s.top() != '('){
        printf("0");
        return 0;
      }
      else if(str[i] == '}' && s.top() != '{'){
        printf("0");
        return 0;
      }
      else if(str[i] == ']' && s.top() != '['){
        printf("0");
        return 0;
      }
      s.pop();
    }
  }
  if(s.empty())
    printf("1");
  else
    printf("0");
}
*/
