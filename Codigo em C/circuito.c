// Curso: Engenharia de Software
// Disciplina: Sistemas Embarcados
// Professor: Vandermi Joao da Silva
// Autor: Carlos Eduardo Pinto Rossy
// Data: 09/10/2021

// Codifique o circuito desenvolvido na
// quest�o 1 em linguagem de programa��o C.

#include <stdio.h>
int main(){
	
	int a,b,x;
	
	a = 1; //basta alterar o valor de a para 1 ou 0.
	b = 1; //basta alterar o valor de b para 1 ou 0.
	
	x = a || b; //fazendo a comparacao da  porta OR e salvando na variavel x.
	
	printf("Porta OR de A,B is %d\n",x); //mostrando o valor da porta OR.
	printf("Negacao da Porta OR de A,B is %d",!x); //mostrando a nega�ao da porta OR.
	
}
