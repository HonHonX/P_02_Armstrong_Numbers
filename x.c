#include<stdio.h>
#include<math.h>

//Funktions Prototypen
int is_armstrong_number(int candidate);
int numDigits(int candidate, int count);
int expo(int num, int exp);

//Hauptprogramm
int main () {
	/*
	* Test, ob eine Zahl eine Armstrong Zahl ist.
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *                        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Eingabeaufforderung
	int number;
	printf("Please enter number: ");
	scanf("%d",&number);
	
	//Ende
	printf("\n\n");
	return is_armstrong_number(number);
}

//Funktionen

 int numDigits(int candidate, int count) {
     printf("\ncount: %d",count);  
     if (candidate<=0)
         return 0;
     if (candidate<10)
         return count;
     else 
         return numDigits(candidate/10,count+1);
  }

  int is_armstrong_number(int candidate) {
      int digit=0,sum=0,result=1;
      
      if (candidate<0)
          candidate = -candidate;
      
      int num = numDigits(candidate,1);
      
      for (int i=1;i<=num;i++) {
          if (candidate>10)
                	digit = candidate%expo(10,i)/expo(10,i-1);
          else 
                digit = candidate;
	  sum+=expo(digit,num);
	  printf("\nErgebnis: %d\n",sum==candidate);
      }
      return (sum);   
 }

int expo(int num, int exp) {
      int result=1;
      while (exp!=0){
	   result*=num;
           exp--;
      }
      return result;
}
	
