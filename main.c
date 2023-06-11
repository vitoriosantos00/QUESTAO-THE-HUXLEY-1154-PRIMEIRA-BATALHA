#include <stdio.h>

int main(void) {
  int p, s, t;
  scanf("%lf %lf %lf",&p, &s, &t);
   if (p!=0 && s!=0 && t!=0)
    if(p>10 || s>10 || t>10)
      if(p%2==0 || s%2==0 || t%2==0)
        printf ("Sim");
      else 
        printf ("Não");
    else
      printf ("Não");
   else
     printf ("Não");
  return 0;
}