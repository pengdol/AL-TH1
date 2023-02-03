#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

/*
1. 카이사르 암호

int main() {
  char str[1001];
  int n;
  scanf("%d %s", &n, &str);
  for(int i = 0; str[i]; i++){
    str[i] = str[i] + n;
    if(str[i] > 'Z')
      str[i] = str[i] - 26;
    printf("%c", str[i]);
  }
  return 0;
}

2. 알파벳 검색

int main(){
  char str[1001];
  int pos[26];
  scanf("%s", str);
  for(int i = 0; i < 26; i++)
    pos[i] = -1;
  for(int i = 0; str[i]; i++){
    if(pos[str[i] - 'a'] == -1)
      pos[str[i]-'a'] = i;
  }
  for(int i = 0; i < 26; i++)
    printf("%d ", pos[i]);
}

3. 반지의 단어

int main(){
  int n;
  char f[10001], s[10001];
  scanf("%d", &n);
  scanf("%s %s", f, s);
  for(int i = 0; f[i]; i++){
    int check = 0;
    for(int j = 0; s[j]; j++){
      if(f[(i+j)%n] != s[j])
        check = 1;
    }
    if(!check){
      printf("Yes");
      return 0;
    }
  }
  printf("No");
}

4. 동물 울음소리 찾기

int main(){
  char C[101] = {0,};
  char R[101] = {0,};
  int n, c;
  scanf("%s", C);
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%s", R);
    if(strcmp(C, R) == 0){
      c = 1;
    }
  }
  if (c == 1) printf("Yes");
  else printf("No");
  return 0;
}

5. 회문의 개수 출력(회문)

char str[100001];

int ghlans(int st, int sn){
  if(st > sn) return 0;
  else if (str[st] == str[sn]) return ghlans(st + 1, sn - 1);
  else return 1;
}

int main(){
  int a;
  int plus = 0;
  scanf("%d", &a);
  for(int i = 0; i < a; i++){
    scanf("%s", str);
    plus += ghlans(0, strlen(str) - 1);
  }
  printf("%d", a - plus);
  return 0;
}

6. 엄청 큰 수 비교하기

int main(){
  string a, b;
  cin >> a;
  cin >> b;
  if (a > b) cout << a;
  else cout << b;
}

7. 예술은 폭발이다!

int main(){
  string a;
  cin >> a;
  string b;
  cin >> b;
  int bs = b.size();
  int in = 0;
  while(1){
    in = a.find(b);
    if (in < 0)
      break;
    a = a.substr(0, in) + a.substr(in + bs, a.size() + (in + bs));
  }
  if(a.size() == 0)
    printf("Art!");
  else
    cout << a;
  return 0;
}*/
