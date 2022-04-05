#include<stdio.h>

 int main()
 {
    int num = 0;
    int array[10];
    for(int i=0; i<=10;i++)
    {
        printf("\nInserisci un numero: ");
        array[i] = scanf();
    }
        for (int a = 0; a <= 10; a++)
        {
            for (int i = a + 1; i <=10; i++)
            {
                if (array[i]%2==0)
                {
                    num = array[a];
                    array[a] = array[i];
                    array[i] = num;
                }
            }
            printf("Vettore ordinato: " + array[a]);
        }
    return 0;
 }