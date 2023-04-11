#include<iostream>
#include<utility>
using namespace std;
 
class Animal {
 private:
 int age;
 long id;
 bool alive;
 pair <double,double> location;
 public:
 Animal():age(0),id(0),alive(true),location(make_pair(0.0,0.0)){}
 Animal(int age,double x,double y):age(age),id(0),alive(true),location(make_pair(x,y)){}
 virtual void move(double x,double y){
 location.first=x;
 location.second=y;
 }
 virtual void sleep(){
 cout<<"Animal is sleeping"<<endl;
 }
 virtual void eat(){
 cout<<"Animal is eating"<<endl;
 }
 void setAlive(bool a){
 alive=a;
 }
 virtual ~Animal(){}
};
 
class Bird:public Animal{
 public:
 Bird():Animal(){}
 Bird(int age,double x,double y):Animal(age,x,y){}
 void fly(double x,double y){
 move(x,y);
 cout<<"Bird is flying"<<endl;
 }
};
 
class Canine:public Animal{
 public:
 Canine():Animal(){}
 Canine(int age,double x,double y):Animal(age,x,y){}
 void run(double x,double y){
 move(x,y);
 cout<<"Canine is running"<<endl;
 }
};
 
int main(){
 Animal *a=new Animal();
 a->eat();
 a->sleep();
 delete a;
 
 Bird *b=new Bird(2,3.4,5.6);
 b->fly(7.8,9.1);
 b->eat();
 b->sleep();
 delete b;
 
 Canine *c=new Canine(3,4.5,6.7);
 c->run(8.9,1.2);
 c->eat();
 c->sleep();
 delete c;
 return 0; 
}