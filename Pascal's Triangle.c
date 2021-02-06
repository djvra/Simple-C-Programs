#include<stdio.h>

int main(){
    int array[20][20], limit, space;
    printf("how many rows do you want to print? ");
    scanf("%d", &limit);
    int b=limit;
    
    for(int i=0; i<limit; ++i){
    	for(space=b; space>0; --space) printf("  ");
    	for(int j=0; j<=i; ++j){
    		if(j==0 || j==i) array[i][j]=1; 
    		else array[i][j]=array[i-1][j-1] + array[i-1][j];
    		printf(" %2d ", array[i][j]);
		}
		printf("\n");
		b-=1;
	}
    return 0;
}
