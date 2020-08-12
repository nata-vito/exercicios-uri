#include <stdio.h>

int main() {
  int A, B, C, D, moduloA, somaCD, somaAB;
  scanf("%d%d%d%d",&A,&B,&C,&D);
  moduloA=A%2;
  somaCD=C+D;
  somaAB=A+B;
  if(B>C && D>A && somaCD>somaAB && C>0 && D>0 && moduloA==0)
  {
    printf(Valores aceitos);
  }



  return 0;
}
