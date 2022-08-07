//FIBONACCI EM C
//Matéria: Projeto e Análise de Algoritmos II - Recursividade
//https://github.com/EgN03
#include <stdio.h>

int fibonacci(int num){
	if (num == 1){
		return num;
	    
	}
    else{
        if (num == 0){
        return num;
        }
	    else{
		return fibonacci(num-1) + fibonacci(num-2);
	    }
    }
}

int main(){
	int num;
	printf("Digite a casa da serie de Fibonacci:");
	scanf("%d", &num);
	printf("Fibonacci: %d \n", fibonacci(num));
	return 0;
}
