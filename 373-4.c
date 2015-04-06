#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){
    int Indice_corrente,i,x,Valore_max = 0; // Indice_corrente non è altro che il valore minimo dell'array.
    int vsec[N];
    int v[N];
    
    for(i = 0; i < N; i++) {
          printf("Inserisci l'elemento %d\n",i);
          scanf("%d", &v[i]);
          }
          
    Indice_corrente = v[0];
    Valore_max = v[0];
    
    for(i = 1; i < N; i++) {      //Con questo ciclo trovo il valore massimo e il valore minimo dell'array, mi serviranno entrambi per fissare gli estremi del prossimo ciclo.
          if(v[i] > Valore_max) {
                  Valore_max = v[i];
                  }
                  else if (v[i] < Indice_corrente){
                       Indice_corrente = v[i];
                       }
          }
    x = 0;
    while(Indice_corrente<=Valore_max){   //Ciclo esterno che mi permette di verificare se il valore corrente di "Indice_corrente" è presente nell'array DISORDINATO.
          i = 0;
          while(i < N) {    //Ciclo interno che mi confronta il valore di "Indice_corrente" con ogni elemento dell'array DISORDINATO.
                  if(Indice_corrente == v[i]){  //Se il valore di "Indice_corrente" è presente nell'array DA ORDINARE, porterò tale valore nella posizione Xesima dell'array ORDINATO ("vsec")
                         vsec[x] = v[i];
                         x++;
                         }
                  i++; 
          }
          Indice_corrente++;
}

printf("\n\n\n");

for(i = 0; i < N; i++) {           //Stampa del vettore ordinato.
         printf("%d\n", vsec[i]);
         }

return (EXIT_SUCCESS);   
}
