#include<stdio.h>
int main(){
  int n;
  char c;
  scanf("%d %c",&n,&c);
  int i = 1;
  while(2 * i * i - 1 <= n) i++;
  i--;
  for (int j = 0;j < i;j++){
    for(int k = 0;k < j;k++)
        printf(" ");

    for(int k = 0;k < 2 * (i-j) -1;k++)
        printf("%c",c);

    printf("\n");
  }

  for (int j = 1;j < i;j++){
    for(int k = 0;k < i - j - 1;k++)
        printf(" ");

    for(int k = 0;k < 2 * j + 1;k++)
        printf("%c",c);

    printf("\n");
  }
  printf("%d\n",n - 2 * i * i + 1);
  return 0;
}