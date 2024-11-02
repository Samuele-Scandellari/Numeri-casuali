#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int range, livello = 1, risultato,numeroUtente;
    srand(time(NULL));
    int numeroCasuale = (rand() % range) + 1;
    printf("Ho generato un numero tra 1 e %d. Prova a indovinarlo!\n", range);
    int vite;
    while (vite> 0) {
        printf("Inserisci il tuo numero: ");
        scanf("%d", &numeroUtente);
        if (numeroUtente < numeroCasuale) {
            printf("Il numero inserito è minore del numero generato.\n");
        } else if (numeroUtente > numeroCasuale) {
            printf("Il numero inserito è maggiore del numero generato.\n");
        } else {
            printf("Complimenti! Hai indovinato il numero.\n");
            return 1;
        }
        vite--;
        if (vite > 0) {
            printf("Hai ancora %d vite.\n", vite);
        } else {
            printf("Hai perso! Il numero generato era %d.\n", numeroCasuale);
        }
    }
    int gioca;
    while (livello <= 3){
        switch (livello) {
            case 1:
                risultato = gioca (5, 3);
            break;
            case 2:
                risultato = gioca (7, 2);
            break;
            case 3:
                risultato = gioca (10, 1);
            break;
        }
        if (risultato == 1) {
            livello++;
        } else {
            printf("Riprova il livello %d.\n", livello);
        }
    }
    printf("Hai vinto tutto il gioco con %d vite rimanenti!\n",vite);
    return 0;
}