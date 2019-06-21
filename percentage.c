#include <stdio.h>
#include <math.h>

int d, percent, i, numberPercentage;
float result;
float base = 100;

int main(void){
  printf("请输入有效楼层： ");
  scanf("%d", &d);
  printf("请输入需要多少百分比：");
  scanf("%d", &numberPercentage);
  int percentArry[numberPercentage];
  printf("请输入百分比，每个数值间空格，最后回车：");
  for (i = 0; i < numberPercentage; i++){
    scanf("%i", &percent);
    percentArry[i] = percent;
  }

  for (i = 0; i < numberPercentage; i++){
    result = percentArry[i] * d / base;
    printf("%.f\n", round(result));
  }

}
