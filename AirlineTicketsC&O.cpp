/*Create a class that captures airline tickets.
Each ticket lists the departure and arrival cities, a flight number, and a seat assignment.
A seat assignment has both a row and a letter for the seat within the row (such as 12F).
Make two examples of tickets.*/

#include<iostream>
#include<string.h>
using namespace std;
class AirlineTickets
{
private:
    char DepartureCity[10];
    char ArrivalCity[10];
    int FlightNo;
    int SeatRow;
    char SeatLetter[10];
public:
    void setAirlineTickets(char *departurecity, char *arrivalcity, int flightno, int seatrow, char *seatletter)
    {
    strcpy(DepartureCity,departurecity);
     strcpy(ArrivalCity,arrivalcity);
    FlightNo = flightno;
     SeatRow = seatrow;
     strcpy(SeatLetter,seatletter);
    }
     char *getdeparturecity()
    {
        return DepartureCity;
    }
    char *getarrivalcity()
    {
        return ArrivalCity;
    }
    int getflightno()
    {
        return FlightNo;
    }
    int getseatrow()
    {
        return SeatRow;
    }
    char *getseatletter()
    {
        return SeatLetter;
    }

};
class Ticket1:public AirlineTickets
{
public:

    void displayt1()
    {
        cout<<"Departure City"<<"\t"<<"Arrival City"<<"\t"<<"Flight num"<<"\t"<<"Seat Assignment"<<endl;
        cout<<getdeparturecity()<<"\t"<<getarrivalcity()<<"\t"<<getflightno()<<"\t"<<getseatrow()<<"\t"<<getseatletter()<<endl;
    }

};
class Ticket2:public AirlineTickets
{
public:

    void displayt2()
    {
        cout<<getdeparturecity()<<"\t"<<getarrivalcity()<<"\t"<<getflightno()<<"\t"<<getseatrow()<<"\t"<<getseatletter()<<endl;
    }

};
int main()
{
    Ticket1 ob1;
    ob1.setAirlineTickets("Mumbai", "Chennai", 10, 2, "A");
    Ticket2 ob2;
    ob2.setAirlineTickets("Banglore", "Pune", 20, 6, "F");
    ob1.displayt1();
    ob2.displayt2();
}
