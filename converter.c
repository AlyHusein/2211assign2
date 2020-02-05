#include <stdio.h>
/* Aly Husein
Assignment 2 Task 1 */

/* Defining the constants */
#define MI_KM_RATE 0.62137f
#define FEET_METER_RATE 0.3048f
#define CM_INCH_RATE 0.39370f
#define FREEZING_PT 32.0f
#define C_F_RATE 1.8f

/*Initializing the variables*/
char chosenAction;
char chosenChar;
float givenVal;
float newVal;
int finished = 0;

int main()
{
    /*do while loop so it keeps going until the user quits */
  do
  {
    printf("\nWhat action would you like to choose? \n1. Kilometer/Mile Converter \n2. Meter/Feet Converter");
    printf("\n3. Centimetre/Inch Converter \n4. Celsius/Fahrenheit Converter \n5. Quit\n");
    scanf("%c", &chosenAction);

    switch(chosenAction)
    {
        case '1' :
            while ((getchar()) != '\n');
            printf("\nPlease enter 'K' for Kilometre to Mile or 'M' for the opposite: ");
            scanf("%c", &chosenChar);
            if (chosenChar == 'K')
            {
              while ((getchar()) != '\n');
              printf("\nPlease enter the value you would like to convert: ");
              scanf("%f", &givenVal);
              newVal = (givenVal * MI_KM_RATE);
              printf("\nYour new value is %.2f Miles", newVal);
              break;
            }
            else if (chosenChar == 'M')
            {
              while ((getchar()) != '\n');
              printf("\nPlease enter the value you'd like to convert: ");
              scanf("%f", &givenVal);
              newVal = (givenVal / MI_KM_RATE);
              printf("\nYour new value is %.2f Kilometeres", newVal);
              while ((getchar()) != '\n');
              break;
            }
            else
            {
              printf("\nInvalid Character");
              while ((getchar()) != '\n');
              break;
            }
        case '2' :
            while ((getchar()) != '\n');
            printf("\nPlease enter 'M' to switch from Meters to Feet, or 'F' for the opposite: ");
            scanf("%c", &chosenChar);
            if (chosenChar == 'M')
            {
              while ((getchar()) != '\n');
              printf("\nPlease enter the value you'd like to convert: ");
              scanf("%f", &givenVal);
              newVal = (givenVal / FEET_METER_RATE);
              printf("\nYour new value is %.2f feet", newVal);
              while ((getchar()) != '\n');
              break;
            }
            else if (chosenChar == 'F')
            {
              while ((getchar()) != '\n');
              printf("\nPlease enter the value you'd like to convert: ");
              scanf("%f", &givenVal);
              newVal = (givenVal * FEET_METER_RATE);
              printf("\nYour new value is %.2f meters", newVal);
              while ((getchar()) != '\n');
              break;
            }
            else
            {
              printf("\nInvalid Input");
              while ((getchar()) != '\n');
              break;
            }
        case '3' :
            while ((getchar()) != '\n');
            printf("\nPlease enter 'C' to switch from Centimeteres to Inches, or 'I' for the opposite: ");
            scanf("%c", &chosenChar);
            if (chosenChar == 'C')
            {
              while ((getchar()) != '\n');
              printf("\nPlease enter the value you'd like to convert: ");
              scanf("%f", &givenVal);
              newVal = (givenVal * CM_INCH_RATE);
              printf("\nYour new value is %.2f Inches", newVal);
              break;
            }
            else if (chosenChar == 'I')
            {
              while ((getchar()) != '\n');
              printf("\nPlease enter the value you'd like to convert: ");
              scanf("%f", &givenVal);
              newVal = (givenVal / CM_INCH_RATE);
              printf("\nYour new value is %.2f Centimeteres", newVal);
              while ((getchar()) != '\n');
              break;
            }
            else
            {
              printf("\nInvalid Input");
              while ((getchar()) != '\n');
              break;
            }
        case '4' :
            while ((getchar()) != '\n');
            printf("\nPlease enter 'C' to switch from Celsius to Fahrenheit, or 'F' for the opposite: ");
            scanf("%c", &chosenChar);
            if (chosenChar == 'C')
            {
              while ((getchar()) != '\n');
              printf("\nPlease enter the value you'd like to convert: ");
              scanf("%f", &givenVal);
              newVal = (givenVal * C_F_RATE + FREEZING_PT);
              printf("\nYour new value is %.2f Fahrenheit", newVal);
              break;
            }
            else if (chosenChar == 'F')
            {
              while ((getchar()) != '\n');
              printf("\nPlease enter the value you'd like to convert: ");
              scanf("%f", &givenVal);
              newVal = ((givenVal - FREEZING_PT)/C_F_RATE);
              printf("\nYour new value is %.2f Celsius", newVal);
              while ((getchar()) != '\n');
              break;
            }
            else
            {
              printf("\nInvalid Input");
              while ((getchar()) != '\n');
              break;
            }
        case '5' :
            finished = 1;
            printf("\nThank you, goodbye.");
            break;
        default :
            printf("\nPlease input a number between 1 and 5: ");
            while ((getchar()) != '\n');
    }
  }
  while (finished == 0);

    return 0;
}
