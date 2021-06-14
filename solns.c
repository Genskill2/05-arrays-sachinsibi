/* Enter your solutions in this file */
//max.c
#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
 int x[] = {9,5,6,10,2,-3,4};
 assert (max(x, 7) == 10);
 int y[] = {5};
 assert (max(y, 1) == 5);
 printf("Max: passed\n");
}
int max(int a[], int b){
 int s = 0;
 if (b>1) {
  for (int i=0; i<b-1; i++) {
   if (s<a[i]) {
    s = a[i];
    printf("s is %i\n",a[i]);
   }
   else {
    printf("s is %i\n",s);
   }
  }
 }
 else {
  s=a[0];
 } 
 printf("Max is %i\n", s);
 return s;
} 

//next
