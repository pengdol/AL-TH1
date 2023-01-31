#include <cstdio>
 
/*int main(){
    char privateNumber[15];
    int birth[4];
    char gender;
    
    scanf("%s", privateNumber);
    birth[3] = privateNumber[7]-48;
    
    for(int i=0; i<3; i++){
        birth[i] = ((privateNumber[i*2]-48) * 10) + (privateNumber[i*2+1] - 48);
    }
    
    if(birth[3] == 1 || birth[3] == 3){
        gender = 'M';
    }else{
        gender = 'F';
    }
    
    printf("19%02d/%02d/%02d %c\n", birth[0], birth[1], birth[2], gender);
    
    return 0;
}

int main(){
  
  int a, b, c, d, e, f, g, res = 0;
  
  scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
  
  if(a % 2 == 1) res += a;
  if(b % 2 == 1) res += b;
  if(c % 2 == 1) res += c;
  if(d % 2 == 1) res += d;
  if(e % 2 == 1) res += e;
  if(f % 2 == 1) res += f;
  if(g % 2 == 1) res += g;
  
  if(res == 0) printf("-1");
  else printf("%d", res);
}

int main()
{
    int n,i,j,m,k,a[7],t=0;
    for(i=0; i<7; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<7; i++)
    {
        for(j=0; j<7; j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
            a[j]=k;
            }
        }
    }
    for(i=6; i>=0; i--)
    {
        if(a[i]%2==1)
        {
            m=a[i];
            break;
        }
    }
    for(i=0; i<7; i++)
    {
        if(a[i]%2==0)
        {
            a[i]=0;
        }
    }
    for(i=0; i<7; i++)
    {
        t=t+a[i];
    }
    if(t==0)
    {
        t=-1;
    }

    printf("%d\n%d",t,m);
    return 0;
}

int main()
{
    int hour;
    int minute;
    int n;
    scanf("%d %d %d",&hour,&minute, &n);
    minute=minute+n;
    if(minute>59) {
        hour=hour+minute/60;
        minute=minute%60;
    }
    printf("%d %d",hour%24,minute);
}

int Factorial(int n)
{
  if (n <= 1) return 1;
  return n * Factorial(n - 1);
}
int main(){
  int n;
  scanf("%d", &n);
  printf("%d",Factorial(n));
  return 0;
}

int teleporter[1001];

int Find(int p, int t){
  if (t == 0)
    return p;
  return Find(teleporter[p], t - 1);
}

int main(){
  int n,p,t;
  scanf("%d %d %d", &n, &p, &t);
  for(int i = 1; i <= n; i++)
    scanf("%d", &teleporter[i]);
  printf("%d", Find(p, t));
  return 0;
}

int sep(int num){
  if (num == 0) return 0;
  return num % 10 + sep(num / 10);
}
int main(){
  int num;
  scanf("%d", &num);
  printf("%d", sep(num));
  return 0;
}

int Collaz(int num){
  if (num == 1) return 0;
  if (num % 2 == 0) return 1 + Collaz(num / 2);
  else return 1 + Collaz(num * 3 + 1);
}
int main(){
  int num;
  scanf("%d", &num);
  printf("%d", Collaz(num));
  return 0;
}*/
