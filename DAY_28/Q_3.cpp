// program to Create ticket booking system.
#include <bits/stdc++.h>
using namespace std;

struct Ticket
{
    int ticketNo;
    string name;
    string destination;
    int seats;
};

int main()
{
    vector<Ticket> tickets;
    int choice;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display All Bookings\n";
        cout << "3. Search Booking\n";
        cout << "4. Cancel Booking\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                Ticket t;

                cout << "Enter Ticket Number: ";
                cin >> t.ticketNo;
                cin.ignore();

                cout << "Enter Passenger Name: ";
                getline(cin, t.name);

                cout << "Enter Destination: ";
                getline(cin, t.destination);

                cout << "Enter Number of Seats: ";
                cin >> t.seats;

                tickets.push_back(t);

                cout << "Ticket Booked Successfully!\n";
                break;
            }

            case 2:
            {
                if(tickets.empty())
                {
                    cout << "No Bookings Available.\n";
                }
                else
                {
                    cout << "\n---------------------------------------------------------\n";
                    cout << "Ticket No\tName\t\tDestination\tSeats\n";
                    cout << "---------------------------------------------------------\n";

                    for(int i=0; i<tickets.size(); i++)
                    {
                        cout << tickets[i].ticketNo << "\t\t"
                             << tickets[i].name << "\t\t"
                             << tickets[i].destination << "\t\t"
                             << tickets[i].seats << endl;
                    }
                }
                break;
            }

            case 3:
            {
                int no;
                bool found = false;

                cout << "Enter Ticket Number: ";
                cin >> no;

                for(int i=0; i<tickets.size(); i++)
                {
                    if(tickets[i].ticketNo == no)
                    {
                        cout << "\nBooking Found\n";
                        cout << "Ticket Number : " << tickets[i].ticketNo << endl;
                        cout << "Passenger Name: " << tickets[i].name << endl;
                        cout << "Destination   : " << tickets[i].destination << endl;
                        cout << "Seats         : " << tickets[i].seats << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Booking Not Found.\n";

                break;
            }

            case 4:
            {
                int no;
                bool found = false;

                cout << "Enter Ticket Number to Cancel: ";
                cin >> no;

                for(int i=0; i<tickets.size(); i++)
                {
                    if(tickets[i].ticketNo == no)
                    {
                        tickets.erase(tickets.begin() + i);
                        cout << "Ticket Cancelled Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Ticket Not Found.\n";

                break;
            }

            case 5:
                cout << "Thank You for Using Ticket Booking System!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}