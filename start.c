#include <stdio.h>
#include <stdlib.h>
int main() {
    int n; printf("Enter days: "); scanf("%d",&n);
    float *exp = (float*)malloc(n*sizeof(float));
    float total=0; int maxDay=0;
    for(int i=0;i<n;i++){ scanf("%f",&exp[i]); total+=exp[i]; if(exp[i]>exp[maxDay]) maxDay=i; }
    printf("Total expenses: %.2f\nDay %d highest spending: %.2f\n", total, maxDay+1, exp[maxDay]);
    free(exp);
    printf("%f",exp[1]);
    return 0;
}
