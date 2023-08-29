/*2.Escrever um programa para listar números primos sequencialmente. Você deve
otimizar o programa para que ele liste o maior número possível de primos em 60
segundos.*/

#include <stdio.h>
#include <time.h>

int primo(int num, int divisor) {
  
  if(num<2){
    return 0;
  }
  if(num == 2){
    printf("%d\n", num);
  }

  if (num % divisor == 0){
      return 0;
    }
  else if (divisor * divisor > num){
    printf("%d\n", num);
    return 1;
    }
  else{
      return primo(num, divisor + 1);
  }
}

  /*int primo(int num, int divisor) {

  if (num % divisor == 0){
      return 0;
    }
  else if (divisor * divisor > num){
    printf("%d\n", num);
    return 1;
    }
  else{
      return primo(num, divisor + 1);
  }
}
*/

int watch(int intervalo, time_t inicio) {
int n = 1;
     while ((time(NULL)-inicio) < 60) {
         if (primo(n, 2),n++) {
         }
         intervalo += 2;
    }
}

int main(){
   watch(1,time(NULL));
    return 0;
}
