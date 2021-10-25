// Program ce unesene brojeve posloziti od najmanjeg do najveceg.

#include <stdio.h>

void sortiraj(int polje[], int n)
{
   int temp, i, j, k;
   for (j = 0; j < n; ++j)
   {
      for (k = j + 1; k < n; ++k)
      {
         if (polje[j] > polje[k])
         {
            temp = polje[j];
            polje[j] = polje[k];
            polje[k] = temp;
         }
      }
   }
   printf("Brojevi u uzlazecem redu:\n");
   for (i = 0; i < n; ++i)
      printf("%d\n", polje[i]);
}

int main()
{
   int i, n, polje[20];
 
   printf("Kolko brojeva ces napisati u polje:");
   scanf("%d", &n);
   printf("\nUnesi brojeve jedan po jedan:");
   
   for (i = 0; i < n; ++i)
      scanf("%d", &polje[i]);
 
   sortiraj(polje, n);
   return 0;
}
