#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int primo(int numero){
	int j,a=0;
	
	for(j=2; j<numero; j++){
		if(numero==2){
			a=0;
		}
		else if(numero%j==0){
			a = 1; //não primo
		}
	}
return a;	
}



int main(){
	int n,i=0,k,m;
	int vet[20000], tmp = 0;
	
	for(;;){
	
		scanf(" %i", &n);	
	
		if(n==(-1)){
			vet[i]= -1;
			break;
		}
		if(n==1){
			vet[i]= 1;
			i++;
		}
		else {
			if(primo(n)==1){
				vet[i]= n;
				i++;
			}	
		}	
	}
	
	for (k=0; k<i; k++){       //Ordena decrescente
        if(vet[k]<vet[k+1]){
          	tmp=vet[k+1];
             vet[k+1]=vet[k];
             vet[k]=tmp;
             k = -1;
            }
        }	

    for(m=0; m<=k; m++){         // imprime numero em ordem decrescente
        if(vet[m]==(-1)){
        	break;
		}
		printf("%d\n", vet[m]);   
    }	
}
