//prototipi

/**
 * Inizializza un vettore con valori random compresi tra 1 e 10
 * @param int* riferimento al vettore da inizializzare
 * @param int dimensione del vettore
 */
void initVettore(int _vet[], int _dim);

/**
 *Visualizza un vettore di valori interi
 * @param int* riferimento al vettore da visualizzare
 * @param int dimensione del vettore
 */
void stampaVettore(int _vet[], int _dim);
//----e03.c------
/**
 * funzione che converte un numero intero in un array binario.
 * @param int numero da convertire.
 * @param int[] riferimento al vettore binario.
 * @param int dimensione del vettore.
 * @return 0/1 in caso affermativo o negativo dell' avvenuta conversione.
 */ 
int convertiBin (int n, int _v[], int _dim);

/**
 * stampa un vettore di bit in formato binario.
 * @param int[] riferimento al vettore.
 * @param int dimensione del vettore.
 */
void stampaBin(int _v[], int _dim);
//------------
void setDist(int v[], int dim);

/*
rightRotate(): sposta gli elementi di un vettore di una posizione a
 destra, e l'ultimo al posto del primo; es.: { 1, 2, 3, 4 } --> { 4, 1, 2, 3 }
 */
void rightRotate(int v[], int dim);