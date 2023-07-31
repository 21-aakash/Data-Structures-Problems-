   #include<bits/stdc++.h>
   using  namespace std ; 
 
 class student 
 {
  int age;
  char * name;

  public:

/*
  student ( int age , char * name )
  { 
       this->age=age;
       this->name=name; //shallow copy 


  }
  */
  student ( int age , char * name )
  { 
       this->age=age;
       this->name=new char[strlen(name)+1]; //deep cop
       strcpy(this->name , name  );

  }

student ( student const & s)
{ 
      this->age=s.age;
   // shallow copy    this->name =s.name ;

     this->name=new char [strlen(s.name)+1]  ;
     strcpy(this->name, s.name);

     


}

 void dis()
 {
    cout <<name <<"     "<<age <<endl;
 }

 };

 
 
 
   int main() 
{
     char name[]= " Aakash ";

     student s1(20, name );
     s1.dis();

     name[2]='2';
     student s2(40, name );
     s2.dis();

     s1.dis();

student s3(s2); //inbuilt copy constructor 
s3.dis();

 
   return 0;
    }