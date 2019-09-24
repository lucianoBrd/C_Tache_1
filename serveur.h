#ifndef __SERVER_H__
#define __SERVER_H__

#define PORT 8089

/* accepter la nouvelle connection d'un client et lire les données
 * envoyées par le client. En suite, le serveur envoie un message
 * en retour
 */
int recois_envoie_message(int socketfd);

/* Renvoi le nom du client
 */
int renvoie_nom_client(int client_socket_fd, char *data);

/* Renvoi le resultat du calcule ou -1 en cas d'erreur
 */
int recois_numero_calcule(int client_socket_fd, char *data);

/* Renvoi la confirmation de sauvegarde des couleurs
 */
int recois_couleurs(int client_socket_fd, char *data);

#endif
