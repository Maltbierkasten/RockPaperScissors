#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int choice_human=0;
    int choice_computer=0;
    int choice_log[6]={0,0,0,0,0,0};
    printf("%d",choice_log[0]);
    int gewonnen=0;
    int verloren=0;
    int unentschieden=0;
    int predict_human=0;

    time_t t;
    srand((unsigned) time(&t));

    printf("Welcome to Rock-Paper-Scissors-AI-trial-1\n");
    printf("-----------------------------------------\n");
    printf("Sie haben 3 Versuche\n");
    while(choice_human!=5){
        choice_human=0;
        while(choice_human!=4){
            printf("Choose Rock(1), Paper (2) or Scissors (3): ");
            scanf("%d",&choice_human);
            if(choice_human==1||choice_human==2||choice_human==3){
                printf("korrekte Eingabe\nEingabe: ");
                switch(choice_human){
                    case 1: printf("Rock\n");break;
                    case 2: printf("Paper\n");break;
                    case 3: printf("Scissor\n");break;
                }
                choice_computer = (rand()%3)+1;
                printf("computer: ");
                switch(choice_computer){
                    case 1: printf("Rock\n");break;
                    case 2: printf("Paper\n");break;
                    case 3: printf("Scissor\n");break;
                }
                if((choice_computer==1&&choice_human==2)||(choice_computer==2&&choice_human==3)||(choice_computer==3&&choice_human==1)){
                    printf("gewonnen!\n");gewonnen++;
                }
                if((choice_computer==2&&choice_human==1)||(choice_computer==3&&choice_human==2)||(choice_computer==1&&choice_human==3)){
                    printf("verloren!\n");verloren++;
                }
                if((choice_computer==1&&choice_human==1)||(choice_computer==2&&choice_human==2)||(choice_computer==3&&choice_human==3)){
                    printf("unentschieden!\n");unentschieden++;
                }
                printf("Spiele gewonnen:%d, verloren: %d, unentschieden: %d\n", gewonnen, verloren, unentschieden);
            }
            else if(choice_human=4){
                printf("\n\n\n\n\n\nneuer Spieler\n"); gewonnen=0; verloren=0; unentschieden=0;
            }
            else{
                printf("invalide Eingabe\nErbitte neue Eingabe\n");
            }
        }
    }
    printf("Programm beendet\n");
    return 0;
}
