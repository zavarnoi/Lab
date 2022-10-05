#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int array_1[100];
    int arr_choice_1;
    printf("choose way to set first array:\n1-random\n2-from keybord\n");
    while (scanf_s("%d", &arr_choice_1) != 1 || arr_choice_1 != 1 && arr_choice_1 != 2)
    {
        printf("try again\n");
        rewind(stdin);
    }

    printf("input size of first array:");
    int amount_1;
    while (scanf_s("%d", &amount_1) != 1 || amount_1 > 100 || amount_1 < 0) {
        printf("try again\n");
        rewind(stdin);
    }
    if (arr_choice_1 == 2) {
        printf("input elements of first array:");
    }
    for (int i = 0; i < amount_1; i++)
    {
        if (arr_choice_1 == 1)
        {
            int rd = rand()%100001;
            int min = rand() % 2;
            if (min == 0)
                min = -1;
            else
                min = 1;
            array_1[i] = rd * min;
        }
        else
        {
            while (scanf_s("%d", &array_1[i]) != 1) {
                printf("try again\n");
                rewind(stdin);
            }
        }
    }
    
    for (int i = 0; i < amount_1; i++) {
        int y, j, tmp;
        y = i;
        tmp = array_1[i];
        for (j = i + 1; j < amount_1; j++) {
            if (array_1[j] > tmp) {
                y = j;
                tmp = array_1[j];
            }
        }
        array_1[y] = array_1[i];
        array_1[i] = tmp;
    }
    for (int i = 0, j = 1; i < amount_1; i++, j++) {
        printf("%d\t", array_1[i]);
        if (j % 5 == 0) printf("\n");
    }

    int array_2[100];
    int arr_choice_2;
    printf("\nchoose way to set second array:\n1-random\n2-from keybord\n");
    while (scanf_s("%d", &arr_choice_2) != 1 || arr_choice_2 != 1 && arr_choice_2 != 2)
    {
        printf("try again\n");
        rewind(stdin);
    }
    int amount_2;
    printf("\ninput size of second array:");
    while (scanf_s("%d", &amount_2) != 1 || amount_2 > 100 || amount_2 < 0) {
        printf("try again\n");
        rewind(stdin);
    }
    if (arr_choice_2 == 2) {
        printf("input elements of second array:");
    }
    for (int i = 0; i < amount_2; i++)
    {
        if (arr_choice_2 == 1)
        {
            int rd = rand() % 100001;
            int min = rand() % 2;
            if (min == 0)
                min = -1;
            else
                min = 1;
            array_2[i] = rd * min;
        }
        else
        {
            while (scanf_s("%d", &array_2[i]) != 1) {
                printf("try again\n");
                rewind(stdin);
            }
        }
    }

    for (int i = 0; i < amount_2; i++) {
        int y, j, tmp;
        y = i;
        tmp = array_2[i];
        for (j = i + 1; j < amount_2; j++) {
            if (array_2[j] > tmp) {
                y = j;
                tmp = array_2[j];
            }
        }
        array_2[y] = array_2[i];
        array_2[i] = tmp;
    }

    for (int i = 0, j = 1; i < amount_2; i++, j++) {
        printf("%d\t", array_2[i]);
        if (j % 5 == 0) printf("\n");
    }

    int array_3[200], i = 0, j = 0, amount_3=amount_1+amount_2;
    for (int k = 0; k < amount_3; k++)
    {
        if (array_1[i] > array_2[j])
        {
            array_3[k] = array_1[i];
            i++;
        }
        else
        {
            array_3[k] = array_2[j];
            j++;
        }
    }
    printf("\n\n");
    for (int i = 0, j = 1; i < amount_3; i++, j++) {
        printf("%d\t", array_3[i]);
        if (j % 5 == 0) printf("\n");
    }
}