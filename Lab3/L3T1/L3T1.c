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

    float array[100] ;
    int amount;
    printf("input amount of elements:");
    while (scanf_s("%d", &amount) != 1 || amount > 100 || amount < 0)
    {
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

    for (int i = 0, j = 1; i < amount; i++, j++){
        printf("%f\t", array[i]);
        if (j % 5 == 0) printf("\n");
    }

    float sum_odd=0;
    for (int i = 0; i < amount; i += 2)
        sum_odd += array[i];
    printf("\nsum of odd numbers=%f", sum_odd);

    int k=0;
    for (int i = 0; i < amount; i++) {
        if (array[i] < 0)
            k++;
    }

    if (k < 2)
        printf("\nsum from first first to last neg:err");
    else {
        float sum_first_neg = 0;
        for (int i = 0; i < amount; i++) {
            if (array[i] < 0) {
                i += 1;
                while (i < amount) {
                    sum_first_neg += array[i];
                    i++;
                }
            }
        }

        float sum_last_neg = 0;
        for (int i = amount - 1; i >= 0; i--) {
            sum_last_neg += array[i];
            if (array[i] < 0) break;
        }
        printf("\nsum from first first to last neg:%f", sum_first_neg - sum_last_neg);
    }
}