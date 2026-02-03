// Programação II
// Dupla: Rhannya de Oliveira e Yan Pettene

#include <stdio.h>
#include <string.h>

int main()
{
    /*INICIO DECLARAÇÃO DE VARIÁVEIS*/
    int opcao, tipo;
    char nome[30], animal[30], confirmacao;
    float peso, valor = 0;
    int cont_atendimentos = 0, cont_cachorro = 0, cont_gatos = 0, cont_outros = 0;
    float valor_total = 0;

    // variáveis auxiliares (último atendimento)
    int aux_tipo = 0;
    char aux_nome[30], aux_animal[30];
    float aux_peso = 0, aux_valor = 0;
    int aux_pagamento = 0;
    float aux_troco = 0, aux_desconto = 0, aux_acrescimo = 0;

    // valores padrão dos serviços
    float vacina = 40, vermi = 30, banho_tosa = 50;
    char ad;
    int  op_pag;

    // variáveis das médias
    float valor_cachorro = 0, valor_gatos = 0, valor_outros = 0;
    float media_cachorro = 0, media_gato = 0, media_outros = 0;

    // configurações do dia
    float taxa_urgencia = 0.2, taxa_fds = 0.1;
    float desconto_dinheiro = 0.05, acrescimo_2x = 0.02, acrescimo_3x = 0.04;

    // controle do caixa
    float total_dinheiro = 0, total_debito = 0, total_credito = 0;
    float total_descontos = 0, total_acrescimos = 0;
    float total_troco = 0, maior_troco = 0;
    // variavel pra ligar/desligar o desconto do pagamento em dinheiro
    int desconto_ativo = 1; // 1 = ligado, 0 = desligado

    // variaveis aux para ajudar na impressao dos serviços adicionais no resumo
    int add_vacina = 0, add_vermi = 0, add_banho = 0, add_urg = 0, add_fds = 0;

    // NOVAS VARIÁVEIS PARA O CASE 4
    float maior_cachorro = 0, maior_gato = 0, maior_outro = 0;
    char dono_cachorro[30], dono_gato[30], dono_outro[30];

    float maior_valor_pago = 0, menor_valor_pago = 999999;
    int modo_maior_pag = 0; // 1=dinh, 2=debito, 3=credito


    do
    {
        printf("\n========= CLINICA AMIGO FIEL =========\n");
        printf("1 - Novo atendimento\n");
        printf("2 - Ultimo atendimento\n");
        printf("3 - Cancelar ultimo\n");
        printf("4 - Fechamento diario\n");
        printf("5 - Caixa e pagamentos\n");
        printf("6 - Configuracoes do dia\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 7)
        {
            printf("Digite uma opcao valida\n");
        }

        switch (opcao)
        {
        case 1:
            valor = 0;

            printf("Digite o nome do dono:\n");
            scanf("%s", nome);
            getchar();

            printf("Digite o nome do animal:\n");
            scanf("%s", animal);
            getchar();

            printf("Digite o tipo do animal\n(1)Cachorro\n(2)Gato\n(3)Outro\n");
            scanf("%d", &tipo);
            while (tipo < 1 || tipo > 3)
            {
                printf("Opcao invalida! Digite novamente (1 a 3): ");
                scanf("%d", &tipo);
            }

            printf("Digite o peso do animal:\n");
            scanf("%f", &peso);
            getchar();

            if (tipo == 1)
                valor += (peso <= 10) ? 60 : 80;
            else if (tipo == 2)
                valor += (peso <= 5) ? 50 : 70;
            else
                valor += 90;

            add_vacina = add_vermi = add_banho = add_urg = add_fds = 0;

            /* ===============================
            NOVO SISTEMA DE ADICIONAIS (S/N MAIUSCULO)
            =============================== */

            do {
                printf("Deseja vacina antirrabica? (S/N): ");
                scanf(" %c", &ad);

                if (ad == 'S') { valor += vacina; add_vacina = 1; }
                else if (ad == 'N') {}
                else printf("Erro! Digite apenas S ou N maiusculos.\n");

            } while (ad != 'S' && ad != 'N');

            do {
                printf("Deseja vermifugacao? (S/N): ");
                scanf(" %c", &ad);

                if (ad == 'S') { valor += vermi; add_vermi = 1; }
                else if (ad == 'N') {}
                else printf("Erro! Digite apenas S ou N maiusculos.\n");

            } while (ad != 'S' && ad != 'N');

            do {
                printf("Deseja banho/tosa? (S/N): ");
                scanf(" %c", &ad);

                if (ad == 'S') { valor += banho_tosa; add_banho = 1; }
                else if (ad == 'N') {}
                else printf("Erro! Digite apenas S ou N maiusculos.\n");

            } while (ad != 'S' && ad != 'N');

            do {
                printf("E urgencia (+%.0f%%)? (S/N): ", taxa_urgencia * 100);
                scanf(" %c", &ad);

                if (ad == 'S') { valor += valor * taxa_urgencia; add_urg = 1; }
                else if (ad == 'N') {}
                else printf("Erro! Digite apenas S ou N maiusculos.\n");

            } while (ad != 'S' && ad != 'N');

            do {
                printf("E fim de semana (+%.0f%%)? (S/N): ", taxa_fds * 100);
                scanf(" %c", &ad);

                if (ad == 'S') { valor += valor * taxa_fds; add_fds = 1; }
                else if (ad == 'N') {}
                else printf("Erro! Digite apenas S ou N maiusculos.\n");

            } while (ad != 'S' && ad != 'N');

            /* =============================== */

            printf("\n===== RESUMO DO ATENDIMENTO =====\n");
            printf("Nome do dono: %s\n", nome);
            printf("Nome do animal: %s\n", animal);
            printf("Tipo do animal: %d\n", tipo);
            printf("Peso do animal: %.1fkg\n", peso);
            printf("Valor da consulta: R$%.2f\n", valor);
            printf("Adicionais selecionados:\n");

            if (add_vacina) printf(" - Vacina antirrabica\n");
            if (add_vermi) printf(" - Vermifugacao\n");
            if (add_banho) printf(" - Banho/Tosa\n");
            if (add_urg) printf(" - Urgencia\n");
            if (add_fds) printf(" - Final de semana\n");
            if (!add_vacina && !add_vermi && !add_banho && !add_urg && !add_fds)
                printf(" - Nenhum adicional selecionado\n");

            printf("===============================\n");

            printf("Voce confirma o cadastro? (S/N)\n");
            scanf(" %c", &confirmacao);
            while (confirmacao != 'S' && confirmacao != 'N')
            {
                printf("Opcao invalida! Digite APENAS 'S' ou 'N': ");
                getchar();
                scanf(" %c", &confirmacao);
            }

            if (confirmacao == 'S' || confirmacao == 's')
            {
                printf("\nEscolha a forma de pagamento:\n");
                printf("1 - Dinheiro\n");
                printf("2 - Debito\n");
                printf("3 - Credito (+2%% ou +4%%)\n");
                scanf("%d", &op_pag);

                float valor_final = valor;
                float desconto = 0, acrescimo = 0, troco = 0;

                if (op_pag == 1)
                {
                    if (desconto_ativo == 1)
                    {
                        desconto = valor * desconto_dinheiro;
                        valor_final -= desconto;
                        total_descontos += desconto;
                    }
                    else
                        printf("Desconto em dinheiro desativado hoje.\n");

                    total_dinheiro += valor_final;

                    float recebido;
                    printf("Valor a pagar: R$%.2f\n", valor_final);
                    printf("Valor recebido: ");
                    scanf("%f", &recebido);

                    troco = recebido - valor_final;
                    if (troco < 0) troco = 0;

                    printf("Troco: R$%.2f\n", troco);

                    total_troco += troco;
                    if (troco > maior_troco) maior_troco = troco;
                }
                else if (op_pag == 2)
                {
                    total_debito += valor_final;
                }
                else if (op_pag == 3)
                {
                    int parcela;
                    printf("Digite o numero de parcelas (1x, 2x ou 3x): ");
                    scanf("%d", &parcela);

                    if (parcela == 2)
                    {
                        acrescimo = valor * acrescimo_2x;
                        valor_final += acrescimo;
                        total_acrescimos += acrescimo;
                    }
                    else if (parcela == 3)
                    {
                        acrescimo = valor * acrescimo_3x;
                        valor_final += acrescimo;
                        total_acrescimos += acrescimo;
                    }

                    total_credito += valor_final;
                }

                printf("Pagamento registrado com sucesso! Valor final: R$%.2f\n", valor_final);
                valor_total += valor_final;

                strcpy(aux_nome, nome);
                strcpy(aux_animal, animal);
                aux_tipo = tipo;
                aux_peso = peso;
                aux_valor = valor_final;
                aux_pagamento = op_pag;
                aux_troco = troco;
                aux_desconto = desconto;
                aux_acrescimo = acrescimo;

                cont_atendimentos++;

                if (tipo == 1)
                {
                    cont_cachorro++;
                    valor_cachorro += valor_final;
                    media_cachorro = valor_cachorro / cont_cachorro;
                }
                else if (tipo == 2)
                {
                    cont_gatos++;
                    valor_gatos += valor_final;
                    media_gato = valor_gatos / cont_gatos;
                }
                else
                {
                    cont_outros++;
                    valor_outros += valor_final;
                    media_outros = valor_outros / cont_outros;
                }

                /* ATUALIZA MAIOR ANIMAL */
                if (tipo == 1 && peso > maior_cachorro)
                {
                    maior_cachorro = peso;
                    strcpy(dono_cachorro, nome);
                }
                else if (tipo == 2 && peso > maior_gato)
                {
                    maior_gato = peso;
                    strcpy(dono_gato, nome);
                }
                else if (tipo == 3 && peso > maior_outro)
                {
                    maior_outro = peso;
                    strcpy(dono_outro, nome);
                }

                /* ATUALIZA MAIOR E MENOR VALOR */
                if (valor_final > maior_valor_pago)
                {
                    maior_valor_pago = valor_final;
                    modo_maior_pag = op_pag;
                }

                if (valor_final < menor_valor_pago)
                {
                    menor_valor_pago = valor_final;
                }

                printf("Cadastro concluido com sucesso!\n");
            }
            else
                printf("Cadastro nao confirmado.\n");

            break;



        case 2: // verifica o ultimo atendimento
            if (aux_valor > 0)
            {
                printf("\nUltimo atendimento:\n");
                printf("Nome do dono: %s\n", aux_nome);
                printf("Nome do animal: %s\n", aux_animal);
                printf("Tipo do animal: %d\n", aux_tipo);
                printf("Peso do animal: %.1f\n", aux_peso);
                printf("Valor da consulta: R$%.2f\n", aux_valor);
            }
            else
            {
                printf("Nao houve atendimentos ainda.\n");
            }
            break;

        case 3:;
            char cancel; // local tbm, so usamos aq pra armazenar s/n na variavel de cancelamento
            printf("Deseja cancelar o ultimo atendimento? (S/N): ");
            scanf(" %c", &cancel);

            if (cancel == 'S' || cancel == 's') // aqui basicamente se o cadastro é cancelado, ele retira os valores e quantidades das variaveiz usadas no fechamento diario
            {
                if (aux_valor > 0)
                {
                    valor_total -= aux_valor;
                    cont_atendimentos--;

                    // animais
                    if (aux_tipo == 1 && cont_cachorro > 0)
                    {
                        cont_cachorro--;
                        valor_cachorro -= aux_valor;
                    }
                    else if (aux_tipo == 2 && cont_gatos > 0)
                    {
                        cont_gatos--;
                        valor_gatos -= aux_valor;
                    }
                    else if (aux_tipo == 3 && cont_outros > 0)
                    {
                        cont_outros--;
                        valor_outros -= aux_valor;
                    }

                    // formas de pagaemntos
                    if (aux_pagamento == 1)
                        total_dinheiro -= aux_valor;
                    else if (aux_pagamento == 2)
                        total_debito -= aux_valor;
                    else if (aux_pagamento == 3)
                        total_credito -= aux_valor;

                    total_descontos -= aux_desconto;
                    total_acrescimos -= aux_acrescimo;
                    total_troco -= aux_troco;

                    if (aux_troco == maior_troco)
                        maior_troco = 0;

                    // muda as médias depois do cancelamento
                    media_cachorro = (cont_cachorro > 0) ? valor_cachorro / cont_cachorro : 0;
                    media_gato = (cont_gatos > 0) ? valor_gatos / cont_gatos : 0;
                    media_outros = (cont_outros > 0) ? valor_outros / cont_outros : 0;

                    // "reseta" dados do último atendimento
                    aux_valor = 0;
                    aux_tipo = 0;
                    aux_pagamento = 0;
                    aux_troco = 0;
                    aux_desconto = 0;
                    aux_acrescimo = 0;
                    strcpy(aux_nome, "");
                    strcpy(aux_animal, "");

                    printf("Ultimo atendimento cancelado com sucesso!\n");
                }
                else
                {
                    printf("Nao ha atendimento para cancelar.\n");
                }
            }
            else
            {
                printf("Cancelamento abortado.\n");
            }
            break;

        case 4:
            printf("\n===== FECHAMENTO DIARIO =====\n");
            printf("Total de atendimentos: %d\n", cont_atendimentos);
            printf("Total arrecadado: R$%.2f\n", valor_total);
            printf("Cachorros atendidos: %d | Media: R$%.2f\n", cont_cachorro, media_cachorro);
            printf("Gatos atendidos: %d | Media: R$%.2f\n", cont_gatos, media_gato);
            printf("Outros atendidos: %d | Media: R$%.2f\n", cont_outros, media_outros);

            printf("\n===== ANIMAIS MAIS PESADOS =====\n");
            if (cont_cachorro > 0)
                printf("Cachorro mais pesado: %.1f kg | Dono: %s\n", maior_cachorro, dono_cachorro);
            else
                printf("Nenhum cachorro atendido.\n");

            if (cont_gatos > 0)
                printf("Gato mais pesado: %.1f kg | Dono: %s\n", maior_gato, dono_gato);
            else
                printf("Nenhum gato atendido.\n");

            if (cont_outros > 0)
                printf("Outro animal mais pesado: %.1f kg | Dono: %s\n", maior_outro, dono_outro);
            else
                printf("Nenhum animal do tipo 'outro' atendido.\n");

            printf("\n===== VALORES PAGOS =====\n");
            if (cont_atendimentos > 0) {
                printf("Maior valor pago: R$%.2f | Forma: ", maior_valor_pago);
                if (modo_maior_pag == 1) printf("Dinheiro\n");
                else if (modo_maior_pag == 2) printf("Debito\n");
                else if (modo_maior_pag == 3) printf("Credito\n");

                printf("Menor valor pago: R$%.2f\n", menor_valor_pago);
            } else {
                printf("Nenhum pagamento registrado.\n");
            }
            break;


        case 5:
            printf("\n===== RELATORIO DO CAIXA =====\n");
            printf("Total recebido em dinheiro: R$%.2f\n", total_dinheiro);
            printf("Total recebido em debito: R$%.2f\n", total_debito);
            printf("Total recebido em credito: R$%.2f\n", total_credito);
            printf("Total de descontos concedidos: R$%.2f\n", total_descontos);
            printf("Total de acrescimos cobrados: R$%.2f\n", total_acrescimos);
            printf("Total de troco entregue: R$%.2f\n", total_troco);
            printf("Maior troco devolvido: R$%.2f\n", maior_troco);
            printf("=================================\n");
            printf("Total geral do dia: R$%.2f\n", valor_total);
            break;

        case 6: // altera valores dos servicos, caso a clinica queira mudar
            printf("\n=== CONFIGURACOES DO DIA ===\n");

            do
            {
                printf("Digite novo valor da vacina (0 a 500): ");
                scanf("%f", &vacina);
                if (vacina < 0 || vacina > 500)
                    printf("Valor invalido! Digite novamente.\n");
            } while (vacina < 0 || vacina > 500);

            do
            {
                printf("Digite novo valor da vermifugacao (0 a 500): ");
                scanf("%f", &vermi);
                if (vermi < 0 || vermi > 500)
                    printf("Valor invalido! Digite novamente.\n");
            } while (vermi < 0 || vermi > 500);

            do
            {
                printf("Digite novo valor de banho/tosa (0 a 500): ");
                scanf("%f", &banho_tosa);
                if (banho_tosa < 0 || banho_tosa > 500)
                    printf("Valor invalido! Digite novamente.\n");
            } while (banho_tosa < 0 || banho_tosa > 500);

            printf("Configuracoes atualizadas!\n");

            // altera o status do desconto em dinheiro, com aquela variavel que criamos la em cima valendo 1 (ligada/true)
            printf("\nDeseja alterar o status do desconto em dinheiro?\n");
            if (desconto_ativo == 1)
                printf("O desconto atual esta: ATIVADO (%.0f%%)\n", desconto_dinheiro * 100);
            else
                printf("O desconto atual esta: DESATIVADO\n");

            printf("Deseja trocar? (S/N): ");
            char resp; // local tbm, so usamos aqui pra armazenar essa reposta
            scanf(" %c", &resp);

            if (resp == 'S' || resp == 's') // ativa/desativa desconto
            {
                desconto_ativo = !desconto_ativo;
                if (desconto_ativo == 1)
                    printf("Desconto em dinheiro ATIVADO!\n");
                else
                    printf("Desconto em dinheiro DESATIVADO!\n");
            }

            // altera porcentagem do desconto se estiver ativo
            if (desconto_ativo == 1)
            {
                do
                {
                    printf("Digite o percentual de desconto (0 a 50): ");
                    scanf("%f", &desconto_dinheiro);
                    if (desconto_dinheiro < 0 || desconto_dinheiro > 50) // pedido na folha o limite do desconto
                        printf("Valor invalido! Digite novamente.\n");
                } while (desconto_dinheiro < 0 || desconto_dinheiro > 50);

                desconto_dinheiro /= 100;
                printf("Novo desconto registrado: %.0f%%\n", desconto_dinheiro * 100);
            }

            // NOVO: altera porcentagens de urgencia e fim de semana
            do
            {
                printf("\nDigite a nova taxa de urgencia (0 a 100%%): ");
                scanf("%f", &taxa_urgencia);
                if (taxa_urgencia < 0 || taxa_urgencia > 100) // limite
                    printf("Valor invalido! Digite novamente.\n");
            } while (taxa_urgencia < 0 || taxa_urgencia > 100);
            taxa_urgencia /= 100;

            do
            {
                printf("Digite a nova taxa de final de semana (0 a 100%%): ");
                scanf("%f", &taxa_fds);
                if (taxa_fds < 0 || taxa_fds > 100) // limite
                    printf("Valor invalido! Digite novamente.\n");
            } while (taxa_fds < 0 || taxa_fds > 100);
            taxa_fds /= 100;

            printf("Taxas de urgencia e final de semana atualizadas com sucesso!\n");

            break;

        } // fim do switch
    } while (opcao != 7); // fim do while

    printf("\nAtendimento finalizado. Tenha um otimo dia!\n");

    return 0;
}