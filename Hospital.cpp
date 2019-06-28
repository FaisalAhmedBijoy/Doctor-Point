#include<bits/stdc++.h>
#include "windows.h"
#include <conio.h>
using namespace std;
void gotoxy(int,int y) ;
void doctor() ;
void patient() ;
void finish();
void FirstPage() ;

class HOSPITAL
{
    char *ID ;
    string name ;
    string address ;
    char *mobile ;
public :

    void GetHospital () ;
    void friend showHosppital () ;
    HOSPITAL()
    {

    }
    HOSPITAL (string a,string b,string c,string  d)  ///Constructor
    {
        ofstream out ("HOSPITAL CONTACT.txt",ios::app) ;
        out<<"Hospital ID         : "<<a<<endl;
        out<<"Hospital Name       : "<<b<<endl;
        out<<"Hospital Address    : "<<c<<endl;
        out<<"Hospital Mobile     : "<<d<<endl<<endl<<endl;
        out.close() ;
    }
};
void showHospital (HOSPITAL H)
{
    ifstream in("HOSPITAL CONTACT.txt") ;
    if (in)
    {

        while (in)
        {
            string s ;
            getline(in,s) ;
            cout<<s<<endl;
        }
    }
    else
    {
        cout<<"Sorry ! The List is Empty "<<endl;
    }

}

hospital()
{
    HOSPITAL H ;
    //H.GetHospital () ;
    cout<<"Add or Show Hospital Contact "<<endl<<endl;
    cout<<"1. Add Hospital Contact "<<endl<<endl;
    cout<<"2. Show Hospital Contact "<<endl<<endl;
    int h ;
    cin>> h;
    system("cls") ;
    if (h==1)
    {
        // Emergency E ;
        // HOSPITAL H
        int num;
        cout<<"How Many Hospital Contact are you wanted To add "<<endl;
        cin>>num ;
        // system("cls") ;
        cout<<endl;
        cin.clear() ;
        cin.ignore(1000,'\n') ;
        ofstream out ;
        out.open("HOSPITAL CONTACT.txt",ios::app) ;
        for (int i=0 ; i<num; i++)
        {
            char  *ID ;
            cout<<"Enter Hospital ID    : ";
            ID=new char ;                ///Dynamic memory allocation
            cin >> ID ;
            cin.clear() ;
            cin.ignore(1000,'\n') ;

            string name ;

            cout<<"Enter name           : ";
            getline(cin,name) ;
            //out<<"Name      : "<<name<<endl;
            string address ;
            cout<<"Enter Address        : ";
            getline(cin,address)  ;

            cout<<"Enter Mobile         : ";
            char *mobile ;
            mobile=new char ;          ///Dynamic Memory allocation
            cin>>mobile ;
            system("cls") ;
            //out<<"Mobile    : "<<mobile<<endl<<endl<<endl;
            //delete mobile ;
            HOSPITAL (ID,name,address,mobile) ; /// Constructor


            cout<<"These are The Hospital Information are you Entered Now "<<endl<<endl;
            cout<<"Hospital ID          : "<<ID<<endl;
            cout<<"Hospital  Name       : "<<name<<endl;
            cout<<"Hospital Address     : "<<address<<endl;
            cout<<"Mobile               : "<<mobile<<endl;
            //  v.push_back(make_pair(name,mobile)) ;
            // delete mobile;
            delete ID ;
            delete mobile ;
            cin.clear() ;
            cin.ignore(1000,'\n') ;



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


    }
    else if (h==2)
    {
        showHospital(H) ;


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




    }
    else
    {
        cout<<"Sorry ! wrong keyword "<<endl;
    }
}

