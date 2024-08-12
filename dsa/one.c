#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int a[t];
    int j=0;
    while(t--){
        int x, y, n;
        scanf("%d%d%d", &x, &y, &n);
        a[j] = n - (n%x -y);
        if(a[j] >n) {
            a[j]-=x;
        }
        j++;
    }
    for(int i=0;i<j;i++){
        printf("%d\n", a[i]);
    } 
}