#include <iostream>
using namespace std;
//refazer esse codigo depois com indices nas pessoas pra puxar quem tem o maior salario por indice, fazendo assim funções pra verificar
//e o codigo ficar mais limpo e não ter cout na função maiorSalario.

double calculaSalarioFinal(int totalPecas, double salarioMinimo){
    double salarioFinal = salarioMinimo;
    if(totalPecas >41){
        //3% para as peças entre 32 e 41
        salarioFinal += (10* salarioMinimo * 0.03);
        //5% para as peças a cima de 41
        salarioFinal += ((totalPecas - 41) * salarioMinimo * 0.05);
    }else if(totalPecas > 31){
        //3% para peças a cima de 31 até 41
        salarioFinal += ((totalPecas - 31) * salarioMinimo * 0.03);
    }
    //se fizer até 31 peças, recebe só o salario minimo.
    return salarioFinal;
}

double maiorSalario(double s1, double s2, double s3){
    
    if((s1 >= s2) && (s1 >= s3)){
        cout<<"\nO maior salario eh da primeira pessoa R$" << s1;
        return s1;
    }else if((s2 >= s1) && (s2 >= s3)){
        cout<<"\nO maior salario eh da segunda pessoa R$" << s2;
        return s2;
    }else if((s3 >= s1) && (s3 >= s2)){
        cout<<"\nO maior salario eh da terceira pessoa R$" << s3;
        return s3;
    }
    return 0;

//     if(s1 >= s2 && s1 >= s3) return s1;
//     if(s2 >= s1 && s2 >= s3) return s2;
//     return s3;
}
/* o main é mais indicado pra usar p imprimir, nas funções não é indicado usar p imprimir  */
int main()
{
    int totalPecas, totalPecas1, totalPecas2, totalPecas3;
    double salarioMinimo, media;

    cout << "informe o seu salario -> " << endl;
    cin >> salarioMinimo;
    // ler o numero de peças fabricadas por 3 pessoas no mes.
    // fazer um for pra solicitar 3x a mesma informação.

    cout << "pecas fabricadas pela primeira pessoa -> ";
    cin >> totalPecas1;
    cout << "pecas fabricadas pela segunda pessoa -> ";
    cin >> totalPecas2;
    cout << "pecas fabricadas pela terceira pessoa -> ";
    cin >> totalPecas3;

    totalPecas = totalPecas1 + totalPecas2 + totalPecas3;
    media = totalPecas/3.0;

    double s1 = calculaSalarioFinal(totalPecas1, salarioMinimo);
    double s2 = calculaSalarioFinal(totalPecas2, salarioMinimo);
    double s3 = calculaSalarioFinal(totalPecas3, salarioMinimo);

    cout<<"/------Relatorio final -------/";
    cout << "\nTotal de pecas fabricadas -> " <<totalPecas<<endl;
    cout<<"Media de pecas fabricadas -> "<< media <<endl;
    cout<<"\nsalario da primeira pessoa -> R$"<<s1;
    cout<<"\nsalario da segunda pessoa -> R$"<<s2;
    cout<<"\nsalario da terceira pessoa -> R$"<<s3;
    maiorSalario(s1,s2,s3);

    return 0;
}