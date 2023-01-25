#include<stdio.h>
#include<math.h>
#include <stdbool.h>

//Funktions Prototypen
bool is_armstrong_number(int candidate);
int numDigits(int candidate, int count);
int expo(int num, int exp);

//Hauptprogramm
int main () {
	/*
	* Test, ob eine Zahl eine Armstrong Zahl ist.
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *   Armstrong Zahlen     * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Eingabeaufforderung
	int number;
	printf("\nPlease enter number: ");
	scanf("%d",&number);
	
	if(is_armstrong_number(number))
		printf("\n%d is an Armstrong number.",number);
	else
		printf("\n%d is not an Armstrong number.",number);
	
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
         return numDigits(candidate/10,count+1);
  }

  bool is_armstrong_number(int candidate) {
      int digit=0,sum=0;
      
      if (candidate<0)
          candidate = -candidate;
      
      int num = numDigits(candidate,1);
      
      for (int i=1;i<=num;i++) {
          if (candidate>10)
                digit = candidate%expo(10,i)/expo(10,i-1);
          else 
                digit = candidate;
	  sum+=expo(digit,num);
      }
      return (sum==candidate);   
 }

int expo(int num, int exp) {
      int result=1;
      while (exp!=0){
	   result*=num;
           exp--;
      }
      return result;
}
	
