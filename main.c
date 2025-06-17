#include <stdio.h>
#include <string>

int ChoixMenu();

struct contact
{
    int telephone[10];
    char nom[20];
    char prenom[20];
    char email[20];  
};


int main(){
    int option;
    int isRunning = 1;
    struct contact monContact;

    while(isRunning != 0){
        printf("\nGestionnaire de Contacts\n");
        option = ChoixMenu();
        printf("\nVous avez choisi l'option %d", option);

        monContact.telephone[0] = 671190709;

        switch (option)
        {
        case 1:
            printf("\n%d, %c, %c, %c", monContact.telephone[0], monContact.nom, monContact.prenom, monContact.email);
            break;
        case 2:
            printf("\nAjouter un Contact.\n");
            break;
        case 3:
            printf("\nSupprimer un Contact.\n");
            break;
        case 4:
            printf("\nRechercher un Contact.\n");
            break;
        case 5:
            printf("\nFin du Programme...\n");
            isRunning = 0;
            break;
        default:
            break;
        }
    }
    
    return (0);
}

int ChoixMenu(){
    int choix;

    printf("1. Afficher Contacts.\n");
    printf("2. Ajouter Contact.\n");
    printf("3. Supprimer Contact.\n");
    printf("4. Rechercher Contact.\n");
    printf("5. Quitter.\n");
    printf("Votre choix: ");
    scanf("%d", &choix);
    if(choix <= 0 || choix >5){
        printf("Choix non pris en compte\n");
        return(ChoixMenu());
    }else{
        return (choix);
    }
    
}