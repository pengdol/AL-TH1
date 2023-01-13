#include <cstdio>
#include <vector>
using namespace std;

/*int main(){
  vector<int> s[10001];
  int n, m;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++){
    int from, love;
    scanf("%d %d", &from, &love);
    s[from].push_back(love);
  }
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < s[i].size(); j++)
      printf("%d ", s[i][j]);
    if(s[i].size() == 0) printf("0");
    printf("\n");
  }
}

int main(){
  vector<int> t[10001];
  int n, m;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++){
    int from, love;
    scanf("%d %d", &from, &love);
    t[from].push_back(love);
  }
  for(int i = 1; i <= n; i++){
    int sta = 0;
    for(int j = 0; j < t[i].size(); j++){
      int temp = t[i][j];
      for(int k = 0; k < t[temp].size(); k++){
        if (i == t[temp][k]){
          printf("%d ", temp);
          sta++;
          break;
        }
      }
    }
    if(sta == 0) printf("0");
    printf("\n");
  }
}

int main(){
  int map[102][102] = {0, };
  int m, n;
  scanf("%d %d", &m, &n);
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++)
      scanf("%d", &map[i][j]);
  }
  int max = 0, x = -1, y = -1;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      int gold = 0;
      gold += map[i][j] + map[i + 1][j] + map[i][j + 1] + map[i - 1][j] + map[i][j - 1];
      if(max < gold){
        max = gold;
        x = j;
        y = i;
      }
    }
  }
  printf("%d %d %d", x, y, max);
}

실기시험 1
int main(){
  int v[100001] = {0, };
  int n = 0, count = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for(int i = 0; i < (n-1); i++){
    if(v[i] > v[i + 1])
      count += 1;
  }
  printf("%d", (count+1));
}*/
