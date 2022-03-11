#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
struct Time{
  int m,h,s;
};

void getTime (struct Time &time){
  cout << "Input hours :";
  cin >> time.h;
  cout << "Input minutes:";
  cin >> time.m;
  cout << "Input seconds :";
  cin >> time.s;
}

struct Time subtract( struct Time time2, struct Time time1){
  struct Time temp;
  
  int time1_sec = ((time1.h*3600)+(time1.m*60)+time1.s);
  int time2_sec = ((time2.h*3600)+(time2.m*60)+time2.s);
  int time_diff = abs(time2_sec - time1_sec);

  temp.h = time_diff / 3600;
  time_diff = time_diff % 3600;

  temp.m = time_diff / 60;
  time_diff = time_diff % 60;

  temp.s = time_diff;

  return temp;
}
// t3=t2-t1
int main (){
    struct Time t1, t2,t3;
    cout<<"What time was it?" << endl;
   getTime (t1); // รับค่าเวลาเข้ามา
    cout<<"What time is it now?" << endl;
   getTime (t2); // รับค่าเวลาเข้ามา
   t3=subtract (t2,t1); //t3=t2-t1
    cout<<"Time diff is ";
    cout<<setfill('0')<<setw(2)<<t3.h<<":";
    cout<<setfill('0')<<t3.m<<":";
    cout<<setfill('0')<<t3.s;
}
 // aina 02:-5:-30