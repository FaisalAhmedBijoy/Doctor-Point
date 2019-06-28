
#include <bits/stdc++.h>
#include "windows.h"
#include <conio.h>
//#include "Design.h"
#include "Doctor.h"
#include "Patient.h"

using namespace std;




void gotoxy (int x,int y)
{
    COORD coord ;
    coord.X=x ;
    coord.Y=y ;
    SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE),coord) ;
}

void FirstPage()
{
    int c ;

    system("cls") ;
    gotoxy(20,4) ;
    cout <<"Are You a Doctor or Patient "<<endl;
    gotoxy(15,8) ;
    cout<<"1.Doctor"<<endl;
    //gotoxy(8,9) ;
   // cout<<"*******"<<endl;
    gotoxy(15,12) ;
    cout<<"2.Patient"<<endl;
    //gotoxy(8,13) ;
    //cout<<"*********"<<endl;
    gotoxy(15,16) ;
    cout<<"Key  : ";
    cin>>c ;
    system("cls") ;
    if (c == 1)
    {
        doctor() ;


    }
    else if (c == 2)
    {
        patient() ;

    }
    else
    {
        gotoxy(8,18) ;
        cout<<"Wrong Keyword ! "<<endl;
        gotoxy(8,20) ;
        cout<<"Enter The choice again "<<endl;


        // delay(3000) ;
        getch() ;
        FirstPage() ;
    }

}


design()
{



  string Email ;
    string Passward ;

    gotoxy (25,5) ;
    cout<<"Doctor Point "<<endl;
    gotoxy(25,6);
    cout<<"************"<<endl;
    gotoxy (15,10) ;
    //cout<<"Faisal Ahmed Bijoy"<<endl;
    cout <<"***  "<<"Enter Email or Phone number "<<endl;
    gotoxy(20,12) ;
    cin>>Email ;
    gotoxy(15,14) ;

    cout<<"***  "<<"Enter Your Passward "<<endl;
    gotoxy(20,16) ;
    cin>>Passward ;
    //cout<<Email<<endl<<Passward<<endl;
    //if ((Email == "Faisal.cse16.kuet@gmail.com") &&(Passward == "0162315500"))
    if ((strcmp(Email.c_str(),"Faisal.cse16.kuet@gmail.com")== 0 )&& (strcmp(Passward.c_str(),"01623155000") ==0 ))
    {


         cout<<"Correct Passward "<<endl ;


        FirstPage () ;

   }
    else
    {
        gotoxy(12,20) ;
        cout<<"Sorry ! Wrong Passward "<<endl;
    }


}
