#include<stdio.h>
void solve() {
  long long int n;
  scanf("%lld",&n);
  if(n>5000)
   {
  n-=500;
  } else if(n>1000)
  {
   n-=100;
   } 
   else if(n>100) {
   	n-=25;
   }
  printf("%d\n",n);
  
}
signed main() {
  int T;
  scanf("%d",&T);
  while(T--) solve();
}
