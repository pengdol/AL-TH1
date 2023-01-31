#include <cstdio>
#include <iostream>
//cin.getline(ch, sizeof(ch), '\n') <-- 공백이 포함된 문자열을 받는 코드
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
}*/

