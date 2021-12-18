# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct data{
    int num;
    char name[20];
    struct data* next;
}data;

data* g_head; // head
data* g_tail; // tail

void printAll(){
    data *temp = g_head;

    if (temp == NULL){
        printf("no data");
    }

    while(temp->next){
        printf("_______\n");
        printf("num : %d\n", temp->num);
        printf("name : %s\n", temp->name);
        temp = temp->next;
    }
    printf("_______\n"); // for tail
    printf("num : %d\n", temp->num);
    printf("name : %s\n", temp->name);

}

int insert(int num, char* name){
    data* node = malloc(sizeof(data));
    node->next = NULL;
    node->num = num;
    if (name!=NULL){
        strcpy(node->name, name);
    }
    
    if (g_head == NULL){
        g_head = node;
        g_tail = node;
    }else{
        data * temp = g_head;
        while(temp->next){
            temp = temp->next;
            }
        
        temp->next = node;
        g_tail = node;
        }
    return 1;    
    }

data * stack_pop(){
    if(g_head = NULL){
        return NULL;
    }

    data* node;
    memcpy(node, g_tail, sizeof(data));

    data* temp = g_head;
    data* before = NULL;
    while(temp->next){
        before = temp;
        temp = temp->next;
    }
    free(g_tail);
    g_tail = before;
    if (g_tail == NULL){
        g_head = NULL;
    }else{
        before->next = NULL;
        return NULL;
    }
    
    return node;
}

data* pop(){
    
    if(g_head = NULL){
        return NULL;
    }
    data* node = g_head;
    if (g_head->next != NULL){
        g_head = g_head->next;
    }else{
        g_head = NULL;
        g_tail = NULL;
    }
    return node;
}


int main(){
    char name[20] = "";
    for (int i = 0; i < 10; i++){
        sprintf(name, "test%d", i);
        insert(i, name);
    }
    printAll();
    
    data* node1;
    node1 = pop();
    printf("pop num : %d\n", node1->num);
}