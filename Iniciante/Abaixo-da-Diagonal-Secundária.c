#include <stdio.h>

int main (void){
    double mat[12][12], result = 0, cm = 0;
    char O;
    int i, j;

    scanf("%c", &O);

    for(i = 0; i<12; ++i)
        for(j = 0; j<12; ++j)
            scanf("%lf", &mat[i][j]);
    
    if(O == 'S'){
        for(i = 0; i<12; ++i){
            for(j = 0; j<12; ++j){
                if(i + j > 11){
                    result += mat[i][j];
                }
            }
        }


    }else if (O == 'M'){
        for(i = 0; i<12; ++i){
            for(j = 0; j<12; ++j){
                if(i + j > 11){
                    ++cm;
                    result += mat[i][j];
                }
            }
        }

        result = (double) result / cm;
    }

    printf("%.1f\n", result);

    getch();

    return 0;
}