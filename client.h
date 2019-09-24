#ifndef __CLIENT_H__
#define __CLIENT_H__

#define PORT 8089

/* envoi et reception de message
 */
int envoie_recois_message(int socketfd);

/* envoi et reception de nom du client
 */
int envoie_nom_client(int socketfd);

/* envoi de l'opération et reception du resultat
 */
int envoie_operateur_numero(int socketfd);

/* envoi de couleurs et reception de confirmation
 */
int envoie_couleurs(int socketfd);

#endif
