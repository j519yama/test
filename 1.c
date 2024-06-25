#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  // &演算子より==演算子の方が処理優先度が高いため，比較が先に行われてしまっていた．よって，括弧を追加して処理順を変更した
  if( (n & 1) == 0 ){
    printf("%d は偶数です\n", n);
  }else{
    printf("%d は奇数です\n", n);
  }
  return 0;
}
