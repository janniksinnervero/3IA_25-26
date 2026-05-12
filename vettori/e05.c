/*Esercitazione pro verifica di recupero:

Realizzare un programma C che presenti un menu con le voci qui di seguito, la scelta deve essere
gestita con uno switch-case e per ogni punto deve essere predisposta una funzione. L’elenco di seguito presenta il numero della scelta,
 con dicitura, il nome della funzione, la spiegazione di cosa esegue.
   
   “Prodotto con somme”,
   prodottoSommeSuccessive: richiedere nel case due   valori maggiori di zero A e B, quindi passarli alla funzione che   stampa
    il prodotto calcolato per somme successive.
   
   “Converti a base 16”,   convertiBase16: richiede nel case un valore decimale    che viene passato alla funzione per convertirlo e
    stamparlo in base    16 utilizzando 3 cifre esadecimali. Controllare che il valore   decimale immesso dall’utente sia rappresentabile
     in base 16 con 3   cifre; in caso negativo stampare “Valore non rappresentabile”. 
   
   “Area cerchio o quadrato”,   areaCerchioQuadrato:   richiedere due valori all’utente, il primo è una lunghezza il   secondo può
    valere 0 o 1 se 0 indica cerchio se 1 indica quadrato.   La funzione riceve i due valori e calcola l’area della figura
       scelta utilizzando la lunghezza inserita.
   
   “Somma   cifre”, sommaCifre:   nel case viene richiesto un valore compreso tra 1 e 9999, la
   funzione riceve tale valore quindi calcola e stampa la somma delle   singole cifre che lo  compongono.
   es. numero: 135 → 5+3+1=9.

Dove
non specificato è lasciata libertà nel nome delle variabili cercando di dare loro nomi significativi. Le funzioni non eseguono nessun
 input, ma ricevono i valori come parametri. E’ richiesto che nella sezione
prototipi vi siano i commenti come da convenzione vista a lezione.*/

#include<stdio.h>
#include "lib.c"

int main(void){
    int menu=1;

    while(menu!=0){
        printf("\nSELEZIONA UN OPZIONE:\n 1 ---> Prodotto con somme\n 2 ---> Conversione base 16\n 3 ---> Area di cerchio o quadrato\n 4 ---> Somma cifre di un numero\n");
        scanf("%d", menu);

        switch(menu){
            case 1:{
                printf("\nInserisci primo valore: ");
                scanf("%d", n1);

                while(n1<0){
                    printf("\nInserisci un numero maggiore di 0: ");
                    scanf("%d", n1);
                }

                printf("\nInserisci secondo valore: ");
                scanf("%d", n2);

                while(n2<0){
                    printf("\nInserisci un numero maggiore di 0: ");
                    scanf("%d", n2);
                }

                prodottoSommeSuccessive(n1, n2);
            }
        }
}