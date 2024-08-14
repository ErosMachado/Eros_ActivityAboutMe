#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade = 18;

    // Github do Autor do código: @ErosMachado
    // Data de criação: 14/08/2024

    //  Informações Pessoais
    printf("Nome: Eros Hanry Rodrigues Machado\n");

    printf("Idade: %d anos\n", idade);
    if (idade >= 18)
    {
        printf("Maior de idade!\n");
    }
    else
    {
        printf("Ainda menor de idade!\n");
    }
    printf("Cidade: São Paulo\n");

    // Formação Acadêmica
    printf("\nFormacao Academica:\n");
    printf("- Tecnico em Desenvolvimento de Sistemas pela Etec de São Paulo (ETESP)\n");
    printf("- Semi-formacao em Tecnico em Informatica Para Internet na Etec Sebrae\n");
    printf("- Curso tecnico em Eletronica Integrado ao Ensino Medio no IFSP\n");

    // Área de Atuação
    printf("\nArea de Atuacao:\n");
    printf("- Interesse em Fisica, Engenharia de Computacao, e Eletronica\n");
    printf("- Experiência em Java, C, C#, python, Assembly, HTML, CSS e Javascript \n");

    // Experiência Profissional
    printf("\nExperiencia Profissional:\n");
    printf("- Trabalhei como estagiário em uma empresa de tecnologia automotiva\n com foco específico em painéis de intrumentos do grupo VW\n");

    // Curiosidades
    printf("\nCuriosidades:\n");

    char *curiosidades[] = {
        "Entusiasta de olimpiadas cientificas, incluindo Fisica, Astronomia e Quimica",
        "Pai de dois gatos laranjas (Sim! Laranjas!)",
        "Apaixonado por xadrez"};

    for (int i = 0; i < 3; i++)
    {
        printf("- %s\n", curiosidades[i]);
    }

    // Comentário final
    printf("\nResumo Final:\n");
    printf("Enfim, esse sou eu. Estudante apaixonado por ciencia e tecnologia,\n sempre buscando novos desafios e oportunidades de aprendizado.\n");

    // Mensagem final
    printf("\nObrigado por ler meu codigo!\n");

    return 0;
}
