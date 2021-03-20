#include<iostream>

#include<string>

#include<fstream>

#include<windows.h>

#include<iomanip>

#include<time.h>

#include<stdlib.h>

#define max 10
using namespace::std;

string domestflight[] = {
  "lahore",
  "karachi",
  "islamabad",
  "peshawar",
  "sialkot",
  "multan",
  "faisalabad",
  "sargodha",
  "bahawalpur",
  "rawalpindi"
}; //destinatons from where flights are available
string interflight[] = {
  "california",
  "london",
  "dubai",
  "beijing",
  "capetown",
  "newyork",
  "berlin",
  "qatar",
  "jeddah",
  "paris"
};

int randomize1() {
  srand(time(NULL)); //to randomly generate reference no
  int x;
  x = rand() % 10000 + 1;
  return x;
}

int randomize2() {
  srand(time(NULL)); //to randomly generate ticket no
  int y;
  y = rand() % 500 + 1;
  return y;
}

class flighttime //class to find time of time
{
  protected:
    int choice;

  public:
    void receiveinfo() {
      do {
        cout << "At what time do you want to travel: " << endl;
        cout << "Press 1 for 12pm" << endl;
        cout << "Press 2 for 3pm" << endl;
        cout << "Press 3 for 6pm" << endl;
        cout << "Press 4 for 9pm" << endl;
        cout << "Press 5 for 12am" << endl;
        cout << "Press 6 for 3am" << endl;
        cout << "Press 7 for 6am" << endl;
        cout << "Press 8 for 9am" << endl;
        cout << endl << "Enter your choice: ";
        cin >> choice;
        cout << endl;
      } while (choice <= 0 || choice > 8);

    }

  void showinfo() {
    switch (choice) {

    case 1:
      if (choice == 1) {

        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                        Flight Time: 12 pm                              |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                  GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|---------------------------------------------------------------------------|" << endl <<
          "|                           Flight Time: 12 pm                              |" << endl <<
          "|---------------------------------------------------------------------------|" << endl <<
          "|                     GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl <<
          "|---------------------------------------------------------------------------|" << endl;
        break;
      }
    case 2:
      if (choice == 2) {

        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                        Flight Time: 3 pm                               |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                  GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|---------------------------------------------------------------------------|" << endl <<
          "|                           Flight Time: 3 pm                               |" << endl <<
          "|---------------------------------------------------------------------------|" << endl <<
          "|                     GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl <<
          "|---------------------------------------------------------------------------|" << endl;

        break;
      }
    case 3:
      if (choice == 3) {

        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                        Flight Time: 6 pm                               |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                  GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|---------------------------------------------------------------------------|" << endl <<
          "|                           Flight Time: 6 pm                               |" << endl <<
          "|---------------------------------------------------------------------------|" << endl <<
          "|                     GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl <<
          "|---------------------------------------------------------------------------|" << endl;

        break;
      }
    case 4:
      if (choice == 4) {

        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                        Flight Time: 9 pm                               |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                  GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|---------------------------------------------------------------------------|" << endl <<
          "|                           Flight Time: 9 pm                               |" << endl <<
          "|---------------------------------------------------------------------------|" << endl <<
          "|                     GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl <<
          "|---------------------------------------------------------------------------|" << endl;

        break;
      }
    case 5:
      if (choice == 5) {

        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                        Flight Time: 12am                               |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                  GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|---------------------------------------------------------------------------|" << endl <<
          "|                           Flight Time: 12 am                              |" << endl <<
          "|---------------------------------------------------------------------------|" << endl <<
          "|                     GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl <<
          "|---------------------------------------------------------------------------|" << endl;

        break;
      }
    case 6:
      if (choice == 6) {

        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                        Flight Time: 3 am                               |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                  GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|---------------------------------------------------------------------------|" << endl <<
          "|                           Flight Time: 3 am                               |" << endl <<
          "|---------------------------------------------------------------------------|" << endl <<
          "|                     GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl <<
          "|---------------------------------------------------------------------------|" << endl;

        break;
      }
    case 7:
      if (choice == 7) {

        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                        Flight Time: 6 am                               |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                  GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|---------------------------------------------------------------------------|" << endl <<
          "|                           Flight Time: 6 am                               |" << endl <<
          "|---------------------------------------------------------------------------|" << endl <<
          "|                     GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl <<
          "|---------------------------------------------------------------------------|" << endl;

        break;
      }
    case 8:
      if (choice == 8) {

        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                        Flight Time: 9 am                               |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|                  GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|---------------------------------------------------------------------------|" << endl <<
          "|                           Flight Time: 9 am                               |" << endl <<
          "|---------------------------------------------------------------------------|" << endl <<
          "|                     GOOD BYE AND HAVE A SAFE JOURNEY                      |" << endl <<
          "|---------------------------------------------------------------------------|" << endl;

        break;
      }
    default:
      {
        cout << "Sorry, wrong choice entered ";
        cin >> choice;
        break;
      }
    }
  }
};

class searchflight //class to search local and international flights which are available
{
  public:

    void searchingflig() {
      cout << endl << "Domesticic flights available are listed below: " << endl;
      for (int i = 0; i < max; i++) {
        cout << domestflight[i] << endl;
      }
      cout << endl << "International flights available are listed below: " << endl;
      for (int x = 0; x < max; x++) {
        cout << interflight[x] << endl;
      }
    }

};

class passengerinfo // class which implements concept of virtual function
{
  public:
    virtual void receiveinfo() {

    }
  virtual void showinfo() {

  }

};

class flightbooking: public passengerinfo //class which inherits class passengerinfo and it stores and displays 
//passenger information
{
  protected: 
  string contactnum;
  string firstname;
  string lastname;
  string departure;
  string arrival;
  string reservationno;

  public:

    void receiveinfo() {
      cout << endl << "Please enter the following passenger information" << endl;
      cout << "Enter passenger's first name: ";
      cin >> firstname;
      cout << "Enter passenger's last name: ";
      cin >> lastname;
      cout << "Enter passenger's contact no: ";
      cin >> contactnum;
      cout << "Enter passenger's departure location: ";
      cin >> departure;
      cout << "Enter passenger's arrival location: ";
      cin >> arrival;
      cout << "Enter passenger's reservation no: ";
      cin >> reservationno;
      system("CLS");
    }
  void showinfo() {
    cout << setw(40) << "                   Your E-Ticket is printed below: " << endl;
    int ticketno = randomize2();

    int refno = randomize1();
    cout << "|--------------------------AIRLINE TICKET--------------------------------|" << endl;
    cout << "|Reference No." << refno << endl;
    cout << "|Ticket No." << ticketno << "                                                " << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    cout << "|Resevation No. " << reservationno << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    cout << "|Passenger Information :                                                 |" << endl;
    cout << "|Name :" << firstname << "/" << lastname << endl;
    cout << "|                                                                        |" << endl;
    cout << "|Contact no:" << contactnum << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    cout << "|flight Information :                                                    |" << endl;
    cout << "|03 May 2019                                                             |" << endl;
    cout << "|BOING 777                                                               |" << endl;
    cout << "|------------------------------------------------------------------------|" << endl;
    cout << "|Depart :" << departure << endl;
    cout << "|Arrive :" << arrival << endl;
    cout << "|*BAGGAGE allowed 35 Kilos                                               |" << endl;
    cout << "|*contact Airline to Confirm baggage allowance                           |" << endl;
    cout << "|------------------------------------------------------------------------|" << endl;

    ofstream o1("ticket.txt", ios::app);
    o1 << "|--------------------------AIRLINE TICKET--------------------------------|" << endl <<
      "|Reference No." << refno << endl <<
      "|Ticket No." << ticketno << endl <<
      "|------------------------------------------------------------------------|" << endl <<
      "|Resevation No. " << reservationno << endl <<
      "|------------------------------------------------------------------------|" << endl <<
      "|Passenger Information :                                                 |" << endl <<
      "|Name :" << firstname << "/" << lastname << endl <<
      "|                                                                        |" << endl <<
      "|Contact no:" << contactnum << endl <<
      "|------------------------------------------------------------------------|" << endl <<
      "|flight Information :                                                    |" << endl <<
      "|03 May 2019                                                             |" << endl <<
      "|BOING 777                                                               |" << endl <<
      "|------------------------------------------------------------------------|" << endl <<
      "|Depart :" << departure << endl <<
      "|Arrive :" << arrival << endl <<
      "|*BAGGAGE allowed 35 Kilos                                               |" << endl <<
      "|*contact Airline to Confirm baggage allowance                           |" << endl <<
      "|------------------------------------------------------------------------|" << endl;
  }

};

class local: public flightbooking //class which inherits class flightbooking and it is used to book local flights
{
  protected: int option;
  bool flag;
  int choice;
  int noeconseats;
  int nobusinseats;
  flighttime t;
  public: void receiveinfo() {
    flag = 0;
    do {
      cout << "Enter the Airline in which you want to travel: " << endl;
      cout << "1)PIA" << endl;
      cout << "2)AIR BLUE" << endl;
      cout << "3)SHAHEEN" << endl;
      cout << "4)QATAR AIRWAYS" << endl;
      cout << "5)EMIRATES" << endl;
      cout << "Enter your choice: " << endl;
      cin >> option;
    } while (option <= 0 || option > 5);
    system("CLS");

    switch (option) {
    case 1:
      if (option == 1)
        cout << setw(70) << "\n\n\n                                               WELCOME TO PIA" << endl;
      break;

    case 2:
      if (option == 2)
        cout << setw(70) << "\n\n\n                                               WELCOME TO AIRBLUE" << endl;
      break;

    case 3:
      if (option == 3)
        cout << setw(70) << "\n\n\n                                               WELCOME TO SHAHEEN" << endl;
      break;

    case 4:
      if (option == 4)
        cout << setw(70) << "\n\n\n                                               WELCOME TO QATAR AIRWAYS" << endl;
      break;

    case 5:
      if (option == 5)
        cout << setw(70) << "\n\n\n                                               WELCOME TO EMIRATES" << endl;
      break;

    default:
      if (option == 4)
        cout << setw(70) << "Wrong option entered." << endl;
      cin >> option;
      break;
    }

    cout << "These are the local places available" << endl << endl;
    cin.ignore();
    for (int i = 0; i < max; i++) {
      cout << domestflight[i] << endl;
    }

    flightbooking::receiveinfo();

    for (int x = 0; x < max; x++) {
      if (domestflight[x] == departure) {
        flag = 1;
      }
    }
    if (flag == 1) {
      cout << " Flight available on this route" << endl;
      nobusinseats = 50;
      noeconseats = 200;
      cout << "In which class you want to travel?" << endl;
      cout << setw(60) << "|-----------------------------------|" << endl;
      cout << setw(60) << "|         1) Buisness class         |" << endl;
      cout << setw(60) << "|         2) Economy class          |" << endl;
      cout << setw(60) << "|-----------------------------------|" << endl;
      cout << endl << "Enter your choice: ";
      cin >> choice;

      switch (choice) {
      case 1:

        nobusinseats--;
        if (nobusinseats <= 0) {

          cout << "Sorry! no busiiness class seats are available" << endl;
        } else {

          cout << "Business class seat available" << endl;
        }
        break;

      case 2:

        noeconseats--;

        if (noeconseats <= 0) {

          cout << "Sorry! no economys class seats are available" << endl;
        } else {

          cout << "Economy class seat available" << endl;
        }
        break;

      }
      t.receiveinfo();
      system("CLS");

      flightbooking::showinfo();

      if (choice == 1) {
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|Ticket Information:                                                     |" << endl;
        cout << "|BUISNESS CLASS                                                          |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|------------------------------------------------------------------------|" << endl <<
          "|Ticket Information:                                                     |" << endl <<
          "|BUISNESS CLASS                                                          |" << endl <<
          "|------------------------------------------------------------------------|" << endl;

      }
      if (choice == 2) {
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|Ticket Information:                                                     |" << endl;
        cout << "|Economy CLASS                                                           |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|------------------------------------------------------------------------|" << endl <<
          "|Ticket Information:                                                     |" << endl <<
          "|Economy CLASS                                                           |" << endl <<
          "|------------------------------------------------------------------------|" << endl;

      }
      cout << "Status confirmed for flight" << endl;

      ofstream o1;
      o1.open("ticket.txt", ios::app);
      o1 << "Status confirmed for flight" << endl;

      t.showinfo();

    } else {
      cout << "|------------------------------------------------------------------------|" << endl;
      cout << "|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                  | " << endl;
      cout << "|------------------------------------------------------------------------|" << endl;

    }
  }

};

class international: public flightbooking //class which inherits class flightbooking and it is used to book international flights
{
  protected: int option;
  bool flag;
  int choice;
  int noeconseats;
  int nobusinseats;
  flighttime t;
  public: void receiveinfo() {
    flag = 0;
    do {
      cout << "Enter the Airline in which you want to travel: " << endl;
      cout << "1)PIA" << endl;
      cout << "2)AIR BLUE" << endl;
      cout << "3)SHAHEEN" << endl;
      cout << "4)QATAR AIRWAYS" << endl;
      cout << "5)EMIRATES" << endl;
      cout << "Enter your choice: " << endl;
      cin >> option;
    } while (option <= 0 || option > 5);
    system("CLS");

    switch (option) {
    case 1:
      if (option == 1)
        cout << setw(70) << "\n\n\n                                               WELCOME TO PIA" << endl;
      break;

    case 2:
      if (option == 2)
        cout << setw(70) << "\n\n\n                                               WELCOME TO AIRBLUE" << endl;
      break;

    case 3:
      if (option == 3)
        cout << setw(70) << "\n\n\n                                               WELCOME TO SHAHEEN" << endl;
      break;

    case 4:
      if (option == 4)
        cout << setw(70) << "\n\n\n                                              WELCOME TO QATAR AIRWAYS" << endl;
      break;

    case 5:
      if (option == 5)
        cout << setw(70) << "\n\n\n                                              WELCOME TO EMIRATES" << endl;
      break;

    default:
      if (option == 4)
        cout << setw(70) << "Wrong option entered." << endl;
      cin >> option;
      break;
    }

    cout << "These are the international places available" << endl << endl;
    cin.ignore();
    for (int i = 0; i < max; i++) {
      cout << interflight[i] << endl;
    }

    flightbooking::receiveinfo();

    for (int x = 0; x < max; x++) {
      if (interflight[x] == departure) {
        flag = 1;
      }
    }
    if (flag == 1) {
      cout << "Flight available on this route" << endl;
      nobusinseats = 50;
      noeconseats = 200;
      cout << "In which class you want to travel?" << endl;
      cout << setw(60) << "|-----------------------------------|" << endl;
      cout << setw(60) << "|         1) Buisness class         |" << endl;
      cout << setw(60) << "|         2) Economy class          |" << endl;
      cout << setw(60) << "|-----------------------------------|" << endl;
      cout << endl << "Enter your choice: ";
      cin >> choice;

      switch (choice) {
      case 1:

        nobusinseats--;
        if (nobusinseats <= 0) {

          cout << "Sorry! no busiiness class seats are available" << endl;
        } else {

          cout << "Business class seat available" << endl;
        }
        break;

      case 2:
        noeconseats--;
        if (noeconseats <= 0) {

          cout << "Sorry! no economys class seats are available" << endl;
        } else {

          cout << "Economy class seat available" << endl;
        }
        break;

      }
      t.receiveinfo();
      system("CLS");

      flightbooking::showinfo();

      if (choice == 1) {
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|Ticket Information:                                                     |" << endl;
        cout << "|BUISNESS CLASS                                                          |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|------------------------------------------------------------------------|" << endl <<
          "|Ticket Information:                                                     |" << endl <<
          "|BUISNESS CLASS                                                          |" << endl <<
          "|------------------------------------------------------------------------|" << endl;

      }
      if (choice == 2) {
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "|Ticket Information:                                                     |" << endl;
        cout << "|Economy CLASS                                                           |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;

        ofstream o1;
        o1.open("ticket.txt", ios::app);
        o1 << "|------------------------------------------------------------------------|" << endl <<
          "|Ticket Information:                                                     |" << endl <<
          "|Economy CLASS                                                           |" << endl <<
          "|------------------------------------------------------------------------|" << endl;

      }
      cout << "Status confirmed for flight" << endl;

      ofstream o1;
      o1.open("ticket.txt", ios::app);
      o1 << "Status confirmed for flight" << endl;
      o1.close();
      t.showinfo();

    } else {
      cout << "|------------------------------------------------------------------------|" << endl;
      cout << "|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                  | " << endl;
      cout << "|------------------------------------------------------------------------|" << endl;

    }
  }

};

class mainmenu //class which will be used to display main menu
{
  protected:
    int choice;
  public:
    void receiveinfo() {
      u: cout << "\n\n\n\n\n\n";
      cout << setw(80) << "|-------------------------------------|" << endl;
      cout << setw(80) << "|     AIRLINE RESERVATION SYSTEM      |" << endl;
      cout << setw(80) << "|   Developed by: Umair Ayaz Aslam    |" << endl;
      cout << setw(80) << "|             MAIN MENU               |" << endl;
      cout << setw(80) << "|      1) FOR LOCAL BOOKING           |" << endl;
      cout << setw(80) << "|      2) FOR INTERNATIONAL BOOKING   |" << endl;
      cout << setw(80) << "|      3) TO SEARCH FOR FLIGHTS       |" << endl;
      cout << setw(80) << "|        NOW ENTER YOUR CHOICE:       |" << endl;
      cout << setw(80) << "|-------------------------------------|" << endl;

      cin >> choice;
      system("CLS");
      passengerinfo * p;

      international i;

      local l;

      char goback;

      switch (choice)

      {

      case 1:

        p = & l;

        p -> receiveinfo();

        cout << endl << "To Go To Main Menu Press u or press any other key to exit" << endl;

        cin >> goback;

        system("CLS");

        if (goback == 'u')

        {

          goto u;

        } else

        {

          cout << "\n\n\n";

          cout << setw(40) << "EXIT FROM AIR RESERVATION SYSTEM";

        }

        break;

      case 2:

        p = & i;

        p -> receiveinfo();

        cout << endl << "To Go To Main Menu Press u or press any other key to exit" << endl;

        cin >> goback;

        system("CLS");

        if (goback == 'u')

        {

          goto u;

        } else

        {

          cout << "\n\n\n";

          cout << setw(40) << "EXIT FROM AIR RESERVATION SYSTEM";

        }

        break;

      case 3:

        searchflight s;

        s.searchingflig();

        cout << endl << "To Go To Main Menu Press u or press any other key to exit" << endl;

        cin >> goback;

        system("CLS");

        if (goback == 'u')

        {

          goto u;

        } else

        {

          cout << "\n\n\n";

          cout << setw(40) << "EXIT FROM AIR RESERVATION SYSTEM";

        }
        break;
      }

    }

};

int main() {

  system("color 80"); //it is used to add color to cosole screen
  cout << "                                           WELCOME TO AIRWAYS RESERVATION SYSTEM";
  Sleep(1500); //it is used to add delay to console
  system("CLS");
  class mainmenu m;
  m.receiveinfo();

  return 0;
}
