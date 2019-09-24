#ifndef __CLIENT_H__
#define __CLIENT_H__

#define PORT 8089

/* envoi et reception de message
 */
int envoie_recois_message(int socketfd);

int envoie_nom_client(int socketfd);

int envoie_operateur_numero(int socketfd);

int envoie_couleurs(int socketfd);

#endif
