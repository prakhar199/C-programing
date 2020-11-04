//WAP to calculate difference between two time period using structure

#include <stdio.h>

struct TIME
{
int second;
int minutes;
int hours;
};


void differenceBetweenTimePeriods(struct TIME start, struct TIME stop, struct TIME diff)
{
    //while(stop.second >start.second)
    //{
      //  --start.minutes;
        //start.second=60;
    //}
    diff.second= stop.second-start.second;
   // while(stop.minutes >start.minutes)
    //{
      //  --start.hours;
        //start.minutes+=60;
    //}

    diff.minutes= stop.minutes-start.minutes;
    diff.hours= stop.hours-start.hours;

}

main()
{
 struct TIME startTime,stopTime, diff;

 printf("Enter the start time.\n");
 printf("Enter hours,minutes and seconds :");
 scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.second);

 printf("Enter the stop time.\n");
 printf("Enter hours,minutes and seconds :");
 scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.second);

 //Difference between start and stop time

 differenceBetweenTimePeriods(startTime, stopTime, diff);
 printf("\n Time difference: %d:%d:%d", diff.hours, diff.minutes, diff.second);

}
