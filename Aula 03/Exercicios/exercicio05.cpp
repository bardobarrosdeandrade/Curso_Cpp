#include <iostream>
using namespace std;

//  return 0;
/*
🔹 Exercício 4 - Brinquedos do Parque
Descrição: Nos parques de diversão, alguns brinquedos tem idade e altura mínimas para poder andar neles.
O parque Ambrolândia possui 3 brinquedos que possuem essa limitação:

Final Killer: 1,7m de altura ou 16 anos.
Elevator of Death: 1,4m de altura e 14 anos.
Barca Viking: 1,5m de altura e 12 anos.
Dada a altura e a idade de uma pessoa, faça um programa que identifique quais e quantos brinquedos ele pode andar.
*/
int main(){
        int idade = 0;
        float altura = 0;
        // não funciona pois o else fica ligado ao ultimo if e dessa forma, ele não valida todas as opçoes, da erro por exemplo, quando eu coloco maior que 99 e > 1.40 
        // não são listados todas as opçoes, porque o else não deixa. o cerrto seria fazer com incremento ou com booleano, como no ultimo exemplo la em baixo.
        
        cout << "----- Verifica se pode andar no brinquedo -----";

        cout << "\nInforme sua idade : " << endl;
        cin >> idade ;
        cout << "Informe sua altura (cm) : " << endl;
        cin >> altura ;

        cout << "\n>> Brinquedos disponiveis para voce:\n";

        if (idade >= 16 && altura >= 1.70){
            cout << " \n- Final Killer" ;
            
        }if (idade >= 14 && altura >= 1.40){
            cout << "\n- Elevator of Death";

        }if (idade >= 12 && altura >= 1.50){
            cout << "\n- Barca Vikings";       
        }else (idade ){
            cout << "Nenhum brinquedo disponivel para sua idade e altura.\n";
        }

    
    
// int idade = 0;
// float altura = 0;
// bool podeEntrar = false;

//     cout << "Verificacao para entrar no brinquedo : " << endl;

//     cout << "Informe sua idade : " ;
//     cin >> idade ;
//     cout << "Informe sua altura (cm): " ;
//     cin >> altura ;

//      cout << "\n>> Brinquedos disponiveis para voce:\n";

//     if (idade >= 16 && altura >= 1.70){
//         cout << "- Final Killer\n";
//         podeEntrar = true;
//     }
//     if (idade >= 14 && altura >= 1.40){
//         cout << "- Elevator of Death\n";
//         podeEntrar = true;
//     }
//     if (idade >= 12 && altura >= 1.50){
//         cout << "- Barca Vikings\n";
//         podeEntrar = true;
//     }if (!podeEntrar){
//         cout << " Infelizmente, voce nao atende aos requisitos de nenhum brinquedo.\n";
//     }
    

}