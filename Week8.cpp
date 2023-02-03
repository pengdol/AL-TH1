#include <iostream>
#include <cstdio>

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
}*/
