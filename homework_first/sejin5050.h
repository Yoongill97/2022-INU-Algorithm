#include <stdio.h>

int matrix[501][2];

int Matrix(){
int n,i,j;
}
 scanf("%d",&n);
 for(i=0;i<n;i++){
 scanf("%d %d",&matrix[i][0],&matrix[i][1]);
 }
 int ans = ChainedMatrix(n);
 printf("최소연산횟수 : %d/n",ans);
 };