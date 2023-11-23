#include <stdio.h>
 main()
{

	int A [10] = {100, 95, 90, 85, 75, 70, 65, 60, 55,};
	int N, I, flag = 1;
	printf ("Bilangan\n");
	for (I=0; I<10; I++)
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
	
	
