 #include <iostream>
 #include <fstream>
 #include <limits>
 using namespace std ;

 class bookingrecords{
    
    public:
    int bookingID ;
    string passengername ;
    string destination ;
    int seatnumber ;

    void passengerdetail(){
         
      cout<<"enter passenger details:"<<endl ;
        cout<<"bookingID: " ;
        cin>>bookingID ;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');


       cout<<"passengername: ";
       getline(cin,passengername) ;

         cout<<"destination: ";
       getline(cin,destination) ;

         cout<<"seatnumber: ";
         cin>>seatnumber ;
         cin.ignore(numeric_limits<streamsize>::max(), '\n');

      
    }

    void writetofile(){

          fstream mybookingfile("booking.txt",ios::out | ios::app) ; 
   if (mybookingfile.is_open())
   {
    mybookingfile<<"bookingID: "<<bookingID<<" "<<"passengername: "<<passengername<<" "<<"destination: "<<destination<<" "<<"seatnumber: "<<seatnumber<<endl ;
   }
   else
   {
    cout<<"failed to open file."<<endl ;
   }

    }
 } ;

 int main(){
    bookingrecords p1;
    p1.passengerdetail() ;
    p1.writetofile() ;
    cout<<"write to file successfully." ;

 } 