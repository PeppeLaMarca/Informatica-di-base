#include<stdio.h>
#include<string.h>
#define DIM 20

void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

int main(){
  char username[DIM];
  char passwoard[DIM];
  char somma=0;
  
  printf("username : ");
  leggiStringa(username, DIM);
  
  printf("passwoard : ");
  leggiStringa(passwoard, DIM);

  printf("username = %s\n", username);
  printf("lunghezza username = %lu\n", strlen(username));
  printf("passwoard = %s\n", passwoard);
  printf("lunghezza passwoard = %lu\n", strlen(passwoard));
  
  somma=strlen(username) + strlen(passwoard);
  printf("La somma dei caratteri utilizzati e':  %lu\n", somma);
  
  return 0;
}
