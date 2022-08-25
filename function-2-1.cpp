#include <iostream>
#include <string>
using namespace std;
string month_lookup(int month) {
  string month_name;
 
    switch (month) {
      case 1:
        month_name = "Jan";
        break;
      case 2:
        month_name = "Feb";
        break;
      case 3:
        month_name = "Mar";
        break;
      case 4:
        month_name = "Apr";
        break;
      case 5:
        month_name = "May";
        break;
      case 6:
        month_name = "Jun";
        break;
      case 7:
        month_name = "Jul";
        break;
      case 8:
        month_name = "Aug";
        break;
      case 9:
        month_name = "Sep";
        break;
      case 10:
        month_name = "Oct";
        break;
      case 11:
        month_name = "Nov";
        break;
      case 12:
        month_name = "Dec";
        break;
      default:
        month_name="invalid month";
        break;
  }
  return month_name;
}