# Rapport d’auto-évaluation tache 1

Lien du git : [Projet](https://github.com/lucianoBrd/C_Tache_1)

## Objectif: Quel est l’objectif de votre projet?

L'objectif de ce projet est de créer un environnement client-serveur pour l'analyse et la
gestion des images et de leurs métadonnées.
Dans la tache 1, nous avons géré :
  * L'envoie du nom du client et le serveur renvoie le même nom, en guise d'accusé
   de réception.
  * L'envoie d'un simple message envoyé par le client, auquel le serveur renvoie une
   réponse.
  * Le client envoie deux numéros et un opérateur mathématique et le serveur
   répond le résultat de l'opération.
  * Le client envoie N couleurs et le serveur les enregistre dans un fichier.

## Fichiers: Noms de fichiers

Il y a 2 fichiers pour la partie client :
```
client.c
client.h
```

Il y a 2 fichiers pour la partie serveur :
```
serveur.c
serveur.h
```

Il y a 1 fichier pour compiler le projet :
```
Makefile
```

Il y a 1 fichier pour de sauvegarde des couleurs (optionnel) :
```
save.txt
```

## Bibliothèques: les bibliothèques standards

Dans ce projet, nous utilisons plusieurs bibliothèques standards :
  * string.h
  * stdio.h
  * stdlib.h
  * unistd.h
  * sys/types.h
  * sys/socket.h
  * netinet/in.h
  * sys/epoll.h

## Références: les URLs, les numéros de groupes

##  Difficulté: niveau de difficulté (facile, moyenne, difficile)

Le projet était dans la globalité de difficulté facile. Il nous a permi de nous
remémorer la syntaxe et les différents appel system en C.

## Commentaires (optionnels): remarques etc.
