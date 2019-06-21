#include <stdio.h>

int main(void)
{
  float a;
  int b, c, d;
  printf("请输入上证指数：");
  scanf("%f", &a);
  printf("请输入有效楼层数: ");
  scanf("%d", &b);
  c = a * 100;
  d = c % b;
  printf("获奖楼层是 %d \n", d);
  return 0;
}
