#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota1;
	float nota2;

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

	float total = nota1+nota2;
	
	printf("Nota total: %f", total);
	
	return 0;	
}
