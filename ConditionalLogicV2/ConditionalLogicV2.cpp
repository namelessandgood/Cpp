#include <iostream>

using namespace std;

int main()
{
      int a = 10, b = 20;
      if(a>10 || b>a)
      {
            cout << "a is greater than 10 and positive" << '\n';
      }
      else if (a<10 || b>a)
      {
            cout << "a is less than 10 positive or ng" << '\n';
      }
      else
      {
            cout << "a is negative" << '\n';
      }


      // int avg = 95;
      // if(avg>=50 && avg<=59)
      // {
      //       cout << "You have passed the exam" << endl;
      // }
      // else if(avg>=60&&avg<=69)
      // {
      //       cout << "mid" << endl;
      // }
      // else if(avg>=70&&avg<=79)
      // {
      //       cout << "good" << endl;
      // }
      // else if(avg>=80&&avg<=89)
      // {
      //       cout << "very good" << endl;
      // }
      // else if (avg >= 90 && avg <= 100)
      // {
      //       cout << "excellent" << endl;
      // }
      // else
      // {
      //       cout << "You have failed the exam" << endl;
      // }

      return 0;
}
