#include <iostream>
#include <string>
using namespace std;

class Person
{
	public:
		string Name;
  		string City;
  		int age;

  //setters
  Person()
  {
  	Name = "ABC"; 
  	City = "Pune"; 
  	age=10;
  }
 Person(string s1,string s2, int a)
  {
  	Name = s1; 
  	City = s2; 
  	age=a;
  }
  void setName(string s)
  {
    Name = s;
  }
  
  void setage(int h)
  {
    age = h;
  }

  void setCity(string s1)
  {
    City = s1;
  }

  //getters
  
  string getName()
  {
    return Name;
  }
  int getage()
  {
    return age;
  }
  string getCity()
  {
    return City;
  }
};

int main()
{
  Person Person1("XYZ","Mumbai",15);
  cout<<"The info is : " <<Person1.Name <<"-" <<Person1.City <<"-" <<Person1.age <<endl;
  Person Person;
  cout<<"The info is : " <<Person.Name <<"-" <<Person.City <<"-" <<Person.age <<endl;
  // setters
 Person.setage(18);
 Person.setName("MNO");
 Person.setCity("Delhi");
  // getters
  cout<<"The info is : " << Person.getName() <<"-" << Person.getCity() <<"-" <<Person.getage() <<endl;
  return 0;
}

