#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){ 
    char palavra[30], letra[1], secreta[30];
    int tamanho=0, i=0, chances=6, acertos=0;
    bool acerto = false;
    cout << "\t *** JOGO DA FORCA ***";
    cout << "\nUm jogador tapa os olhos e o outro digita a palavra secreta: ";
    cin >> palavra;
    system("clear");
    cout << "\t *** JOGO DA FORCA *** \nTente descobrir qual é a palavra oculta..." << 
    "\n...mas atenção!!! \nAs tentativas para advinhar as letras são limitadas ;)";
    
    while(palavra[i] != '\0'){
        i++;
        tamanho++;
    }
    for (i = 0; i<30; i++){
        secreta[i] = '-';
    }
    while ((chances > 0) && (acertos < tamanho)){
        cout << "\nCHANCES RESTANTES: " << chances << "\n";
        cout << "\tPalavra secreta: " ;
        for (i =0; i <tamanho; i++){
            cout << secreta[i];
        }
        cout << "\n \n Digite uma letra: ";
        cin >> letra[0];
        for (i=0; i<tamanho; i++){
            if (palavra[i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if (acerto == false){
            chances--;
        }
        acerto = false;
        system("clear");
    }
    if (acertos == tamanho){
        cout << "\n\t❤ ❤ ❤ ❤ Você venceu! ❤ ❤ ❤ ❤";
    } else {
        cout << "OH, não... você perdeu. :(";
    }
    return 0;
}