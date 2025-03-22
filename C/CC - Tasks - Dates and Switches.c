#include <stdio.h>

int main(void) {
  int month, day, year;
  char *monthOut;
  char *daySuffix;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  

  // Print the month
  switch (month) {
    case 1:
      monthOut = "Jan";
      break;
    case 2:
      monthOut = "Feb";
      break;
    case 3:
      monthOut = "Mar";
      break;
    case 4:
      monthOut = "Apr";
      break;
    case 5:
      monthOut = "May";
      break;
    case 6:
      monthOut = "Jun";
      break;
    case 7:
      monthOut = "Jul";
      break;
    case 8:
      monthOut = "Aug";
      break;
    case 9:
      monthOut = "Sep";
      break;
    case 10:
      monthOut = "Oct";
      break;
    case 11:
      monthOut = "Nov";
      break;
    case 12:
      monthOut = "Dec";
      break;
  }
  switch (day) {
    case 1:
      daySuffix = "st";
      break;
    case 2:
      daySuffix = "nd";
      break;
    case 3:
      daySuffix = "rd";
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
      daySuffix = "th";
      break;
    case 21:
      daySuffix = "st";
      break;
    case 22:
      daySuffix = "nd";
      break;
    case 23:
      daySuffix = "rd";
      break;
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
      daySuffix = "th";
      break;
    case 31:
      daySuffix = "st";
      break;
    default:
      daySuffix = "th";
      break;
  }

    printf("%s %d%s, %d\n", monthOut, day, daySuffix, year);
  
  return 0;
}