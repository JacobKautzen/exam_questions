#include <stdio.h>

typedef struct{
    int key;
    char name[10];
} node_t;


node_t* find_first(node_t* arr, int length, int k){
    node_t* r = NULL;
    for (int i = 0; i < length; ++i){
        if(arr[i].key == k)
        {
            r = &(arr[i]);
            break;
        }
    }
    return r;
}


int main(void){
    int k = 4;
    int length = 2;
    node_t test1[] = {{0, "kage"},
                      {1, "mad"}};
    node_t* test = find_first(test1, length, k);
    if (test != NULL) {
        printf("%d\n", test->key);
    } else {
        printf("Key not found\n");
    }
}