/*5. Onibus
Crie um programa que leia a quantidade N de cadeiras de um ônibus, seguido da
quantidade M de informações de compras. Em seguida leia M registros de compra,
contendo o ID da cadeira comprada, que pode ser de numerada de 0 a N-1, o nome, o
cpf e a idade do comprador.*/

//Sei que a estrutura é diferente, que ele já dá o número
//de pessas que querem comprar as cadeiras
//mas isso destoa MUITO da realidade
//então decidimos pegar algo mais complicado
//e rodar até que fosse inserido um número de erro

#include <stdio.h>

int main() {

int n, i, posicao, temp, l, m;

printf(">> Observacao dos autores:\n");
printf("A questao sugere que facamos o exercicio com o numero de testes e nao de quantas\n");
printf("pessoas vao comprar passagem. Isso foi bem estranho e pouco aplicavel na vida \n");
printf("pratica. Por isso aplicamos um modelo semelhante, em que o numero de pessoas\n");
printf("(e nao de testes) eh dado.  \n<<\n\n");


printf("Quantas cadeiras ha no onibus e quantas pessoas querem comprar? \n");
scanf("%d %d", &posicao, &n);
while (posicao < n){
printf("Nao cabem %d pessoas em %d lugares. Insira outra vez o numero de lugares e de pessoas:", n, posicao);
scanf("%d %d", &posicao, &n);
}

int matriz[posicao];

struct busao {
  int cad;
  char nome [60];
  int cpf;
  int id; //idade
} pessoa[posicao];

//Fazendo isso só para garantir que matriz está em 0
  for(i=0; i<posicao; i++){
  matriz[i]=0;}

//Aqui inicia a salvação dos pedidos
  for(i=0; i<n; i++){
  printf ("\nPassageiro %d de %d\n", i+1, n);

    /******Aqui estou olhando se a cadeira esta vaga*******/
    //Obs: Preferi fazer só pra repetir a cadeira no lugar de todo os dados
    
    printf("Digite o numero da cadeira desejada entre as disponiveis:");
    for (m=0; m < posicao; m++){
    if (matriz[m]==0){ 
        printf ("%d ", m);
    }}
    printf ("\n", m);
    
    scanf("%d", &temp);

    //caso esteja ocupada:
    if (matriz[temp]!=0){ 

    do {
    printf("Cadeira %d ja comprada. Digite novo lugar:", temp);
    scanf("%d", &temp);
    } while (matriz[temp]!=0); }

    //caso não esteja
    else{
    matriz[temp]=1;
    pessoa[i].cad = temp ;}
    //printf("Na vez %d, foi ocupada o lugar %d, tornando a matriz %d = %d\n", i+1, temp, i, matriz[temp]);
    /** Fim do teste da cadeira **/

    //printf ("\n Cadeira = %d esta em i = %d\n\n",  pessoa[i].cad, i);

    fflush(stdin);
    printf ("Nome: ");
    scanf ("%s", &pessoa[i].nome);
    fflush(stdin);

    printf ("Cpf: ");
    scanf("%d", &pessoa[i].cpf);

    printf ("Idade: ");
    scanf("%d", &pessoa[i].id);
    }
  
    //printf("**pessoa[4].cad=%d\n", pessoa[4].cad);
    /*Agora vou printar os valores*/
    for(i=0; i < posicao; i++){

    printf ("\n Lugar %d: ", i);
    
    
    /*TEM UM ERRO AQUI:
    DÁ EXIT 139 E NÃO TENHO CONSEGUIDO RESOLVER
    AS VEZES FUNCIONA, AS VEZES NÃO*/
    if (matriz[i]==1){ 
        l = pessoa[i].cad;
    printf ("%s %d %d", pessoa[l].nome, pessoa[l].cpf, pessoa[l].id);
    }

    else{ 
    printf ("vago"); }
}
 

  return 0;
}