/*3. Agenda
Implemente uma agenda com data, hora e atividade a ser realizada, em que data
contém, dia, mês e ano e hora contém hora, minuto e segundo. Será passado a
quantidade de atividades seguido de data, hora e atividade. Implemente usando
registro (struct).

Use %02d para imprimir inteiros com dois dígitos sempre. */




//Eu achei inicialmente que fosse para organizar por data mas aparentemente não...



#include <stdio.h>

int main (){
int n_atividades, count;
printf ("Digite o numero de atividades a serem computadas: ");
scanf("%d", &n_atividades);
//printf("O numero de pessoas eh %d", n_pessoas);


/*************** Struct: *******************/

struct cadastro {
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
    int segundo;
    char atividade [60];
} agenda[n_atividades];


/*************** Ciclo para salvar a agenda: *******************/

for (count=0; count < n_atividades; count++){

printf ("\nAtividade numero  %d\n", count+1);

do {
printf ("Dia: ");
scanf ("%d", &agenda[count].dia);}
while (agenda[count].dia > 31);

do {
printf ("Mes: ");
scanf ("%d", &agenda[count].mes);}
while (agenda[count].mes > 13);

printf ("Ano: ");
scanf ("%d", &agenda[count].ano);

do {
printf ("Hora: ");
scanf ("%d", &agenda[count].hora);}
while (agenda[count].hora > 25);

printf ("Minuto: "); //preguiça de por do e while no resto. Por ser prática e 
scanf ("%d", &agenda[count].minuto); //já saber da matéria, não colocarei.
                                       // mas o certo seria até por agenda > 0. 
printf ("Segundo: ");
scanf ("%d", &agenda[count].segundo);

fflush(stdin);
printf ("Atividade: ");
scanf ("%[^\n]", &agenda[count].atividade);
fflush(stdin);
}

/*************** Imprimindo: *******************/
for (count=0; count < n_atividades; count++){
printf ("\n%02d/%02d/%d -", agenda[count].dia,agenda[count].mes,agenda[count].ano);
printf (" %02d:%02d:%02d\n",agenda[count].hora, agenda[count].minuto,agenda[count].segundo);
printf ("%s\n\n", &agenda[count].atividade);}
return 0;
}