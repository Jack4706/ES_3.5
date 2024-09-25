#include <stdio.h>

int main() {

    int nProdotti;
    float prezzoProdotto,spesa,sconto,spesaScontata;

    printf("inseire il numero dei prodotti:\n");
    scanf("%d", &nProdotti);

    printf("inserisci il prezzo unitario del prodotto:\n");
    scanf("%f", &prezzoProdotto);

    spesa = nProdotti * prezzoProdotto;

    if(spesa >= 10 && spesa < 50) {
       sconto = spesa * 0.10;
       spesaScontata = spesa - sconto;
        printf("l'importo non scontato e' %.2f euro, verra' applicato lo sconto del 10%% ovvero %.2f euro, l'importo scontato e' %.2f euro", spesa, sconto, spesaScontata);
    }
    else if(spesa  >= 50) {
        sconto = spesa * 0.20;
        spesaScontata = spesa - sconto;
        printf("l'importo non scontato e' %.2f euro, verra' applicato lo sconto del 20%% ovvero %.2f euro, l'importo scontato e' %.2f euro", spesa, sconto, spesaScontata);
    }
    else {
        printf("non verra' applicato nessuno sconto, l'importo e': %.2f",spesa);
    }







    return 0;
}
