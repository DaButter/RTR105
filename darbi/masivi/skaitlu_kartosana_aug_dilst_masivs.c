#include <stdio.h>
void main()
    {
        int i, j, a, n, number[30], b;
        printf("Ievadiet skaitli, cik daudz skaitlus ievadisiet sistemaa \n");
        scanf("%d", &n);

        printf("Ievadiet skaitlus \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i) 
        {
           for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j]) 
                {
                   a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
		if (number[i] > number[j])
		   b = number[i];
		    number[i] = number[j];
                    number[j] = b;
            }
        }

        printf("Dilstosaa secībā sakārtoti skaitli \n");

        for (i = 0; i < n; ++i)

            printf("%d\n", number[i]);

    }
