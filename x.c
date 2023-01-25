#include<stdio.h>

//Funktions Prototypen
int is_armstrong_number(int candidate);
int numDigits(int candidate, int count);

//Hauptprogramm
int main () {
	/*
	*
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *                        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//
	printf("%d",is_armstrong_number(5));
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen

 int numDigits(int candidate, int count) {
     if (candidate<=0)
         return 0;
     if (candidate<10)
         return count;
     else 
         return numDigits(candidate/10,count++);
  }

  int is_armstrong_number(int candidate) {
      int digit=0,sum=0;
      
      if (candidate<0)
          candidate = -candidate;
      
      int num = numDigits(candidate,1);
      
      for (int i=1;i<=num;i++) {
          if (candidate>10)
                digit = candidate%(10*i);
          else 
                digit = candidate;
          sum+=digit^num;               
      }
      return (sum);   
 }
