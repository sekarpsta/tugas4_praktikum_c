#include <stdio.h>
int main(){
  
    int n; 
    printf("Masukkan bilangan : ");
    scanf("%d", &n);
   
    if(n > 50) {
      n = n + 10;
    } else {
      n = n - 25;
    }
    
    printf("Hasil akhir : %d\n", n);
    
    return 0; 
}