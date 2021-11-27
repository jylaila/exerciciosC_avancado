int main()

{

  int inteiro1;

  int inteiro2;

  printf("\nDigite o primeiro numero: ");

  scanf("%d", &inteiro1);

  printf("\nDigite o segundo numero: ");

  scanf("%d", &inteiro2);

  int *ptr_intero1 = &inteiro1;

  int *ptr_intero2 = &inteiro2;

  printf("Soma: %i\n", dobro(ptr_intero1, ptr_intero2));

  printf("Segundo: %i\n", inteiro2);

  return 0;
}
