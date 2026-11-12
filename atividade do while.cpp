#include<stdio.h>

int main (){
	int x =1;
	
  printf("================================\n");
  printf("       CONTAGEM CRESCENTE      \n");
  printf("================================\n\n");	
	

	do{
	
		printf("%d\n", x);
		x++;
		
	} while ( x <= 9);

	
	printf("%d\n", x);
	
	x = 10;	
		
	printf("\n================================\n");
    printf("       CONTAGEM DECRESCENTE     \n");
    printf("================================\n\n");
	
	do{
		
		printf("%d\n", x);
		x--;
	
	}while ( x >= 1);
	
	 printf("\n================================\n");
    printf("       FIM DO PROGRAMA!         \n");
    printf("================================\n");

	
	
	return 0;
}
