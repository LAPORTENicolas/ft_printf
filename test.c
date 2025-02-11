int main(void)
{
  int og, ft;

  og = printf("%c\n", 'z');
  ft = ft_printf("%c\n", 'z');
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%c\n", 65);
  ft = ft_printf("%c\n", 65);
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%c\n", 'z');
  ft = ft_printf("%c\n", 'z');
  printf("Size og=%i ft=%i\n", og, ft);

  og = printf("%s\n", "Ma super chaine");
  ft = ft_printf("%s\n", "Ma super chaine");
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("chaine = %s\n", "MDR");
  ft = ft_printf("chaine = %s\n","MDR");
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("chaine = %s FIN\n", "Test 1 2");
  ft = ft_printf("chaine = %s FIN\n", "Test 1 2");
  printf("Size og=%i ft=%i\n", og, ft);

  char *str;

  str = NULL;
  og = printf("%p\n", (void *)str);
  ft = ft_printf("%p\n", (void *)str);
  printf("Size og=%i ft=%i\n", og, ft);
  str = malloc(10);
  og = printf("pointeur = %p\n", (void *)str);
  ft = ft_printf("pointeur = %p\n", (void *)str);
  printf("Size og=%i ft=%i\n", og, ft);
  free(str);

  og = printf("%d\n", 900);
  ft = ft_printf("%d\n", 900);
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%d\n", INT_MAX);
  ft = ft_printf("%d\n", INT_MAX);
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%d\n", INT_MIN);
  ft = ft_printf("%d\n", INT_MIN);
  printf("Size og=%i ft=%i\n", og, ft);

  og = printf("%i\n", 900);
  ft = ft_printf("%i\n", 900);
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%i\n", UINT_MAX);
  ft = ft_printf("%i\n", UINT_MAX);
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%i\n", 0);
  ft = ft_printf("%i\n", 0);
  printf("Size og=%i ft=%i\n", og, ft);

  og = printf("%x\n", 900);
  ft = ft_printf("%x\n", 900);
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%x\n", UINT_MAX);
  ft = ft_printf("%x\n", UINT_MAX);
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%x\n", 0);
  ft = ft_printf("%x\n", 0);
  printf("Size og=%i ft=%i\n", og, ft);

  og = printf("%X\n", 900);
  ft = ft_printf("%X\n", 900);
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%X\n", UINT_MAX);
  ft = ft_printf("%X\n", UINT_MAX);
  printf("Size og=%i ft=%i\n", og, ft);
  og = printf("%X\n", 0);
  ft = ft_printf("%X\n", 0);
  printf("Size og=%i ft=%i\n", og, ft);
  return 0;
}
