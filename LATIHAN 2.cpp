#include<stdio.h>
#include<iostream>
using namespace std;

class nilairata{
    private :
    int x,y;
    string grade;

    public :
    void print() {
        cout<<"Grade anda         : ";
    }

    };

main() {

int x,y, nilai;
string grade;

    cout<<"Masukan Nilai       ";cout<<endl;
    cout<<endl;

    cout<<"Nilai UTS          : "; cin>>x;
    cout<<"Nilai UAS          : "; cin>>y;
    cout<<endl;


    nilai = (x*70/100) + (y*30/100);
    cout<<"Nilai Rata-rata    : ";cout<<nilai;
    cout<<endl;


   if (nilai >= 90) {
        grade = "A";
    } else if (nilai >= 70) {
        grade = "B";
    } else if (nilai >= 45) {
        grade = "C";
    } else if (nilai >= 25) {
        grade = "D";
    } else {
        grade = "E";
    }

    cout << "Grade anda         : " << grade  << endl;

    return 0;


    }


