#include <cstdio>
#include <vector>
using namespace std;

/*int main(){
  int maze[100][100], n, m, liqx, liqy;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      scanf("%d", &maze[i][j]);
      if(maze[i][j] == 2){
        liqx = j;
        liqy = i;
      }
    }
  }
  while(!(maze[liqy + 1][liqx] && maze[liqy][liqx + 1])){
    if(!maze[liqy+1][liqx]) liqy++;
    else if (!maze[liqy][liqx+1]) liqx++;
  }
  printf("%d %d", liqx, liqy);
}

int main(){
  int car[101][101] = {0, };
  int n, m;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++){
    int from, to, carr;
    scanf("%d %d %d", &from, &to, &carr);
    if(car[from][to] == 0 || car[from][to] < carr)
      car[from][to] = carr;
  }
  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= m; j++)
      printf("%d ", car[i][j]);
    printf("\n");
  }
}

int main(){
  int d[101][101] = {0, };
  int n;
  scanf("%d",&n);
  for(int i = 0; i < n; i++){
    int x, y;
    scanf("%d %d", &x, &y);
    for(int j = y; j < y + 10; j++)
      for(int k = x; k < x + 10; k++)
        d[j][k] = 1;
  }
  int res = 0;
  for(int i = 0; i < 101; i++)
    for(int j = 0; j < 101; j++)
      res += d[i][j];
  printf("%d", res);
}*/
