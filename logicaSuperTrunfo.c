#include <stdio.h>


int main() {
    
   switch (criterio1) {
    case 1: //população
        switch (criterio2){
        case 1: //população
            if (populacao1 > populacao2){
                pontos1++;
                printf("população 1 ganhou.\n");
            }else if(populacao1 < populacao2){
                pontos2++;
                printf("população 2 ganhou\n");
            }else{
                printf("empate");
                break;
            }
        case 2: //área
            if (area1 > area2 ){
                pontos1++;
                printf("área 1 ganhou.\n");
            }else if (area1 < area2){
                pontos2++;
                printf("área 2 ganhou.\n");            
            }else {
                printf("Empate\n");
                break;
            }
        case 3: // PIB
            if (pib1 > pib2)      {
                pontos1++;
                printf("pib1 venceu\n");
            }else if (pib1 < pib2)     {
                pontos2++;
                printf("pib2 venceu\n");
            }else{
                printf("Empate.\n");
                break;
            }
        case 4: //Pontos Turisticos
            if (turisticos1 > turisticos2)  {
                pontos1++;
                printf("turisticos1 venceu\n");
            } else if (turisticos1 < turisticos2){
                pontos2++;
                printf("turisticos2 venceu\n");
            }else{
                printf("Empate\n");
                break;
            }
        case 5:// Densidade Populacional
            if (densidade1 > densidade2){
                pontos1++;
                printf("densidade 1 ganhou\n"); 
            }else if (densidade1 < densidade2) {
                pontos2++;
                printf("densidade 2 ganhou\n");
            }else{
                printf("empate\n");
                break;
            }
        case 6: // PIB per capita
            if (pib_percapita1 > pib_percapita2) {
                pontos1++;
                printf("pib percapita 1 ganhou\n");
            }else if (pib_percapita1 < pib_percapita2) {
                pontos2++;
            }else {
                printf("Empate\n");
                break;
            }           
        case 7: // Super Poder
            if (superpoder1 > superpoder2){
                pontos1++;
                printf("Super Poder 1 venceu\n");
            } else if (superpoder1 < superpoder2){
                pontos2++;
                printf("super pode 2 venceu\n");
            } else {
                printf("Empate\n");
                break; 
                
            return 0;
