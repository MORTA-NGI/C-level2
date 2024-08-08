#include <stdio.h>
#include <stdlib.h>

int **allocate (int h, int w) {
    int **p;
    int i, j;

    p = (int **) malloc(h*sizeof (int *) );
    for (i=0;i<h;i++) {
        p[i] = (int *) malloc(w * sizeof (int));
    }
    return(p);
}

void read_data (int **p, int h, int w) {
    int i, j;
    for (i=0;i<h;i++) {
        printf("Enter the items \t");
        for (j=0;j<w;j++) {
           
            scanf ("%d", &p[i][j]);
            if (i<j){ printf("contiune \t");}
        }
       
    }
    
}

void print_data (int **p, int h, int w) {
    int i, j;
    for (i=0;i<h;i++) {
        for (j=0;j<w;j++) {
            printf ("%5d ", p[i][j]);
        }
        printf ("\n");
    }
}

int main() {
    int **p;
    int M, N;
    printf ("Enter array raw M and and Collumn N \t \n");
    scanf ("%d%d", &M, &N);
    p = allocate (M, N);
    read_data (p, M, N);
    printf ("\nThe array read as \n");
    print_data (p, M, N);

    // Deallocate memory
    for (int i = 0; i < M; i++) {
        free(p[i]);
    }
    free(p);

    return 0;
}
