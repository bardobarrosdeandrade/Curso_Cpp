#include <iostream>
using namespace std;

int main()
{
    // busca
    string texto = "ola";
    size_t indice = texto.find("l");
    /* if(indice != string::npos){

        cout << indice << endl;
    }*/
    // repetição

    for (int i = 0; i < texto.length(); i++)
    {
        if (texto.at(i) == 'a' || texto.at(i) == 'A')
        {
            cout << "O 'a' aparece na posição : " << i << endl;
        }
    }
}
