#include <stdio.h>
#include <stdlib.h>

// Structure de l'élément de liste
typedef struct Element {
    int value;         // Valeur de l'élément
    struct Element* next; // Pointeur vers l'élément suivant
} Element;

// Structure de la liste
typedef struct List {
    Element* first; // Pointeur vers le premier élément de la liste
} List;

// Fonction pour initialiser une nouvelle liste
List* initializeList() {
    List* list = (List*)malloc(sizeof(List));
    Element* element = (Element*)malloc(sizeof(Element));

    if (list == NULL || element == NULL) {
        exit(EXIT_FAILURE);
    }

    element->value = 0;
    element->next = element; // La liste est circulaire, donc le premier élément pointe vers lui-même
    list->first = element;

    return list;
}

// Fonction pour insérer un nouvel élément en début de liste
void insertElement(List* list, int newValue) {
    Element* newElement = (Element*)malloc(sizeof(Element));
    if (newElement == NULL) {
        exit(EXIT_FAILURE);
    }
    newElement->value = newValue;
    newElement->next = list->first->next; // Le nouvel élément pointe vers l'ancien premier élément
    list->first->next = newElement; // Le premier élément pointe vers le nouvel élément
}

// Fonction pour supprimer le premier élément de la liste
void deleteElement(List* list) {
    Element* firstElement = list->first->next;

    if (firstElement != list->first) {
        list->first->next = firstElement->next;
        free(firstElement);
    }
}

// Fonction pour afficher les éléments de la liste
void printList(List* list) {
    Element* current = list->first->next;

    printf("Liste : ");
    while (current != list->first) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    List* myList = initializeList();

    insertElement(myList, 4);
    insertElement(myList, 8);
    insertElement(myList, 15);
    deleteElement(myList);

    printList(myList);

    return 0;
}
