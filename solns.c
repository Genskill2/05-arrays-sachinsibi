/* Enter your solutions in this file */
#include <stdio.h>

//max function
int max(int a[], int b){
 int s = 0;
 if (b>1) {
  for (int i=0; i<b-1; i++) {
   if (s<a[i]) {
    s = a[i];
    //printf("s is %i\n",a[i]);
   }
   else {
    //printf("s is %i\n",s);
   }
  }
 }
 else {
  s=a[0];
 } 
 printf("Max is %i\n", s);
 return s;
} 

//min funtion
int min(int a[],int b) {
 int d = 10;
 if (b>1) {
  for(int i=0; i<b; i++) {
   if (a[i]<d) {
    d = a[i];
    //printf("d is %i\n",d);
   }
   else {
    //printf("d is %i\n",d);
   }
  } 
 }
 else {
  d = a[0];
 }
 printf("Min is %i\n",d);
 return d;
} 

//average funtion
float average(int a[], int b) {
 int s = 0;
 for (int i=0; i<b; i++) {
  s = s+a[i];
 }
 float x = (float)s/b;
 printf("Average is %f\n",x);
 return x;
}

//mode funtion
int mode(int a[], int b) {
 int c1 = 0;
 int c2 = 0;
 int c3 = 0;
 int m = 0;
 if (b>1) {
  for (int i=0; i<b-1; i++) {
   for (int j=i+1; j<b; j++) {
    if (a[i]==a[j]) {
     c1 = c1 + 1;
     /*printf("a[i] is %i and a[j] is %i\n",a[i],a[j]);
     printf("C1 is %i\n",c1);
     printf("C3 is %i\n",c3);*/
    }
    else {
     /*printf("a[i] is %i and a[j] is %i\n",a[i],a[j]);
     printf("%i\n",c1);
     printf("C2 is %i\n",c2);
     printf("C3 is %i\n",c3);*/
    }
   }
  if (c1>c2) {
   c2 = c1;
   c1 = 0;
   c3 = 0;
   //printf("c2 is %i, c1 is %i and c3 is %i\n",c2,c1,c3);
   m = a[i];
   //printf("m is %i\n",m);
  }
  else if (c1==c2) {
   c3 = c3 + 1;
   c1 = 0;
  }
  else {
   c1 = 0;
   //printf("c2 is %i and c1 is %i\n",c2,c1);
  }
  }
 }
 else {
  c2 = b-1;
  m = a[0];
 }
 if (c3==0) {
  printf("Mode is %i\nIt occurs %i time(s)\n",m,c2+1);
 }
 else {
  printf("Multiple modes detected\n");
  printf("First occurring mode is %i\nIt occurs %i time(s)\n",m,c2+1); 
 }
 return m;
}

//factors function
int factors(int n, int a[]) {
  int i = 0;
  int c = 0;
  for (int j=2; j<=sqrt(n); j++) {
    while (n % j == 0) {
      a[i]=j;
      i++;
      c++;
      n = n/j;
      /*printf("i is %i\n",i);
      printf("j is %i\n",j);
      printf("Count is %i\n",c);
      printf("n is %i\n",n);*/
    }
  }
  if (n>2) {
    a[i]=n;
    c++;
    /*printf("i is %i\n",i);
    printf("Count is %i\n",c);
    printf("n is %i\n",n);*/
  }
  return c;
}


