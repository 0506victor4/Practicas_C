#include <stdio.h>

//Description: A marathon runner has covered a distance of 42,195 km in 72 hours and 25 minutes, obtaining the average distance of meters traveled per minute, that is, how many meters he covers per minute.

int main(void) {

int kilometers = 42195;
int hours = 72;
int minutes = 25;

   float meters = kilometers * 1000;
    float total_minutes = hours * 60 + minutes;

    float average_speed = meters / total_minutes;

    printf("%f",average_speed);
    
    return 0;
}