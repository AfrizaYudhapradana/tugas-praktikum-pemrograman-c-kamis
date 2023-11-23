#include <stdio.h>
 main()
{
	int A [1024] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, };
	int N, I, flag = 0;
	printf ("Bilangan\n");
	for (I=0; I<=10; I++)
	printf ("%5i" , A[I]);
	printf ("\n");
	
	printf("input bilangan yang dicari : ");
	scanf("%i",  &N);
	
	for (I=0; I<10; I++){
		if (A[I] == N)
		flag = 1;
		
	}
	if (flag == 1){
		printf ("Bilangan %i Ada ditemukan.", N);
	}else {
		printf ("Bilangan %i Tidak ditemukan.", N);
		
	}
	
	return 0;
	
		
}
