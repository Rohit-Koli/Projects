/*Question:-
  Suppose you are making a program for bus service.A bus can transport 50 passengers at once.
  Given the number of passengers waiting in the bus stand as a input , you need to calculate and catch the output.
  how many empty seats are remaining in the last bus will have ?.
    Sample input :- 126
    Sample output:-24
  */
#include <iostream>
using namespace std;

int main()
{
    int pascap;//Passenger Capacity
    int waitpas;//Waiting passengers
    int lastbuscap;//Lastbus
    int finalcap;//final capacity of bus
    pascap =50;
    cout<<"Enter how many passengers are waiting"<<endl;
    cin>>waitpas;
    lastbuscap=waitpas%pascap;
    finalcap=pascap-lastbuscap;
    cout<<"Seats are empty in lat bus :"<<finalcap<<endl;
    return 0;
}
