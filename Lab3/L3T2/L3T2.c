#include <stdio.h>
#include <time.h>

int powerTen(int a)
{
    int num = 10;
    for (int i = 1; i < a; i++)
    {
        num *= 10;
    }
    return num;
}

int main()
{
    srand(time(NULL));
    int arr_choice;
    float rd, ten;
    printf("choose way to set an array:\n1-random\n2-from keybord\n");
    while (scanf_s("%d", &arr_choice) != 1 || arr_choice != 1 && arr_choice != 2)
    {
        printf("try again\n");
        rewind(stdin);
    }

    float array[100];
    int amount;
    printf("input amount of elements:");
    while (scanf_s("%d", &amount) != 1 || amount > 100 || amount < 0) {
        printf("try again\n");
        rewind(stdin);
    }
    for (int i = 0; i < amount; i++)
    {
        if (arr_choice == 1)
        {
            rd = rand() % 100001;
            ten = powerTen(rand() % 7);
            int min = rand() % 2;
            if (min == 0)
                min = -1;
            else
                min = 1;
            array[i] = rd / ten * min;
        }
        else
        {
            while (scanf_s("%f", &array[i]) != 1)
            {
                printf("try again\n");
                rewind(stdin);
            }
        }
    }
    for (int i = 0, j = 1; i < amount; i++, j++) {
        printf("%f\t", array[i]);
        if (j % 5 == 0) printf("\n");
    }



    float max = array[0];
    int  ind_max=0;
    for (int i = 0; i < amount; i++) {
        if (max<array[i]) {
            max = array[i];
            ind_max = i;
        }
    }

    float min = array[0];
    int ind_min=0;
    for (int i = 0; i < amount; i++) {
        if (array[i] <= min) {
            min = array[i];
            ind_min = i;
        }
    }
    int repos_max;
    int repos_min;
    if (ind_max > ind_min) {
        repos_max = ind_min;
        repos_min = ind_max;
        ind_max = repos_max;
        ind_min = repos_min;
    }
    for (int k = ind_max + 1; k < ind_min; k++) 
    {
        for (int i = k+1; i < amount; i++)
            array[i - 1] = array[i];
        amount--;
        ind_min--;
        k--;
    }
    printf("\n \n \n");
    for (int i = 0, j = 1; i < amount; i++, j++) {
        printf("%f\t", array[i]);
        if (j % 5 == 0) printf("\n");
    }
}