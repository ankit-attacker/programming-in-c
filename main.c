#include <stdio.h>
int find_odd(int k){
  int x0=1,cnt=0;
  while(x0!=-1)
    {
      scanf("%d",&x0);
      if(x0%2)
         ++cnt;
      if(cnt==k)
      {
        return x0;
        break;
      }
    }
  return -1;
}
int main(){
    int k;
    scanf("%d",&k);
    printf("%d",find_odd(k));
    return 0;
}