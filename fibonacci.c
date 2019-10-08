#include<stdio.h>
#include<conio.h>
//prototype
void fibonnaci(int *max_num);
void fibonaci(int max_num);
int main()
{
    int max_num;
    printf("Enter the maximum number:");
      scanf("%d",&max_num);
      //pass by reference
    fibonnaci(&max_num);
    //pass by value
    fibonaci(max_num);
}
//function defination pass by reference
 void fibonnaci(int *max_num){
     //declare variables
     int array[100],i,n;
     n = *max_num;
      array[0] =0;
      array[1] = 1;
       printf("%d\n%d\n",array[0],array[1]);
     for(i=2;i<=n;i++){
         array[i] = array[i-1]+array[i-2];
         if(array[i]>=n)
         break;
         else
         printf("%d\n",array[i]);
         }
         printf("These are fibonnaci numbers between 0 and %d .\n",n);
     }


     //pass by value
      void fibonaci(int max_num){
     //declare variables
     int array[100],i,n;
     n = max_num;
      array[0] =0;
      array[1] = 1;
       printf("%d\n%d\n",array[0],array[1]);
     for(i=2;i<=n;i++){
         array[i] = array[i-1]+array[i-2];
         if(array[i]>=n)
         break;
         else
         printf("%d\n",array[i]);
         }
         printf("These are fibonnaci numbers between 0 and %d .",n);
     }
