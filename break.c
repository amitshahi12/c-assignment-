#include<stdio.h>
int main(){
  int i, n=0;
  printf("enter n=\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
   if(i==7){
     break;
   }
    printf("hello world\n");
  }
  return 0;
}
