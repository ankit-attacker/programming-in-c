#include <stdio.h>

int find_factorial(int k){
   int p = 1;
   for(int i=1;i<=k;i++){
       p*=i;
   }
   return p;
}

int main(){
    int n,k;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&k);
        printf("%d ", find_factorial(k));
    }
    
    return 0;
}