#include <stdio.h>
#include <string.h>
#define TAM 100

// (a+b)*cd(a)*

void qInicio ( char palavra[TAM],int size);
void q0( int contador, char palavra[TAM],int size);
void q1( int contador, char palavra[TAM],int size);
void q2( int contador, char palavra[TAM],int size);
void qFim();
void qErro();

int main(){
    int size = 0;
    char palavra[TAM];
    fflush(stdin);
    gets(palavra);

    while(palavra[size] != '\0')
    {
    	size++;
	}

    qInicio(palavra,size);

    return 0;
}

void qInicio ( char palavra[TAM],int size ){
    int contador = 0;
    q0( contador, palavra,size );
}

void q0( int contador, char palavra[TAM] ,int size){
    if ( contador < TAM ){
        if ( palavra[contador] == 'a' || palavra[contador] == 'b'){
           q0( ++contador, palavra,size );

        }else if(palavra[contador] == 'c'){
            q1(++contador, palavra ,size);
        }else{
            qErro();
        }

    }
}

void q1( int contador, char palavra[TAM] ,int size){
    if ( contador < TAM ){
        if ( palavra[contador] == 'd' ){
          q2( ++contador, palavra ,size);

        }else{
            qErro();
        }
    }
}

void q2( int contador, char palavra[TAM] ,int size){
    if ( contador < TAM ){
        if ( palavra[contador] == 'a' ){
           q2( ++contador, palavra,size );

        }else if(contador == size){
            qFim();
        }else{
            qErro();
        }

    }
}

void qErro(){
    printf("\nPALAVRA REJEITADA!\n");
}

void qFim(){
    printf("\nPALAVRA ACEITA!\n");
}

