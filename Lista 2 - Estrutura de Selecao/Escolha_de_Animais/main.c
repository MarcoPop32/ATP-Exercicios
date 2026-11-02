#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua

    //Declaração das Variáveis
    char escolha; // Armazena a resposta (S/N) do usuário a cada pergunta

    // Entrada dos dados
    printf("Seu animal é um mamífero?(S/N): ");
    scanf(" %c", &escolha);

    if(escolha == 'S' || escolha == 's'){
        // Mamíferos
        printf("É quadrúpede?(S/N): ");
        scanf(" %c", &escolha);
        if(escolha == 'S' || escolha == 's'){
            // Mamíferos - Quadrúpedes
            printf("É carnívoro?(S/N): ");
            scanf(" %c", &escolha);
            if(escolha == 'S' || escolha == 's'){
                // mamífero, quadrúpede, carnívoro
                printf("Seu animal é um leão.");
            }else if(escolha == 'N' || escolha == 'n'){
                printf("É herbívoro?(S/N): ");
                scanf(" %c", &escolha);
                if(escolha == 'S' || escolha == 's'){
                    // mamífero, quadrúpede, não carnívoro, herbívoro
                    printf("Seu animal é um cavalo");
                }else if(escolha == 'N' || escolha == 'n'){
                    // não se encaixou em nenhuma opção conhecida
                    printf("Não faço ideia.");
                }
            }
        }else if(escolha == 'N' || escolha == 'n'){
            // Mamífero não quadrúpede
            printf("É bípede?(S/N): ");
            scanf(" %c", &escolha);
            if(escolha == 'S' || escolha == 's'){
                // Mamífero bípede
                printf("É onívoro?(S/N): ");
                scanf(" %c", &escolha);
                if(escolha == 'S' || escolha == 's'){
                    // mamífero, bípede, onívoro
                    printf("Seu animal é um homem.");
                }else if(escolha == 'N' || escolha == 'n'){
                    printf("É frutífero?(S/N): ");
                    scanf(" %c", &escolha);
                    if(escolha == 'S' || escolha == 's'){
                        //  mamífero, bípede, não onívoro, frutífero
                        printf("Seu animal é um macaco.");
                    }else if(escolha == 'N' || escolha == 'n'){
                        // não se encaixou em nenhuma opção conhecida
                        printf("Não faço ideia.");
                    }
                }
            }else if(escolha == 'N' || escolha == 'n'){
                // Mamífero não quadrúpede e não bípede
                printf("É voador?(S/N): ");
                scanf(" %c", &escolha);
                if(escolha == 'S' || escolha == 's'){
                    // mamífero voador
                    printf("Seu animal é um morcego.");
                }else if(escolha == 'N' || escolha == 'n'){
                    printf("É aquático?(S/N): ");
                    scanf(" %c", &escolha);
                    if(escolha == 'S' || escolha == 's'){
                        // mamífero aquático
                        printf("Seu animal é uma baleia.");
                    }else if(escolha == 'N' || escolha == 'n'){
                        // não se encaixou em nenhuma opção conhecida
                        printf("Não é nenhum mamífero.");
                    }
                }
            }
        }
    }else if(escolha == 'N' || escolha == 'n'){
        // Não mamífero
        printf("Seu animal é uma ave?(S/N): ");
        scanf(" %c", &escolha);
        if(escolha == 'S' || escolha == 's'){
            // Aves
            printf("Seu animal é um não voador?(S/N): ");
            scanf(" %c", &escolha);
            if(escolha == 'S' || escolha == 's'){
                // Aves não voadoras
                printf("Seu animal é tropical?(S/N): ");
                scanf(" %c", &escolha);
                if(escolha == 'S' || escolha == 's'){
                    // ave não voadora, tropical
                    printf("Seu animal é um avestruz");
                }else if(escolha == 'N' || escolha == 'n'){
                    printf("Seu animal é polar?(S/N)");
                    scanf(" %c", &escolha);
                    if(escolha == 'S' || escolha == 's'){
                        // ave não voadora, polar
                        printf("Seu animal é um pinguim");
                    }else if(escolha == 'N' || escolha == 'n'){
                        // não se encaixou em nenhuma opção conhecida
                        printf("Não faço ideia.");
                    }
                }
            }else if(escolha == 'N' || escolha == 'n'){
                // Aves voadoras
                printf("Seu animal é um nadador?(S/N): ");
                scanf(" %c", &escolha);
                if(escolha == 'S' || escolha == 's'){
                    // ave voadora, nadadora
                    printf("Seu animal é um pato.");
                }else if(escolha == 'N' || escolha == 'n'){
                    printf("Ele é de rapina?(S/N): ");
                    scanf(" %c", &escolha);
                    if(escolha == 'S' || escolha == 's'){
                        // ave voadora, de rapina
                        printf("Seu animal é uma águia.");
                    }else if(escolha == 'N' || escolha == 'n'){
                        // não se encaixou em nenhuma opção conhecida
                        printf("Seu animal não é nenhuma ave.");
                    }
                }
            }
        }else if(escolha == 'N' || escolha == 'n'){
            // Não mamífero, não ave -----
            printf("Seu animal é um Réptil?(S/N): ");
            scanf(" %c", &escolha);
            if(escolha == 'S' || escolha == 's'){
                // Réptil
                printf("Ele possui casco?(S/N): ");
                scanf(" %c", &escolha);
                if(escolha == 'S' || escolha == 's'){
                    // réptil com casco
                    printf("Seu animal é uma tartaruga.");
                }else if(escolha == 'N' || escolha == 'n'){
                    printf("Ele é carnívoro?(S/N): ");
                    scanf(" %c", &escolha);
                    if(escolha == 'S' || escolha == 's'){
                        // réptil sem casco, carnívoro
                        printf("Seu animal é um crocodilo");
                    }else if(escolha == 'N' || escolha == 'n'){
                        printf("Ele é sem patas?(S/N): ");
                        scanf(" %c", &escolha);
                        if(escolha == 'S' || escolha == 's'){
                            // réptil sem casco, não carnívoro, sem patas
                            printf("Seu animal é uma cobra.");
                        }else if(escolha == 'N' || escolha == 'n'){
                            // não se encaixou em nenhuma opção conhecida
                            printf("Não é nenhum animal então.");
                        }
                    }
                }
            }else if(escolha == 'N' || escolha == 'n'){
                // não é mamífero, não é ave, não é réptil
                printf("Não é nenhum animal.");
            }
        }
    }
    return 0;
}
