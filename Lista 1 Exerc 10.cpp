# include  < stdlib.h >
# include< math.h >
# include  < stdio.h >

 int  main (){
 int n, i, vetor[ 6 ], lado;
 printf ( " Digite o nº de vezes que o dado foi lançado: " );
 scanf ( " %d " , &n);
  for (i = 1 ; i <= 6 ; i++)
	{
	vetor[i] = 0 ;	
	}
    for (i = 1 ; i <= n; i++)
	{
	printf ( " Digite a face do dado: " );
	scanf ( " %d " , &lado);
	vetor[lado]++;
	}
	for (i = 1 ; i <= n; i++)
	{
	if (vetor[i] != 0 ) { printf ( " Um rosto %d caiu %d vezes. \n " , i, vetor[i]); }	
	}
 retorna  0 ;	
}
