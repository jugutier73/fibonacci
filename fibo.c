#include <stdio.h>
#include <math.h>

int fibo(int f) {
  if (f == 1) return 0;
  if (f == 2) return 1;
  return fibo(f - 1) + fibo(f - 2);
}

int main(int argc, char** argv) {

  printf("%f\n",sqrt(fibo(5)));

  return 0; 
}
