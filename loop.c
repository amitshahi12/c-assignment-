#include<stdio.h>
int main(){
  int i, n=0;
  printf("enter n=\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("the number is %d\n",n*i);
  }
  return 0;
}
