// Exercício_conta de água.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main() {
    int consumo, quantidade;
    float valorConta;
    valorConta = 0;
     
    do
    {
        printf("Digite um consumo valido \n");
        printf("Digite o cosumo: ");
        scanf_s("%d", &consumo);
    } while (consumo < 0 || consumo > 120);

    if (consumo > 100)
    {
        quantidade = consumo - 100;
        consumo -= quantidade; /*↔ é o mesmo que escrever (consumo = consumo - quantidade)*/
        valorConta = valorConta + (quantidade * 5);
    }
    if (consumo > 30)
    {
        quantidade = consumo - 30;
        consumo -= quantidade; /*↔ é o mesmo que escrever (consumo = consumo - quantidade)*/
        valorConta = valorConta + (quantidade * 2);
    }
    if (consumo > 10)
    {
        quantidade = consumo - 10;
        consumo -= quantidade; /*↔ é o mesmo que escrever (consumo = consumo - quantidade)*/
        valorConta = valorConta + (quantidade * 1);
    }
    valorConta = valorConta + 7;

    printf("Valor da conta a pagar: %.2f \n", valorConta);
    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
