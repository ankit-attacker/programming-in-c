#include<stdio.h>

int main() {
  int i, j, c, flag, n;
  flag = 1;

  scanf("%d", & n);
  
  for (i = 1; i < n + 1; i++) {
      for (j = 1; j < n + 1; j++){
          scanf("%d", &c);

          if(i > j && c!=0){
              flag = 0;
          }
      }
  }
  printf("%d",flag);
  return 0;
}