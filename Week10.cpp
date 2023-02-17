#include <iostream>
#include <cstdio>
#include <utility>
#include <string>
using namespace std;

/*
1. 출석부

struct Person{
  int id;
  string nm;
  int c;
  int a;
};

int main(){
  Person student[10000];
  int n, m;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    cin >> student[i].id;
    cin >> student[i].nm;
    cin >> student[i].c;
    cin >> student[i].a;
  }
  scanf("%d", &m);
  for(int i = 0; i < m; i++){
    string rjator;
    cin >> rjator;
    int g = 1;
    for(int j = 0; j < n; j++){
      if(student[j].nm == rjator){
        printf("%d %d %d\n", student[j].id, student[j].c, student[j].a);
        g = 0;
      }
    }
    if(g) printf("-1\n");
  }
  return 0;
}

2. 승자 판독기

int main(){
  pair<int, int> point[10001];
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int t, a;
    scanf("%d %d", &t, &a);
    point[i + 1] = make_pair(t, a);
  }
  int price = 0;
  pair<int, int> top = {-1, -1};
  for(int i = 0; i < n; i++){
    if(point[i + 1] > top){
      top = point[i + 1];
      price = i + 1;
    }
  }
  printf("%d", price);
}

3. 달리기

int main(){
  pair<int, int> p[1001];
  pair<int, int> top = {-1, -1};
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int m, t;
    scanf("%d %d", &m, &t);
    t = 5000 - t;
    p[i] = make_pair(m, t);
    if(p[i] > top)
      top = p[i];
  }
  int po = 0;
  for(int i = 0; i < n; i++)
    po += top.first - p[i].first;
  printf("%d", po + top.second);
}*/
