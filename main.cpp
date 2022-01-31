#include "C:\Users\thors\CLionProjects\OpenSource\include\counting_sort.h"
using namespace std;
static void printlist(int* list,int count) {
    int i;
    for(i=0;i<count;i++)
        printf("%d\t ",list[i]);
    printf("\n");
}

int main (int argc, char const *argv[]) {
    const int MAX_ELEMENTS = 10;
    int list[MAX_ELEMENTS];
    for(int i = 0; i < MAX_ELEMENTS; i++ ){
        list[i] = rand()%100;
    }
    printf("The list before sorting is:\n");
    printlist(list,MAX_ELEMENTS);
    CountingSort(list,MAX_ELEMENTS);

    printf("The list after sorting using selection sort algorithm:\n");
    printlist(list,MAX_ELEMENTS);

    return 0;
}