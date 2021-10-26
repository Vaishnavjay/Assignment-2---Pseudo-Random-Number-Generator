#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
int a,b;

// Function to generate two random numbers
void rand_gen (){
	a = rand();
	b = rand();
}

// Function to return GCD of two numbers
int find_gcd(int a, int b){
  int gcd;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      gcd = i;
    }
  }
  return gcd;
}

// Function to return square root of a number
float sqaure_root(float num){
     return sqrt(num);
}
int main(void)
{
    int counter=0,i,gcd;
    float prob,pi;
    srand(time(0));
    printf("Seed value used to generate random numbers is system time\n");
    printf("Looping for 1 million times ....\n");
    printf("Kindly wait :)\n");
    for(i=1;i<=1000000;i++){
        rand_gen();
        gcd = find_gcd(a,b);
        //printf("\nGCD of %d and %d is %d",a,b,gcd);
        //printf("\n\n");
        if(gcd==1){
            counter++;
        }
    }
    prob = (float)counter/(float)(i-1);
    printf("\nNumber of Occurrences of GCD=1 is %d",counter);
    printf("\nProbability that GCD is 1 for %d iterations = %f",(i-1),prob);
    pi = sqaure_root((float)6/(float)prob);
    printf("\nCalculated value of pi = %f \n",pi);
    getch();
	return 0;
}
