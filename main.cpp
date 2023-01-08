#include <iostream>
#include <cstring>
#include "message.cpp"

using namespace std;

int main(){
    int i;
    char caracteres[texto.size() + 1];
    int nr = 0;

    strcpy(caracteres, texto.c_str()); //atribui os valores char "texto" que vem do mensage e armazena no caracteres

    for(i = 0; i < texto.size() + 1; i++){
        if(caracteres[i] == divisor){
            nr++;
        }
    }

    cout << nr << " Caracteres " << divisor << " Encontrados.\n";

    return 0;
}