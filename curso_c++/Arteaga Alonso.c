//Adan
#include<stdio.h>
#include<string.h>
int main(void){
	char cad[]={"Hola como estas espero que estes bien adios hoy"};
	char letra;
	FILE *a;
	a=fopen("adan.txt","w+");
	char palabras[10][10];
	printf("Dame la letra: ");
	scanf("%c",&letra);
	char *A;
	A=strtok(cad," ");
	int index=0;
	while(A!=NULL){
		if(A[0]==letra) {
			puts(A);
			fputs(A,a);
			fputs("\n",a);
		}
		strcpy(palabras[index],A);
		index++;
		A=strtok(NULL," ");
	}
	fclose(a);
	int i;
	for(i=0;i<index;i++){
		puts(palabras[i]);
	}
}