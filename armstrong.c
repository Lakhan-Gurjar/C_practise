#include <stdio.h>
int main() {
  int n, arm = 0, r, c;
  printf("Enter any number : ");
  scanf("%d", &n);
  c = n;// store inputed number in c
  
  while (n>0)
  {
    r=n%10; // remainder r of number divided by 10
    arm = (r*r*r)+arm;
    n/=10;// int divided int gives int and stored int n
  }
  if (c==arm)
  {
    printf("Armstrong Number\n");
  }
  else{
    printf("Not an armstrong number\n");
  }
  

    return 0;
}