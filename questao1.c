//1. Escrever um programa que determina se um dado número inteiro é primo ou não.

#include <stdio.h>

int primo(int num, int divisor) {

    if (num < 2) {
         return 0;      
    }
  
  if (num % divisor == 0){
      printf("%d nao e primo!", num);

    }
  else if (divisor * divisor > num){
    printf("%d e primo!", num);
    }
  else{
      return primo(num, divisor + 1);
  }

}


int main(){
    int n, num, divisor;
    
    scanf("%d", &n);

    primo(n,2);

    return 0;
}