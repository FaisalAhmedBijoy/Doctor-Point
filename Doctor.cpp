
#include <bits/stdc++.h>
#include<iomanip>
#include "windows.h"
#include "Design.h"
#include "Patient.h"

#include "Doctor.h"
#include "Hospital.h"
#include <conio.h>

using namespace std;
ifstream in ;
ofstream out ;

vector<string>DIS ;
vector<string>::iterator it ;
void emergency () ;
void gotoxy(int x,int y) ;
//void patient();


//class Emergency ;
class DOCTOR //: public Emergency
{

public :
    int D_id,D_fee ;
    string D_mobile,D_name,D_address,D_expert,D_location,D_college,D_fcps ;
    void GetDataDoctor () ;
    void putEmergency () ;
    DOCTOR()
    {

    }
    DOCTOR(DOCTOR &a)
    {
        D_id=a.D_id;
        D_fee=a.D_fee;
        D_mobile=a.D_mobile;
        D_name=a.D_name;
        D_address=a.D_address;
        D_expert=a.D_expert;
        D_location=a.D_location;
        D_college=a.D_college;
        D_fcps=a.D_fcps;
    }
    //istream& friend operator<<(istream& input;DOCTOR )

};
//void DOCTOR :: putEmergency()
//{
//  emergency () ;
//}

void FirstPage();

void finish ()
{
    gotoxy(10,5) ;
    cout<<"Thanks for using This apps  ! "<<endl;
    gotoxy(5,8) ;
    cout<<"Always try to help the mankind for a better world "<<endl;
    gotoxy(5,15) ;
    cout<<"* if any query about this apps contact with me "<<endl;
    gotoxy(8,18) ;
    cout<<"** Faisal Ahmed"<<endl;
    gotoxy(8,20) ;
    cout<<"** Department : CSE"<<endl;
    gotoxy(8,22) ;
    cout<<"** Roll : 1607048 "<<endl<<endl;
    exit(0) ;
}


void DOCTOR:: GetDataDoctor ()   ///Getter Setter
{
    gotoxy(15,3) ;
    cout<<"Create New account for Doctor "<<endl;
    gotoxy(10,7) ;
    cout<<"Enter The Doctor ID              : ";
    cin>>D_id;

    cin.clear () ;
    cin.ignore(1000,'\n') ;
    gotoxy(10,9) ;
    cout<<"Enter The Doctor Name            : ";
    getline(cin,D_name) ;
    gotoxy(10,11) ;

    cout<<"Enter The Doctor address         : ";
    getline (cin,D_address) ;
    gotoxy(10,13) ;


    cout<<"Enter The Experience subject     : " ;
    getline (cin,D_expert) ;
    gotoxy(10,15) ;

    cout<<"Enter The Doctor Fee (VISIT)     : ";
    cin>>D_fee ;
    cin.clear() ;
    cin.ignore() ;
    gotoxy(10,17) ;
    cout<<"Enter The Mobile Number          : ";
    getline(cin,D_mobile) ;
    gotoxy(10,19) ;

    cout<<"Enter The college name           : ";
    getline(cin,D_college) ;
    gotoxy(10,21) ;
    cout<<"Enter The FCPS Degree institute  : ";
    getline(cin,D_fcps) ;


}



void diseases ()
{
    cout<<"How Many Diseases are you want to add "<<endl;
    int num;
    cin>>num ;
    cout<<"Enter The Diseases Name "<<endl;
    cout<<endl;
    out.open("DISEASES.txt",ios::app) ;
    // out<<"Diseases Name List "<<endl<<endl;
    cin.clear() ;
    cin.ignore(1000,'\n') ;
    for (int i=0 ; i<num; i++)
    {

        string Dis_name ;
        getline(cin,Dis_name) ;
        out<<Dis_name<<endl;
        DIS.push_back(Dis_name) ; ///STL vector

    }
    out.close() ;
    //cout<<"All The Diseases  Name in The DataBase "<<endl;
    sort(DIS.begin(),DIS.end()) ;
    /*
     sort(DIS.begin(), DIS.end(), [](Employee e1, Employee e2)
     {
         return e1.id<e2.id;
     });
    */
    cout<<"These are Diseases name are you Entered now "<<endl;
    for (it=DIS.begin() ; it!=DIS.end() ; it++ )
    {
        cout<<*it<<endl;
    }


    gotoxy(10,12) ;
    cout<<"Are You Enter A diseases Name again "<<endl ;
    gotoxy(5,15) ;
    cout<<"1.Enter a diseases name again "<<endl;
    gotoxy(5,17) ;
    cout<<"2. Show The Diseases Name "<<endl;
    gotoxy(5,19) ;
    cout<<"3.Back To The Doctor main menu "<<endl;
    gotoxy(5,22) ;
    int p;
    cout<<"Key  : ";
    cin>>p;
    system("cls") ;
    if (p==1 )
    {
        diseases() ;


    }
    else if(p==2)

    {


        //for (it=DIS.begin() ; it!=DIS.end() ; it++ )
        //{
        // cout<<*it<<endl;
        // }
        in.open("DISEASES.txt");


        while(in)
        {
            string s ;
            getline(in,s) ;
            cout<<s<<endl ;
        }
        in.close() ;


        gotoxy(10,18) ;
        cout<<"Enter The choice ! "<<endl;
        gotoxy(4,21) ;
        cout<<"1.Back The Doctor Home page "<<endl;
        gotoxy(4,23) ;
        cout<<"2.Main Home Page "<<endl;
        gotoxy(4,25) ;
        cout<<"3.Close The application"<<endl;

        int c;
        gotoxy(8,28) ;
        cout<<"Key  : " ;
        cin>>c ;

        system("cls") ;
        if (c==1)
        {
            doctor() ;

        }
        else if (c==2)
        {
            FirstPage();
        }
        else if (c==3)
        {
            finish() ;
        }








    }
    else if (p==3)
    {
        // cout<<"Wrong Keyword"<<endl;
        doctor() ;
    }
}
void Search_loc(int x)
{
    //string d_id ="1607048";
    int v=0;
    cout<<"Enter The Doctor ID "<<endl<<endl;
    string d_id ;
    cin>>d_id ;
    cout<<"These are the Doctor information you are searched ! "<<endl<<endl;
    string dummy ;
    ifstream ifs;
    if (x==1)
    {
        ifs.open("Dakbangla.txt") ;
    }
    // ifstream ifs("Dakbangla.txt") ;
    else if (x==2)
    {
        ifs.open("Shibbari.txt") ;

    }
    else if (x == 3)
    {
        ifs.open("Daulatpur.txt") ;

    }
    else if (x==4)
    {
        ifs.open("Rupsa.txt") ;
    }
    else if (x==5)
    {
        ifs.open("Fulbari Gate.txt") ;
    }
    while (getline(ifs,dummy))
    {
        int s = dummy.find(d_id);
        if(s!= string::npos)
        {
            int i=0;
            do
            {
                cout<<dummy<<endl;
                getline(ifs,dummy);
                i++;
            }

            while(i<8);

            v=0 ;

            break;
        }
        else
        {
            v++ ;


            // cout<<"not found\n";
        }

    }
    //cout<<"not found\n";
    if (v != 0)
    {
        cout<<"not found\n";
    }
    ifs.close() ;


}
void show ()
{
    while(in)
    {
        string s ;
        getline(in,s) ;
        cout<<s<<endl ;
    }

}



void doctor()
{


    gotoxy(20,5) ;
    cout<<"Doctor Information "<<endl ;
    gotoxy(20,6) ;
    cout<<"******************"<<endl;
    gotoxy(10,10) ;

    cout<<"1. Enter a new Doctor "<<endl;
    gotoxy(10,12) ;
    cout<<"2. See Doctor profile "<<endl;
    gotoxy(10,14) ;
    cout<<"3. See all doctor list in a location "<<endl;
    gotoxy(10,16) ;
    cout<<"4. all doctor information "<<endl;
    gotoxy(10,18) ;
    cout<<"5. Add Diseases name or Show Diseases Name "<<endl;
    gotoxy(10,20) ;
    cout<<"6. Show or Add Emergency Number "<<endl;
    gotoxy(10,22) ;
    cout<<"7. show or Add Hospital contact "<<endl;
    gotoxy(10,24) ;
    cout<<"8. Enter The Home page "<<endl;
    gotoxy(10,26) ;
    cout<<"9. Close the Application "<<endl;
    gotoxy(20,30) ;
    cout<<"Please ! Enter Your choice "<<endl;
    int c;
    gotoxy(10,32);
    cout<<"Key : ";
    cin>>c ;
    // ifstream in ;
    system("cls") ;
    switch (c)
    {
    case 1 :
    {
        DOCTOR D ;
        D.GetDataDoctor () ;
        system("cls") ;
        gotoxy(10,5) ;
        cout<<"Please ! Enter Your Chamber  Location "<<endl<<endl;
        gotoxy(5,10) ;
        cout<<"1. Dakbangla"<<endl;
        gotoxy(5,12) ;
        cout<<"2. Shibbari"<<endl;
        gotoxy(5,14) ;
        cout<<"3. Daulatpur"<<endl;
        gotoxy(5,16) ;
        cout<<"4. Rupsa"<<endl;
        gotoxy(5,18) ;
        cout<<"5. Fulbari Gate"<<endl;

LOC:

        int location ;
        gotoxy(5,21) ;
        cout<<"Key  : " ;
        cin>>location ;
        system("cls") ;

        //ofstream out ;
        if (location == 1)
        {
            out.open("Dakbangla.txt",ios::app);
        }

        else if (location == 2)
        {
            out.open("Shibbari.txt",ios::app);
        }
        else if (location == 3)
        {
            out.open("Daulatpur.txt",ios::app);
        }
        else if (location == 4)
        {
            out.open("Rupsa.txt",ios::app);
        }
        else if (location == 5)
        {
            out.open("Fulbari Gate.txt",ios::app);
        }
        else
        {
            cout<<"Invalid Option "<<endl;
            // getch() ;
            goto LOC ;

        }
        if (out)
        {


            out<<"Doctor ID                    : "<<D.D_id<<endl;
            out<<"Doctor Name                  : "<<D.D_name<<endl;
            out<<"Doctor Address               : "<<D.D_address<<endl;
            out<<"Doctor Expert in             : "<<D.D_expert<<endl;
            out<<"Doctor Fee (VISIT)           : "<<D.D_fee<<endl;
            out<<"Doctor Mobile Number         : "<<D.D_mobile<<endl;
            out<<"Doctor College Name          : "<<D.D_college<<endl;
            out<<"Doctor FCPS Degree Institute : "<<D.D_fcps<<endl<<endl<<endl;

            out.close() ;
        }
        else
        {
            cout<<"Error ! "<<endl;

        }

        gotoxy(10,5) ;
        cout<<"Are You again Enter a new account "<<endl;
        gotoxy(5,10) ;
        cout<<"1. Create a new account again "<<endl;
        gotoxy(5,12) ;
        cout<<"2. Back To The Doctor Home Page "<<endl;
        gotoxy(5,14) ;
        cout<<"3. Close The Application "<<endl;
        gotoxy(5,17) ;
        int choice  ;
        cout<<"Key  : ";
        cin>>choice ;
        system("cls") ;
        if (choice == 1)
        {
            D.GetDataDoctor() ;
        }
        else if (choice == 2)
        {
            doctor() ;
        }
        else
        {
            finish() ;
        }

        break ;

    }
    case 2 :
    {
        gotoxy(10,5) ;
        cout<<"Which Location Doctor are You Want to search "<<endl;
        gotoxy(5,10) ;
        cout<<"1. Dakbangla"<<endl;
        gotoxy(5,12) ;
        cout<<"2. Shibbari"<<endl;
        gotoxy(5,14) ;
        cout<<"3. Daulatpur"<<endl;
        gotoxy(5,16) ;
        cout<<"4. Rupsa"<<endl;
        gotoxy(5,18) ;
        cout<<"5. Fulbari Gate"<<endl;
        int sl ;
        gotoxy(5,22) ;
        cout<<"Key   : ";
        cin>>sl;
        system("cls") ;
        // if (sl==1)

        Search_loc(sl) ;
        gotoxy(10,18) ;
        cout<<"Enter The choice ! "<<endl;
        gotoxy(4,21) ;
        cout<<"1.Back The Doctor Home page "<<endl;
        gotoxy(4,23) ;
        cout<<"2.Main Home Page "<<endl;
        gotoxy(4,25) ;
        cout<<"3.Close The application"<<endl;

        int c;
        gotoxy(8,28) ;
        cout<<"Key  : " ;
        cin>>c ;

        system("cls") ;
        if (c==1)
        {
            doctor() ;

        }
        else if (c==2)
        {
            FirstPage();
        }
        else if (c==3)
        {
            finish() ;
        }
        else
        {
            cout<<"Sorry ! Wrong Option "<<endl;
            getch() ;
            patient() ;
        }



        break ;

    }
    case 3 :
    {
        gotoxy(10,5) ;
        cout <<"Which Location Doctor List are you wanted to show "<<endl<<endl;
        gotoxy(5,10) ;
        cout<<"1. Dakbangla"<<endl;
        gotoxy(5,12) ;
        cout<<"2. Shibbari"<<endl;
        gotoxy(5,14) ;
        cout<<"3. Daulatpur"<<endl;
        gotoxy(5,16) ;
        cout<<"4. Rupsa"<<endl;
        gotoxy(5,18) ;
        cout<<"5. Fulbari Gate"<<endl;
        gotoxy(5,21) ;
        int k ;

A:


        cout<<"Key  : " ;
        cin>> k;
        system("cls") ;

        if (k== 1)
        {
            cout<<"Doctor List of Dakbangla "<<endl<<endl;

            in.open("Dakbangla.txt") ;
        }
        else if (k==2)
        {
            cout<<"Doctor List of Shibbari "<<endl<<endl;

            in.open("Shibbari.txt") ;
        }
        else if (k==3)
        {
            cout<<"Doctor List Of Daulatpur "<<endl<<endl;
            in.open("Daulatpur.txt") ;
        }
        else if (k==4)
        {
            cout<<"Doctor List Of Rupsa "<<endl<<endl;
            in.open("Rupsa.txt") ;
        }
        else if (k==5)
        {
            cout<<"Doctor List of Fulbari Gate "<<endl<<endl;
            in.open("Fulbari Gate.txt") ;
        }
        else
        {
            cout<<"Wrong Option "<<endl ;
            cout<<"Try again ! "<<endl;
            //getch() ;
            goto A ;

        }
        /* while(in)
         {
             string s ;
             getline(in,s) ;
             cout<<s<<endl ;
         }
         */
        show() ;
        in.close() ;
           cout<<endl<<endl;
        // gotoxy(10,18) ;
        cout<<"         Enter The choice ! "<<endl<<endl<<endl;
        //gotoxy(4,21) ;
        cout<<"   1.Back The Doctor Home page "<<endl<<endl;
        //gotoxy(4,23) ;
        cout<<"   2.Back To the Patient Home Page "<<endl<<endl;
        // gotoxy(4,25) ;
        cout<<"   3.Close The application"<<endl<<endl;

        int c;
        //gotoxy(8,28) ;
        cout<<"Key  : " ;
        cin>>c ;

        system("cls") ;
        if (c==1)
        {
            doctor() ;

        }
        else if (c==2)
        {
            patient();
        }
        else if (c==3)
        {
            finish() ;
        }
        else
        {
            cout<<"Sorry ! Wrong Option "<<endl;
            getch() ;
            FirstPage() ;
        }

        break ;

    }
    case 4:
    {
        gotoxy(5,3) ;
        cout<<"All The Doctor of Khulna "<<endl;
        gotoxy(5,4);
        cout<<"*************************"<<endl<<endl;

        cout<<setw(29)<<setfill('*')<<" Doctor List of Dakbangla "<<endl<<endl;  ///Formatted IO

        in.open("Dakbangla.txt") ;
        show() ;

        in.close() ;
        cout<<setw(28)<<setfill('*')<<" Doctor List of Shibbari "<<endl<<endl;
        in.open("Shibbari.txt") ;
        show() ;
        in.close() ;
        cout<<setw(29)<<setfill('*')<<" Doctor List Of Daulatpur "<<endl<<endl;
        in.open("Daulatpur.txt") ;
        show() ;
        in.close() ;
        cout<<setw(25)<<setfill('*')<<" Doctor List Of Rupsa "<<endl<<endl;
        in.open("Rupsa.txt") ;
        show() ;
        in.close() ;
        cout<<setw(32)<<setfill('*')<<" Doctor List of Fulbari Gate "<<endl<<endl;
        in.open("Fulbari Gate.txt") ;
        show() ;
        in.close() ;

          cout<<endl<<endl;
        // gotoxy(10,18) ;
        cout<<"         Enter The choice ! "<<endl<<endl<<endl;
        //gotoxy(4,21) ;
        cout<<"   1.Back The Doctor Home page "<<endl<<endl;
        //gotoxy(4,23) ;
        cout<<"   2.Back To the Patient Home Page "<<endl<<endl;
        // gotoxy(4,25) ;
        cout<<"   3.Close The application"<<endl<<endl;

        int c;
        //gotoxy(8,28) ;
        cout<<"Key  : " ;
        cin>>c ;

        system("cls") ;
        if (c==1)
        {
            doctor() ;

        }
        else if (c==2)
        {
            patient();
        }
        else if (c==3)
        {
            finish() ;
        }
        else
        {
            cout<<"Sorry ! Wrong Option "<<endl;
            getch() ;
            FirstPage() ;
        }


        break ;





    }
    case 5 :
    {
        diseases () ;
        break ;


    }
    case 6 :
    {
        //design() ;
        emergency () ;
        break ;

    }
    case 7 :
    {
        hospital() ;
        break ;
    }
    case 8:
    {
        design() ;
        break ;

    }
    case 9:
    {
        //cout<<"Thanks ! "<<endl;
        // exit(0) ;
        finish() ;
        break ;

    }
    default:

    {
        cout<<"Sorry !  Wrong Option "<<endl;
        cout<<"Try again "<<endl;

        doctor() ;

    }

    }



}



