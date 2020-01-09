#include <stdio.h>

int main(void) {
  
  unsigned int max;
  printf("Max Number:");
  scanf("%u", &max);

  for (int i = 1; i <= max; i++)
  {
    switch(i % 100) 
    {
      case 11:
      printf("%ith\n", i);
      continue;
      case 12:
      printf("%ith\n", i);
      continue;
      case 13:
      printf("%ith\n", i);
      continue;
    }
    switch (i % 10) // 1, 2, 3, 4-9
    {
      case 1:
      printf("%ist\n", i);
      continue;
      case 2:
      printf("%ind\n", i);
      continue;
      case 3:
      printf("%ird\n", i);
      continue;
      default:
      printf("%ith\n", i);
      continue;
    }
  }
  return 0;
}