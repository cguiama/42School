#include<stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
  int i = 0;
  int j = size - 1;
  int temp;

  while (i < j)
  {
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
    i++;
    j--;
  }
}

int main() {
    int my_array[] = {1, 2, 3, 4, 5};
    int size = 5;
    ft_rev_int_tab(my_array, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }
    // Output: 5 4 3 2 1
    return 0;
}
