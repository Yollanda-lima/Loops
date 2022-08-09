

Página
2
de 3
//QUESTÂO 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char palavra[50];
int letras, vogais=0, consoante=0, i;
puts("Digite uma palavra");
scanf("%s",palavra);
letras=strlen(palavra);
for(i=0; i<letras; i++){
switch(palavra[i]){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
vogais++;
break;
default:
consoante++;
}
}
printf("Possui: %i Vogais e %i Consoantes",vogais,consoante);
return 0;
}
//QUESTÃO 2
#include <stdio.h>
#include <stdlib.h>
int main() {
int numero,pedido=0;
float totalpedido=0, preco;
while(pedido==0){
puts("Cardápio:");
printf(" 1 - Pounder: R$5.49\n 2 - Quarter: R$6.49\n 3 - Crispy: R$5.89\n 
4 - Chiken: R$6.19\n 5 - Nogget: R$6.19\n");
scanf("%i",&numero);
switch (numero){
case 1:puts("Você escolheu Pounder\n"); totalpedido=totalpedido+5.49;
printf("Total do pedido: %.2f\n",totalpedido);break;
case 2:puts("Você escolheu Quarter\n"); totalpedido=totalpedido+6.49;
printf("Total do pedido: %.2f\n",totalpedido);break;
case 3:puts("Você escolheu Crispy\n"); totalpedido=totalpedido+5.89;
printf("Total do pedido: %.2f\n",totalpedido);break;
aqui devia usar a variável numero para poder sair do loop
case 4:puts("Você escolheu Chiken\n"); totalpedido=totalpedido+6.19;
printf("Total do pedido: %.2f\n",totalpedido);break;
case 5:puts("Você escolheu Nogget\n"); totalpedido=totalpedido+6.19;
printf("Total do pedido: %.2f\n",totalpedido);break;
}
printf("Pedido Realizado %i\n",pedido);
printf("Pedido Realizado %.2f \n",totalpedido);
}
return 0;
}
//QUESTÃO 3
#include <stdio.h>
#define MAX 1000
int main(void){
char frase[MAX],imprime[MAX];
int i,tamanho;
puts("Digite uma frase de no máximo 1000 caracteres");
fgets(frase,1000,stdin);
for(tamanho=0; frase[tamanho]; tamanho++);
for(i=0;frase[i];i++){
imprime[i]=frase[tamanho-i-1];
}
imprime[i]='\0';
printf("Frase Invertida: %s\n",imprime);
return 0;
}
//QUESTÃO 4
#include <stdio.h>
#include <string.h>
int main(){
int i, j, hr, vitaminas,total;
char dias[7] = "DSTQQSS";
vitaminas = 1;
total = 5;
printf("\nDias e Horários para tomar as vitaminas:\n\n");
for(i = 0; i < strlen(dias) - 1; i++)
{
printf("Dia %c: ", dias[i]);
for (hr=6; hr < 18; hr += 3)
{
printf("[%ih Vitamina: %i]",hr,vitaminas % (total + 1));
vitaminas ++;
if(vitaminas == total + 1)
{
vitaminas = 1;
}
}
printf("\n");
}
return 0;
}
