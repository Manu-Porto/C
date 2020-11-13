/*3. Dietas
Seu objetivo para este exercício será desenvolver uma espécie de agenda. 
Você receberá na primeira linha de entrada um inteiro N indicando 
o número de instâncias da sua agenda, isto é, quantas pessoas ela deverá guardar.*/

/*A parte de ter calorias iguais não está dando certo*/
/*Não estou conseguindo fazer uma comparação acertiva*/

#include <stdio.h>

int main (){
int n_pacotes, count, id_teste, i, l;
void alimentos (int *a, int MAX);
printf ("Digite quantos pacotes sao: ");
scanf("%d", &n_pacotes);
int vetor[n_pacotes];

/*************** Struct: *******************/

struct comida {
    char nome [15];
    float calorias;
    float carb;
} alimento[n_pacotes];


/*************** Ciclo para salvar pacotes: *******************/

for (count=0; count < n_pacotes; count++){

fflush(stdin);
printf ("Insira o nome do alimento: ");
scanf ("%s", &alimento[count].nome); //nome do alimento, né?
fflush(stdin);

printf ("Insira as calorias do pacote: ");
scanf ("%f", &alimento[count].calorias); 
vetor[count] = alimento[count].calorias;

printf ("Insira a quantidade de carboidrato do pacote: ");
scanf ("%f", &alimento[count].carb);
}

/*************** Ciclo para printar informacoes salvas: *******************/
alimentos (vetor, n_pacotes);

for (i=0; i < n_pacotes; i++) {
for (count=0; count < n_pacotes; count++){

  if (vetor[i] == alimento[count].calorias) {

  if (vetor [count] == vetor [count+1]){
    if (alimento[i].carb > alimento[i+1].carb){
    printf ("%d - %s\n", i, alimento[i+1].nome);
    printf ("%d - %s\n", i+1, alimento[i].nome);}

   else {
    printf ("%d - %s\n", i, alimento[i].nome);
    printf ("%d - %s\n", i+1, alimento[i+1].nome);}
    i=i+1;
}

  else 
  printf ("%d - %s\n", i, alimento[count].nome);
}

}}
printf ("\n");


return 0;
}

void alimentos (int *a, int quant)
{
 int i, j, tmp;
  for(i = 0; i < quant; i++){
  for(j = i+1; j < quant; j++){
    if(a[j] < a[i]) {
     tmp = a[i];
     a[i] = a[j];
     a[j] = tmp;
}}}
 
 /*for(i = 0; i < quant; i++){
 for(j = 0; j < quant; j++){
 if(a[j] == a[i]) {
     a[i] = a[i] + b[i];
}}}*/

}