#include <iostream>
using namespace std;
/* 
Exercício 2 - Analisando o CRE
Descrição: Fernanda tem um projeto de extensão e precisa
selecionar alunos. Escreva um programa para que ela possa
informar matrícula (int) e CRE (float)
dos vários inscritos, e ver, ao final,
a matrícula do aluno com menor CRE e o CRE médio de todos os candidatos.
*/
//pensando aqui em como fazer, pegar o alunom declarar variavel nele 
    //e colocar o ++ incremento a cada aluno que se inscrever pra não precisar
    // declarar todos os alunos, for ou while pra fazer essa estrutura de repetição
    //pegar o indice pra mostrar qual numero de aluno, tipo aluno((indice)1)
int main(){
    int matriculaAtual= 0;
    float creAtual= 0;

    int contador=0;
    float somaTotal =0;

    float melhorCre= 101.0;
    int matriculaMelhorCre=0;

    cout<<"Sistema de analise de CRE. Digite 0 na matricula pra finalizar.\n\n";

    do{
        cout<<"Insira a matricula -> ";
        cin>>matriculaAtual;
        if(matriculaAtual ==0){
            break;
        }
        cout<<"Insira o CRE: ";
        cin>>creAtual;

        //logica de sempre para o menor CRE e a media
        //se o creaAtual for menor que o melhor cre, ele vai ser substituido pelo atual(sendo o melhor cre)
        if(creAtual < melhorCre){
            melhorCre = creAtual;
            matriculaMelhorCre = matriculaAtual;
        }

        somaTotal += creAtual;
        contador++;

        cout << "\nAluno " << matriculaAtual << " cadastrado com sucesso! Proximo aluno.\n\n";
        
    }while(matriculaAtual != 0); // o loop continua enquanto a matricula não for 0(o zero encerra)

    cout<<"\n------------------------------\nResultado: ";
    if(contador >0){
        float media = somaTotal / contador; //fazendo a contagem da media de todos os alunos
        cout<<"O aluno com menor CRE eh a matricula: "<<matriculaMelhorCre<<" com CRE de "<< melhorCre<<"\n";
        cout<<"O CRE media de todos os candidatos e: "<<media<<"\n";
    }else{
        cout<<"Nenhum aluno foi cadastrado\n";
    }
    // (mediaCre + mediaCre) / mediaCre;
    /* ao final, amatrícula do aluno com menor CRE e o
    CRE médio de todos os candidatos. */
    return 0;

}