/* 
 * File:   main.c
 * Author: Francesco
 *
 * Created on 22 aprile 2015, 16.48
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3
#define MAX_STRLEN 40

struct s_studente
{
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

typedef struct s_studente studente;
struct s_studente alunno;
int i;
FILE *puntaFile;

int main(int argc, char** argv)
{
    
    
    printf("Inserisci %d di alunni.\n", N);
    puntaFile=fopen("elenco.dat","wb");
    
    if(puntaFile)
    {
        for(i=0;i<N;i++)
        {
            printf("Inserisci il nome dell'alunno: ");
            scanf("%s", alunno.nome);
            printf("Inserisci il cognome dell'alunno: ");
            scanf("%s", alunno.cognome);
            printf("Inserisci l'eta' dell'alunno: ");
            scanf("%d", &(alunno.eta));
            printf("Inserisci la classe dell'alunno: ");
            scanf("%s", alunno.classe);
            printf("\n");
            fwrite(&alunno, sizeof(studente), 1, puntaFile);
        }
    
    int fclose(FILE *puntaFile);
}
    else
      printf("Non riesco ad aprire il file.");
        
    return (EXIT_SUCCESS);
}