#include <iostream.h>
#include <fstream.h>
#include <string.h>
void st(){
ofstream stu;
ofstream dec;
   stu.open("fll",std::ios::app);
	dec.open("pmt.txt",std::ios::app);
  if(stu.is_open()){
      string name,nu;
      int sec,da;
      getline(cin,name);
   cout << "اسم الموظف: ";getline(cin,name);	
  	 stu<< "الاسم الموظف:"<<name<<endl;
   cout << "رقم الموظف:"; getline(cin,nu);	
       stu<< "رقم الموظف:"<<nu<<endl;
	cout << "راتب الموظف:";cin>>sec;
       stu<< "راتب الموظف:"<<sec<<endl;	
    cout << "تاريخ دخول الموظف:";cin>>da;	
       stu<< "   تاريخ دخول الموظف:"<<da<<endl;
   //   dec<<da<<endl;
      dec<<sec<<endl;
      cout<<"تمت اضافه الموظف\n"<<endl;
       }stu.close();
         dec.close();
}


void stud(int x) {
    //ملف قراءة الطلاب
    ifstream fii("fll"); // فتح ملف  للقراءة
       if (fii.is_open()) {
              string line; int x=4,m=0;
              cout << "بيانات الموظفين:" << endl;
              while (getline(fii, line)) {
              m+=1;
              cout<<"  "<<line << endl;
              if(m==x){cout<<endl;   x+=4;}
                  }       } 
 else {cout << "حدث خطأ في فتح الملف" <<endl;}
         cout<<endl;
         //مجموع حسابات الموظفين
        ifstream fik("pmt.txt"); // فتح ملف  للقراءة
  if (fik.is_open()) {
         int p=0,line;       
         while (fik>>line) {
         //cout<< line << endl;
         p+=line;
 }  cout <<"مجموع الرواتب::" <<p<< endl;
    cout<<"-                     -"<<endl;}
 else {cout <<"حدث خطأ في فتح الملف" <<endl;
          }  fik.close();
         fii.close(); 
         }
	
	
int main(){int x=0,m;
ham:
   cout<<endl;
   cout<< "مرحبآ بك في مؤسسة اصيل سوفت\n"<<endl;
    cout << "---اضافة موظف---1\n";
    cout << "----عرض الموظفين----2\n";
      cin >> m;
switch (m) {
     case 1:{st();++x;    
        cout<<"للرجوع للصفحه الرئيسيه--1"<<endl;         cout<<"للخروج من البرنامج --2"<<endl;
                       int mm;cin>>mm;
                               if(mm==1)goto ham;
                                       break;                }
    case 2:{stud(x);
        cout<<"للرجوع للصفحه الرئيسيه--1"<<endl;                  cout<<"للخروج من البرنامج --2"<<endl;
                       int mm;cin>>mm;
                               if(mm==1)goto ham;          	                                             break;}
          }   
}