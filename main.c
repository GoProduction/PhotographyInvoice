#include <stdio.h>
#include <math.h>

int main(void) {
  
  //Declare cost variables
  int package, travelMiles, travelRate, travelTotal, hours, extraHourRate, extraHourTotal, downPayment, total;

  //Initialize cost variables
  package = 2400;
  travelRate = 20;
  extraHourRate = 150;

  printf("How many miles will you have to travel to the venue?\n");
  //Input stream for travelMiles variable
  scanf("%d", &travelMiles);
  
  //LOGIC: determines if extra MILE rates will occur
  if(travelMiles > 30){
    travelTotal = (travelMiles - 30) * travelRate;
  }
  else{
    travelTotal = 0;
  }

  printf("How many hours will you be shooting?\n");
  //Input stream for hours variable
  scanf("%d", &hours);

  //LOGIC: determines if extra HOUR rates will occur
  if(hours > 8){
    extraHourTotal = (hours - 8) * extraHourRate;
    
  }
  else if(hours < 8){
    extraHourTotal = (hours - 8) * extraHourRate;
  }
  else{
    extraHourTotal = 0;
    
  }
  
  //Total cost formula
  total = package + travelTotal + extraHourTotal;
  //Downpayment formula
  downPayment = total * .3;

  printf("The package costs $2400\n");

  //LOGIC: If there are no extra travel fees, the printf function will not fire
  if (travelTotal > 0){
    printf("The amount owed for travel is $%d\n", travelTotal);
  }

  //LOGIC: If there are no extra hour fees, the printf function will not fire; If there are LESS than 8 hours requested, the DISCOUNTED printf function will fire
  if(extraHourTotal > 0){
    printf("The amount owed for extra hour(s) is :$%d\n", extraHourTotal);
  }
  else if (extraHourTotal < 0){
    extraHourTotal = extraHourTotal * -1;
    printf("Your DISCOUNTED price is $%d\n", extraHourTotal);
  }

  printf("The total cost of services is $%d\n", total);
  printf("The downpayment of 30%% due TODAY is $%d", downPayment);

}
