#include<stdio.h>

 void main(){
    // 2d array
    // {5,4,5,6}

int marks[4][2]={
    {5,4}, {6,2},
    {8,3}, {9,2}
};

// printf("%d",marks[0][0]);

for (int i = 0; i < 4 ; i++){
    for (int j=0; j < 2;j++){
        printf("%d",marks[i][j]);
    }
    printf("\n");
  }
}