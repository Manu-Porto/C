/*2. Pacientes
Seu objetivo para este exercício será desenvolver uma espécie de agenda. 
Você receberá na primeira linha de entrada um inteiro N indicando 
o número de instâncias da sua agenda, isto é, quantas pessoas ela deverá guardar.*/




#include <stdio.h>

int main (){
int n_pessoas, count, id_teste;
printf ("Digite o numero de pessoas que voce vai salvar na agenda: ");
scanf("%d", &n_pessoas);
//printf("O numero de pessoas eh %d", n_pessoas);


/*************** Struct: *******************/

struct cadastro {
    char nome [60];
    float altura;
    float peso;
    char genero [1];
    int id;
} pessoa[n_pessoas];


/*************** Ciclo para salvar cadastros: *******************/

for (count=0; count < n_pessoas; count++){

fflush(stdin);
printf ("Nome: ");
scanf ("%[^\n]", &pessoa[count].nome);
fflush(stdin);

printf ("Altura: ");
scanf ("%f", &pessoa[count].altura);

printf ("Peso: ");
scanf ("%f", &pessoa[count].peso);


printf ("Genero: ");
scanf ("%s", &pessoa[count].genero);


printf ("Id: ");
scanf ("%d", &pessoa[count].id);
}

/*************** Ciclo para printar informacoes salvas: *******************/

printf ("\n");
do {
    printf ("Digite o id: ");
    scanf("%d", &id_teste); //receber o id


/*******printar as informacoes desse id*********/
for (count=0; count < n_pessoas; count++){

    if(id_teste == pessoa[count].id){

      printf("\nNome: %s\nAltura: %.2f\nPeso: %.2f\n", pessoa[count].nome, pessoa[count].altura, pessoa[count].peso);      
      printf ("Genero: %s\nId: %d\n\n", pessoa[count].genero, pessoa[count].id);}
      printf ("Obs: Digite -1 para cancelar:\n");
    }    } while (id_teste !=-1);

return 0;
}