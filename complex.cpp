using namespace std;
#include<iostream>
class Complex{
	int real,img;
	public:
		Complex(){
			this->real=0;
			this->img=0;
		}
		Complex(int a, int b){
			this->real=a;
			this->img=b;
		}
		void setReal(int a){
			this->real=a;
		}
		void setImg(int b){
			this->img=b;
		}
		int getImg(){
			return this->img;
		}
		int getReal(){
			return this->real;
		}
		void display(){
			cout<<"\nGiven complex number"<<endl;
			cout<<this->real<<"+"<<this->img<<"i"<<endl;
		}
};
int main(){
	Complex c(10,20),c2;
	c.display();
	c2.setReal(30);
	c2.setImg(40);
cout<<"given complex number\n"<<c2.getReal()<<"+"<<c2.getImg()<<"i";
	
}
