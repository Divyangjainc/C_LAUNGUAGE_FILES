#include <stdio.h>

void main() {
    printf("Multi-Dimension or 3D Arrays\n\n");

    char m_arr[2][2][2] = {
        {
            {'a','b'},
            {'c','d'}
        },
        {
            {'e','f'},
            {'g','g'}
        },
    };

    // loop
    int i, j, k;

    for (i = 0; i < 2; i++) {
        printf("Row %d | ", i);

        for (j = 0; j < 2; j++){
            printf("Col %d: ", j);

            for (k = 0; k < 2; k++) {
        //         printf(" %d ", j);
                printf(" %d | ", k);
        //        // printf("%d %d %d\n", i, j, k);
                printf("%c | ", m_arr[i][j][k]);
            }
            // printf("\n");
        }
        printf("\n");
    }
}
