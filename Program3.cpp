//Exp-12

//Program-1
#include<iostream>
#include<string>
usingnamespacestd;

classData{
    stringname;
    introll_no;
    chardept[50];
    intbatch;

    public:
    Data(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll Number: ";
        cin>>roll_no;
        cout<<"Department: ";
        cin>>dept;
        cout<<"Batch: ";
        cin>>batch;
    }
    voiddisplay(){
        cout<<endl<<"DETAILS:"<<endl<<name<<"  "<<roll_no<<"  "<<dept<<"  "<<batch<<endl;
    }
};

intmain(){
    Datad1;
    d1.display();
}
