
#include <bits/stdc++.h>
#include "windows.h"
#include "Design.h"
#include "Doctor.h"
#include "Hospital.h"
#include <conio.h>


using namespace std;
//void emergency();
void gotoxy(int x,int y) ;
//void patient() ;
void finish() ;
void FirstPage();

class DISES
{
public :

    string dis;


};
vector<  pair<string,string> >v ;              ///STL Vector, Pair ,iterator
vector<pair<string,string> >::iterator it1 ;
class Emergency
{

    string name ;
    char *mobile;

    //    mobile=new char ;

public:

    void putEmergency() ;
    friend void putdata (Emergency) ;  ///friend
    void friend getdata(void) ;
    Emergency (string a,string b)    /// Constructor
    {
        //cout<<"Cons"<<endl;
        v.push_back(make_pair(a,b)) ;

    }
    Emergency()
    {

    }
};

/*
void putdata (Emergency E)
{
    cout<<endl<<endl;
    cout<<"This are The Emergency Number are You Entered Now ! "<<endl<<endl;
    for (it1=v.begin() ; it1!=v.end(); it1++)
    {
        cout<<"Name : \t"<<it1->first<<"\t Mobile : \t"<<it1->second<<endl;
    }


        gotoxy(10,18) ;
        cout<<"Enter The choice ! "<<endl;
        gotoxy(4,21) ;
        cout<<"1.Back The Doctor Home page "<<endl;
        gotoxy(4,23) ;
        cout<<"2.Back To the Patient Home Page "<<endl;
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
            patient();
        }
        else if (c==3)
        {
            finish() ;
        }




}
*/
emergency()

{

    cout<<"Add or Show Emergency Contact "<<endl;
    cout<<"1. Add Emergency Contact "<<endl;
    cout<<"2. Show Emergency Contact "<<endl;
    int cc ;
    cin>>cc ;
    system("cls") ;
    if (cc== 1)
    {

        Emergency E ;
        int num;
        cout<<"How Many Emergency Contact are you wanted To add "<<endl;
        cin>>num ;
        //system("cls") ;
        cout<<endl;
        cin.clear() ;
        cin.ignore(1000,'\n') ;
        ofstream out ;
        out.open("EMERGENCY NUMBER .txt",ios::app) ;
        for (int i=0 ; i<num; i++)
        {

            string name ;
            cout<<"Enter name     : ";
            getline(cin,name) ;
            out<<"Name      : "<<name<<endl;

            cout<<"Enter Mobile   : ";
            char *mobile ;
            mobile=new char ;         ///Dynamic Memory allocation
            cin>>mobile ;
            out<<"Mobile    : "<<mobile<<endl<<endl<<endl;
            //delete mobile ;
            Emergency (name,mobile) ;  ///constructor


            //  cout<<"Name : "<<name<<endl<<"Mobile : "<<mobile<<endl;
            //  v.push_back(make_pair(name,mobile)) ;
            delete mobile;
            cin.clear() ;
            cin.ignore(1000,'\n') ;
        }
        out.close() ;

        putdata(E) ;


    }
    else if (cc == 2)
    {
        ifstream in ;
        in.open("EMERGENCY NUMBER .txt") ;
        while (in)
        {
            string s;
            getline(in,s) ;
            cout<<s<<endl;
        }


          cout<<endl<<endl;
        // gotoxy(10,18) ;
        cout<<"         Enter The choice ! "<<endl<<endl<<endl;
        //gotoxy(4,21) ;
        cout<<"   1.Back The Doctor Home page "<<endl<<endl;
        //gotoxy(4,23) ;
        cout<<"   2.Back To the  Home Page "<<endl<<endl;
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
            FirstPage() ;
        }


        //break ;
    }
    else
    {
        cout<<"Error !"<<endl;
        //patient() ;
        FirstPage() ;

    }


}
//ofstream out ;
//hospital() ;
class PATIENT : public DISES, public Emergency  //, public HOSPITAL
{
    int p_id ;
    string p_name,p_mobile,p_address,blood ;
public :
    void friend operator >> (istream &input,PATIENT &P)      ///Operator Overloading & friend
    {
        ofstream out ;
        out.open("Patient.txt",ios::app) ;
        gotoxy(10,5) ;
        cout<<"Create a new patient account "<<endl;
        gotoxy(10,6) ;
        cout<<"****************************"<<endl<<endl<<endl<<endl;

        cout<<"Patient ID         : ";
        input >>P.p_id ;
        out<<"Patient ID          : "<<P.p_id<<endl;
        input.clear() ;
        input.ignore (1000,'\n') ;
        cout<<"Patient Name       : ";
        //input >>P.p_name ;
        getline(input,P.p_name) ;
        out<<"Patient Name        : "<<P.p_name<<endl;
        cout<<"Patient Mobile     : ";
        // input>>P.p_mobile ;
        getline(input,P.p_mobile) ;
        out<<"Patient Mobile      : "<<P.p_mobile<<endl;
        cout<<"Patient Address    : ";
        getline(input,P.p_address) ;
        out<<"Patient Address     : "<<P.p_address<<endl;
        cout<<"Patient Diseases : ";
        getline(input,P.dis) ;
        out<<"Patient Diseases    : "<<P.dis<<endl;


        cout<<"Enter Blood Group  : ";
        input>>P.blood ;
        out<<"Patient Blood Group : "<<P.blood<<endl<<endl<<endl;
        out.close() ;
        system("cls") ;


    }
    void friend operator <<(ostream &output,PATIENT P)   ///Operator Overloading & friend
    {
        output<<"Patient ID          : "<<P.p_id<<endl;
        output<<"Patient Name        : "<<P.p_name<<endl;
        output<<"Patient Mobile      : "<<P.p_mobile<<endl;
        output<<"Patient Address     : "<<P.p_address<<endl;
        output<<"Patient Diseases    : "<<P.dis<<endl;
        output<<"Patient Blood Group : "<<P.blood<<endl;

    }



};
void diseases() ;


patient()
{
    PATIENT P ;
    gotoxy(10,5) ;
    cout<<"Patient Information "<<endl ;
    gotoxy(10,6) ;
    cout<<"********************"<<endl;
    gotoxy(5,10) ;
    cout<<"1. Create New Patient Account "<<endl;
    gotoxy(5,12) ;
    cout<<"2. Search Patient Profile  "<<endl;
    gotoxy(5,14) ;
    cout<<"3. Show all Patient Information "<<endl;
    gotoxy(5,16) ;
    cout<<"4. Show  Doctor Location Place "<<endl;
    gotoxy(5,18) ;
    cout<<"5. Add or Show The Diseases name "<<endl;
    gotoxy(5,20) ;
    cout<<"6. Show or Add Emergency Number "<<endl;
    gotoxy(5,22) ;
    cout<<"7. All Hospital Name in Khulna "<<endl;
    gotoxy(5,24) ;
    cout<<"8. Enter The Homepage "<<endl;
    gotoxy(5,26) ;
    cout<<"9. Close The application "<<endl;

    int choose  ;
    gotoxy(10,30) ;

    cout<<"Please ! Enter your Choose  "<<endl;
    gotoxy(5,33) ;
    cout<<"Key  : ";
    cin>>choose ;
    system("cls") ;
    switch (choose)
    {
    case 1:
    {
        cin>>P ;
        cout<<"This is Your Entered Information "<<endl<<endl ;
        cout<<P ;



        gotoxy(10,5) ;
        cout<<"Are You again Enter a new account "<<endl;
        gotoxy(5,10) ;
        cout<<"1. Create a new account again "<<endl;
        gotoxy(5,12) ;
        cout<<"2. Back To The patient Home Page "<<endl;
        gotoxy(5,14) ;
        cout<<"3. Close The Application "<<endl;
        gotoxy(5,17) ;
        int choice  ;
        cout<<"Key  : ";
        cin>>choice ;
        system("cls") ;
        if (choice == 1)
        {
            //D.GetDataDoctor() ;
            cin>>P ;
        }
        else if (choice == 2)
        {
            patient() ;
        }
        else if (choice == 3)
        {
            finish() ;
        }
        else
        {
            cout<<"sorry ! wrong Option "<<endl;
            getch() ;
            patient() ;
        }





        break ;
    }
    case 2:
    {
        system("cls") ;
        int v=0;
        cout<<"Enter The Patient ID "<<endl<<endl;
        string d_id ;
        cin>>d_id ;
        cout<<endl;
        cout<<"This are The Patient Information"<<endl<<endl<<endl ;
        string dummy ;
        ifstream ifs;


        ifs.open("Patient.txt") ;





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

                while(i<6);

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
            cout<<"not found"<<endl;
        }
        ifs.close() ;



        gotoxy(10,18) ;
        cout<<"Enter The choice ! "<<endl;
        gotoxy(4,21) ;
        cout<<"1.Back The Doctor Home page "<<endl;
        gotoxy(4,23) ;
        cout<<"2.Back To the Patient Home Page "<<endl;
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
            patient();
        }
        else if (c==3)
        {
            finish() ;
        }
        else
        {
            cout<<"sorry ! Wrong Option "<<endl;
            getch() ;
            patient() ;
        }




        break ;

    }
    case 3:
    {
        //ifstream in ;
        ifstream in ("Patient.txt") ;
        if (in)
        {
            while (in)
            {
                string s;
                getline(in,s) ;
                cout<<s<<endl;
            }
            in.close() ;

        }
        else
        {
            cout<<"Sorry ! Empty List "<<endl;
        }


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
        gotoxy(10,5) ;

        cout<<"These Location You can find a doctor "<<endl;
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




        int k ;

A:

        ifstream in ;
        gotoxy(5,22) ;
        cout<<"Key  : ";
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
        while(in)
        {
            string s ;
            getline(in,s) ;
            cout<<s<<endl ;
        }

        //show() ;
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
    case 5:
    {
        diseases() ;
        break ;
    }
    case 6:
    {
        emergency() ;
        break ;
    }
    case 7 :
    {
        hospital() ;
        break ;
    }
    case 8:
    {
        FirstPage();
        break ;
    }
    case 9:
    {
        finish() ;
        break ;
    }
    default :
    {
        cout<<"Wrong Option ! try again "<<endl;
        getch() ;
        patient() ;

    }


    }

}

void putdata (Emergency E)
{
    cout<<endl<<endl;
    cout<<"This are The Emergency Number are You Entered Now ! "<<endl<<endl;
    for (it1=v.begin() ; it1!=v.end(); it1++)
    {
        cout<<"Name : \t"<<it1->first<<"\t Mobile : \t"<<it1->second<<endl;
    }


    gotoxy(10,18) ;
    cout<<"Enter The choice ! "<<endl;
    gotoxy(4,21) ;
    cout<<"1.Back The Doctor Home page "<<endl;
    gotoxy(4,23) ;
    cout<<"2.Back To the Patient Home Page "<<endl;
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
        patient();
    }
    else if (c==3)
    {
        finish() ;
    }
    else
    {
        FirstPage() ;
    }




}



