#include<stdio.h>
#include<math.h>
int main(){
   int N,nx,y=0,x=0,l=0,c=0,r=0;
   scanf("%d",&N);
   if(N%2==0)
   nx=N-1;
   l = ceil(N/2.f)-1;
   r = l;
   for(y=0;y<=ceil(N/2.f)-1;y++,l--,r--,c++){
         for(x=0;x<l;x++){
            printf("-");
         }
         printf("*");
         for(x=0; x<c; x++){
            printf("-");
         }
         if(y!=0)
         printf("*");
        for(x=0;x<r;x++){
            printf("-");
        }
        printf("\n");
        if(y>=1)
        c++;
   }
   c=c-2;
   if(N%2==0){
      x=0, l=0, r=0;
        for(;y<N;y++,l++,r++,c--){
        for(x=0;x<l;x++){
            printf("-");
        }
        printf("*");
        for(x=0; x<c; x++){
            printf("-");
        }
         if(y!=N-1)
         printf("*");
         for(x=0;x<r;x++){
            printf("-");
        }
        printf("\n");
        if(y!=N-2)
        c--;
        }
    }
    else if(N%2!=0){
        c=c-2, l=1, r=1;
        for(;y<N;y++,l++,r++,c--){
        for(x=0;x<l;x++){
            printf("-");
        }
        printf("*");
        for(x=0; x<c;x++){
        printf("-");
        }
        if(y!=N-1)printf("*");
        for(x=0;x<r;x++){
            printf("-");
        }
        printf("\n");
        if(y!=N-2) c--;
        }
    }
}
