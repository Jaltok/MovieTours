typedef struct SET_ELEMENT {
    int start;
    int end;
    struct SET_ELEMENT *next;
} SET_ELEMENT;

typedef struct SET {
    SET_ELEMENT *root;
} SET;

void createSet(SET *S);
void addElement(int s, int e, SET *S);
int orderOf(SET *S);
SET Union(SET *X, SET *Y);
