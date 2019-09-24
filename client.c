#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>  
#include <sys/socket.h>
#include <netinet/in.h>

#include "client.h"

/* envoi et reception de message
 */
int envoie_recois_message(int socketfd) {
  char data[1024];
  memset(data, 0, sizeof(data));
  char message[100];
  printf("Votre message (max 1000 caracteres): ");
  fgets(message, 1024, stdin);
  strcpy(data, "message: ");
  strcat(data, message);
  
  int write_status = write(socketfd, data, strlen(data));
  if ( write_status < 0 ) {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  memset(data, 0, sizeof(data));
  int read_status = read(socketfd, data, sizeof(data));
  if ( read_status < 0 ) {
    perror("erreur lecture");
    return -1;
  }

  printf("Message recu: %s\n", data);
 
  return 0;
}

int envoie_nom_client(int socketfd){
  char data[1024];
  memset(data, 0, sizeof(data));
  char message[100];
  printf("Votre nom (max 1000 caracteres): ");
  fgets(message, 1024, stdin);
  strcpy(data, "nom: ");
  strcat(data, message);
  
  int write_status = write(socketfd, data, strlen(data));
  if ( write_status < 0 ) {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  memset(data, 0, sizeof(data));
  int read_status = read(socketfd, data, sizeof(data));
  if ( read_status < 0 ) {
    perror("erreur lecture");
    return -1;
  }

  printf("Message recu: %s\n", data);
 
  return 0;
  
} /* envoie_nom_client */

int envoie_operateur_numero(int socketfd){
  char data[1024];
  memset(data, 0, sizeof(data));
  char message[100];
  printf("Votre calcule (max 1000 caracteres): ");
  fgets(message, 1024, stdin);
  strcpy(data, "calcule: ");
  strcat(data, message);
  
  int write_status = write(socketfd, data, strlen(data));
  if ( write_status < 0 ) {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  memset(data, 0, sizeof(data));
  int read_status = read(socketfd, data, sizeof(data));
  if ( read_status < 0 ) {
    perror("erreur lecture");
    return -1;
  }

  printf("Message recu: %s\n", data);
 
  return 0;
  
} /* envoie_operateur_numero */

int envoie_couleurs(int socketfd){
  char data[1024];
  memset(data, 0, sizeof(data));
  char message[100];
  int n = 0;
  
  while(n <= 0 || n >= 30){
    printf("Nombre de couleurs puis vos couleurs (max 1000 caracteres): ");
    fgets(message, 1024, stdin);
    
    /* Check number of colors */
    char number_c[10];
    sscanf(message, "%s", number_c);
    n = atoi(number_c);
  
  } /* while the user dont put a correct number */
  
  strcpy(data, "couleurs: ");
  strcat(data, message);
  
  int write_status = write(socketfd, data, strlen(data));
  if ( write_status < 0 ) {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  memset(data, 0, sizeof(data));
  int read_status = read(socketfd, data, sizeof(data));
  if ( read_status < 0 ) {
    perror("erreur lecture");
    return -1;
  }

  printf("Message recu: %s\n", data);
 
  return 0;
  
} /* envoie_couleurs */

int main() {
  int socketfd;
  int bind_status;

  struct sockaddr_in server_addr, client_addr;

  /*
   * Creation d'un socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if ( socketfd < 0 ) {
    perror("socket");
    exit(EXIT_FAILURE);
  }

  //détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  //demande de connection au serveur
  int connect_status = connect(socketfd, (struct sockaddr *) &server_addr, sizeof(server_addr));
  if ( connect_status < 0 ) {
    perror("connection serveur");
    exit(EXIT_FAILURE);
  }
  
  //envoie_recois_message(socketfd);
  //envoie_nom_client(socketfd);
  //envoie_operateur_numero(socketfd);
  envoie_couleurs(socketfd);

  close(socketfd);
}
