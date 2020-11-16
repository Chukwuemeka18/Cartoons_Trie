#include <stdio.h>

typedef char* string;

typedef struct cartoon{

char* name;
struct cartoon* p[26];

} 
node;


int main(void) {
  printf("Hello World\n");

  node* list;

  node* a = malloc(sizeof(node));
  a->p[13] = NULL;
  list = a;

  node* b = malloc(sizeof(node));
  b->p[0] = NULL;
  a->p[13] = b;

  node* c = malloc(sizeof(node));
  c->p[17] = NULL;
  b->p[0] = c;

  node* d = malloc(sizeof(node));
  d->p[20] = NULL;
  c->p[17] = d;

  node* e = malloc(sizeof(node));
  e->p[19] = NULL;
  d->p[20] = e;

  node* f = malloc(sizeof(node));
  f->p[14] = NULL;
  e->p[19] = f;

  node* g = malloc(sizeof(node));
  g->name  = "Naruto";
  f->p[14] = g;

  printf("%s\n\n",g->name);

  int i = 0;
  for (node* temp = list; temp != NULL; temp = temp->p[i]){
    
    if(temp != NULL){
      printf("Number: ");
      scanf("%i", &i);
      printf(" %s\n", temp->name);
    }

    if(temp == NULL){
      printf(" %s\n", temp->name);
    }
    
  }


// rember to look at your istake and above an error
//{'N', 'a', 'r','u', 't', 'o', '/0'}
  return 0;
}