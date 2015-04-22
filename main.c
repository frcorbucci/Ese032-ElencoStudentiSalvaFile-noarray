/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 5
#define MAX_STRLEN 30

// Definisci il tipo di dato struct s_studente
struct s_studente
{
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    unsigned int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) 
{
    int i;
    studente alunno[N];
    
    printf("Inserisci i dati per %d studenti:", N);
    for(i=0;i<N;i++)
    {
        printf("Inserisci il nome dello studente ");
        scanf("%s", alunno[i].nome);
        printf("Inserisci il cognome dello studente ");
        scanf("%s", alunno[i].cognome);
        printf("Inserisci l'eta' dello studente ");
        scanf("%d", &(alunno[i].eta));
        printf("Inserisci la classe dello studente ");
        scanf("%s", alunno[i].classe);
        printf("\n");
    }
    
    FILE *puntoFile;
    puntoFile=fopen("elenco.dat","r");
    if(puntoFile)
    {
         fwrite(alunno, sizeof(studente), N, puntoFile);
    }
    
    int fclose(FILE *puntaFile);
    
    return (EXIT_SUCCESS);
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    // Dichiara le variabili locali
    studente studente;
    int i;
    
    // Codice per l'inserimento, da parte dell'utente, dei dati e del salvataggio
    // nel file
    FILE *puntaFile;
    puntaFile = fopen("elenco.dat", "w");
    
    printf("Inserisci i dati per %d studenti:", N);
    for(i=0;i<N;i++) {
        printf("\nInserisci il nome: ");
        scanf("%s", studente.nome);
        fprintf(puntaFile, "%s \n", studente.nome);
        
        printf("Inserisci il cognome: ");
        scanf("%s", studente.cognome);
        fprintf(puntaFile, "%s \n", studente.cognome);
        
        printf("Inserisci l'eta': ");
        scanf("%d", &(studente.eta));
        fprintf(puntaFile, "%d \n", studente.eta);
        
        printf("Inserisci la classe: ");
        scanf("%s", studente.classe);
        fprintf(puntaFile, "%s \n", studente.classe);
    }
    
    fclose(puntaFile);
    
    return (EXIT_SUCCESS);
}