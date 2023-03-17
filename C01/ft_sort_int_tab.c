void ft_rev_int_tab(int *tab, int size)
{
  int temp;
  int i = 0;

  while (i < size)
  {
    while(j < size - 1)
    {
      if (tab[j] > tab[j+1])
      {
        temp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = temp;
      }
      j++;
    }
    i++;
  }
}