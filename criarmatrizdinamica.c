int main()
{
    int **p, i, j;
    p = calloc(5, sizeof(int *)); //aloco memória para as linhas
    for (i = 0; i < 5; i++)
    {
        p[i] = calloc(3, sizeof(int)); //aloco memória para as colunas
    }
    printf("Digite os valores da matriz\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &p[i][j]);
    printf("Matriz lida\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d, ", p[i][j]);
        }
        printf("\n");
    }
    //desalocando memória usada
    for (i = 0; i < 5; i++)
    {
        free(p[i]);
    }
    free(p);
}