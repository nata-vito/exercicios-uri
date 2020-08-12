#include <stdio.h>
 
int main() {
    char nome[10];
    double salarioFixo, totalVendas, receberFmes;
    scanf("%s%lf%lf", & nome, & salarioFixo, & totalVendas);
    receberFmes = totalVendas*0.15+salarioFixo;
    printf("TOTAL = R$ %.2lf\n", receberFmes);
    return 0;
}
