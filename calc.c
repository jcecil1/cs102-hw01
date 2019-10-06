#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char **v) {
  if(!strcmp(v[1],"+"))
    printf("%f\n", atof(v[2]) + atof(v[3]));
  if(!strcmp(v[1],"-"))
    printf("%f\n", atof(v[2]) - atof(v[3]));
  if(!strcmp(v[1],"x"))
    printf("%f\n", atof(v[2]) * atof(v[3]));
  if(!strcmp(v[1],"/"))
    printf("%f\n", atof(v[2]) / atof(v[3]));
  return 0;
}
