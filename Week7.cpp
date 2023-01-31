#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

/*
  1.파스칼의 삼각형
  
int Pascal(int row, int column){
  if(column == 1||row == 1||column == row)
    return 1;
  return Pascal(row - 1, column) + Pascal(row - 1, column - 1);
}

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  printf("%d",Pascal(n, m));
}

  2.오늘은 내가 요리사

int sms = 1234567890;
int S[10], B[10];
int n;
void SMS(int in, int s, int b, int plus){
  if (in == n){
    int different;
    if(s > b) different = s - b;
    else different = b - s;
    if (different < sms && plus != n) sms = different;
    return;
  }
  SMS(in + 1, s * S[in], b + B[in], plus);
  SMS(in + 1, s, b, plus + 1);
}
int main(){
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d %d", &S[i], &B[i]);
  SMS(0, 1, 0, 0);
  printf("%d", sms);
}

  3.대문자를 소문자로

int main(){
  char str[1001];
  scanf("%[^\n]", &str);
  for(int i = 0; str[i]; i++){
    if('A' <= str[i] && str[i] <= 'Z')
      str[i] = str[i] + 32;
  }
  printf("%s", str);
  return 0;
}

  4. 문자의 빈도

int main(){
  char str[1001];
  int plus[26] = {0,};
  scanf("%s", &str);
  for(int i = 0; str[i]; i++){
    if('a' <= str[i] && str[i] <= 'z')
      str[i] = str[i] - 32;
    plus[str[i] - 'A']++;
  }
  for(int i = 0; i < 26; i++)
    printf("%d ", plus[i]);
  return 0;
}

  5.스키테일 암호

int main(){
  char stro[100001];
  char stre[100001] = {0,};
  int d, l, in = 0;
  scanf("%d %d", &l, &d);
  scanf("%s", stro);
  for(int i = 0; stro[i]; i++){
    if(stre[in])
      in++;
    stre[in] = stro[i];
    in += d;
    if (in >= 1) in -= 1;
  }
  printf("%s", stre);
}*/
