struct List* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    struct Node* newNode = createNode(value);
    newNode->next = *head;  
    *head =newNode;

    struct List* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;}