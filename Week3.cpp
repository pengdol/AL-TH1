#include <cstdio>
#include <vector>
using namespace std;

/*int main(){
  vector<int> v;
  for (int i = 0; i < 10; i++){
    int temp;
    scanf("%d", &temp);
    v.push_back(temp);
  }
  for(int i = v.size() - 1; i >= 0; i--){
    printf("%d\n", v[i]);
  }
}

int main(){
  int n, a[100000];
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int max = 0, min = 100, sum = 0;
  for(int i = 0; i < n; i++){
    if(max < a[i])
      max = a[i];
    if(min > a[i])
      min = a[i];
    sum += a[i];
  }
  printf("%d", (sum - min - max) / (n - 2));
}

int main(){
  int n, H[100000];
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d", &H[i]);
  int max = 0, ind = 0;
  for(int i = 1; i < n; i++){
    if(max < H[i] - H[i - 1]){
      max = H[i] - H[i - 1];
      ind = i;
    }
  }
  if (max > 0)
    printf("%d %d", ind, ind + 1);
  else printf("0");
}

int main(){
  int n, S[10000], rank[10000];
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d", &S[i]);
  for(int i = 0; i < n; i++){
    rank[i] = 1;
    for(int j = 0; j < n; j++)
      if(S[i] < S[j]) rank[i]++;
  }
  for(int i = 0; i < n; i++)
    printf("%d\n", rank[i]);
}

int main(){
  int tell, count[10] = {0,};
  scanf("%d", &tell);
  for(int i = 0; i < 8; i++){
    count[tell % 10]++;
    tell /= 10;
  }
  count[6] += count[9] + 1;
  count[6] /= 2;
  count[9] = count[6];
  int max = 0;
  for(int i = 0; i < 10; i++){
    if(max < count[i])
      max = count[i];
  }
  printf("%d", max);
}

int main(){
  int n, S[100];
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d", &S[i]);
  int sum = 0;
  for(int i = n - 2; i >= 0; i--){
    if(S[i + 1] <= S[i]){
      int diff = S[i] - S[i + 1] + 1;
      sum += diff;
      S[i] = S[i] - diff;
    }
  }
  printf("%d", sum);
}*/
