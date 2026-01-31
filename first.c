#include<stdio.h>
#include<conio.h>

void recursion(int n){
  if(n>0){
    printf("%d\n",n);
    n-=1;
    recursion(n);
  }
}
 
 int main() {
     recursion(10);
     return 0;
 }