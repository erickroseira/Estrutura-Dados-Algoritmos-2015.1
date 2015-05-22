#include <math.h>


struct ponto {
	float x;
	float y
};

typedef struct ponto Ponto;

//a)Declare uma variável do tipo ponto.
Ponto p;


//b)Use scanf para solicitar valores para a coordenada x e y da variável que criou e imprima na tela.
scanf("%d", &p1->x);
scanf("%d", &p1->y);
printf("%d", p1->x);
printf("%d", p1->y);


//c)Separando o código, crie duas funções. Uma para capturar os valores de (x,y) e outra para imprimir.
void captura(Ponto p1){
	scanf("%d", &p1.x);
	scanf("%d", &p1.y);
}

void imprime(Ponto p1){
	printf("X= %d", p1.x);
	printf("Y= %d", p1.y);
}


//d)Crie um ponteiro para estrutura.
Ponto *p1;


//e)Faça o ponteiro apontar para estrutura declarada em a.
p1 = &p;


//f)Crie duas funções. Uma para capturar os valores de (x,y) e outra para imprimir.
void captura2(Ponto *p){
	scanf("%d", &p->x);
	scanf("%d", &p->y);
}

void imprime2(Ponto *p){
	printf("X= %d", p->x);
	printf("Y= %d", p->y);
}

//g)Comente sobre as funções em c. e f.


	Na letra c a estrutura foi passa por valor , já na letra f a estrutura foi passada
	por referência utilizando ponteiros para manipular a estrutura.





//h)Crie uma função para determinar a distância entre dois pontos.
float distancia(Ponto *p, Ponto *q){
	float dx = p->x - q->x;
	float dy = p->y - q->y;
	
	float resultado = sqrt (dx*dx - dy*dy);
	return resultado;
}




//2)a)Crie uma função de inicialização que atribui NULL a todos os elementos da tabela...
void inicializa(){
	int i;
	for(i=0; i <100;i++){
		tab[i] = null;
	} 
}


//b) Crie uma função que armazena os dados de um novo aluno numa posição do vetor...
void armazena(int posicao){
	char nome[81];
	int mat;
	char end[121];
	char tel[21];
	
	
	scanf("%s", nome);
	scanf("%d", &mat);
	scanf("%s", end);
	scanf("%s", tel);
	
	if(tab[posicao] == null){
		
		tab[posicao] = (PAluno*) malloc(sizeof(Aluno))
		
	}else{
		tab[posicao]->nome = nome;
		tab[posicao]->mat = mat;
		tab[posicao]->end = end;
		tab[posicao]->tel = tel;
	}
}

//c)Crie uma função para remover os dados de um aluno da tabela.
void libera(int posicao){
	free(tab[posicao]);
	
}

//d)Crie uma função para consultar os dados. Considere que a posição da tabela será passada.
void consultar(int posicao){
	printf("Nome: %s",tab[posicao]->nome );
	printf("Matricula: %d",tab[posicao]->mat );
	printf("Endereço: %s",tab[posicao]->end );
	printf("Telefone: %s",tab[posicao]->tel );
}

//e)Crie uma função que imprima os dados de todos os alunos da tabela.
void imprimeALL(){
	int i=0;
	for(i=0;i<100;i++){
		printf("Nome: %s",tab[i]->nome );
		printf("Matricula: %d",tab[i]->mat );
		printf("Endereço: %s",tab[i]->end );
		printf("Telefone: %s",tab[i]->tel );
	}
}



