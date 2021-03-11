#include<stdio.h>
#include<math.h>
int main(){
   int n,nx,y=0,x=0,l=0,c=0,r=0;
   scanf("%d",&n);
   if(n%2==0) nx=n-1;
   l = ceil(n/2.f)-1;
   r = l;
   for(y=0;y<=ceil(n/2.f)-1;y++,l--,r--,c++){
         for(x=0;x<l;x++){
            printf("-");
         }
         printf("*");
         for(x=0; x<c; x++){
            printf("-");
         }
         if(y!=0)printf("*");
        for(x=0;x<r;x++){
            printf("-");
        }
        printf("\n");
        if(y>=1) c++;
   }
   c=c-2;
    if(n%2==0){
      x=0, l=0, r=0;
        for(;y<n;y++,l++,r++,c--){
        for(x=0;x<l;x++){
            printf("-");
        }
        printf("*");
        for(x=0; x<c; x++){
            printf("-");
        }
         if(y!=n-1)printf("*");
        for(x=0;x<r;x++){
            printf("-");
        }
        printf("\n");
        if(y!=n-2) c--;
        }
    }
    else if(n%2!=0){
        c=c-2, l=1, r=1;
        for(;y<n;y++,l++,r++,c--){
        for(x=0;x<l;x++){
            printf("-");
        }
        printf("*");
        for(x=0; x<c; x++){
            printf("-");
        }
