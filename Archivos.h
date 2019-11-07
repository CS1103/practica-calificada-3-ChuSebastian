#ifndef PC3_ARCHIVOS_H
#define PC3_ARCHIVOS_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string texto;

string alias;
int bid;

string prod1;
string prod2;

vector <pair<string, string>> vBids;
vector <pair<string, string>> vProd;
//se colocan los vectores de manera global para que se puedan utilizar en la lectura y en la escritura

void lectura() {
    ifstream archivo;
    archivo.open("subasta.txt");

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }


    while (getline(archivo, texto)){
        cout << texto << endl;

    }


    //Leer cada linea del archivo de texto
    //validar de que los productos sean almacenados en el vector pair vProd
    //luego almacenar el alias y el bid en otro vector pair, vBids

    archivo.close();
}






void escritura() {

    ofstream archivo;

    archivo.open("resultado.txt", ios::out);

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }


    archivo << "Prueba del archivo";
    archivo.close();

}










#endif //PC3_ARCHIVOS_H
