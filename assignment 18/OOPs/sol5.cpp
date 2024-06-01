#include<iostream>
#include<string>
class book{
string name;
string author;
int callno;
void display(){
cout <name <” “ <author <” ” <callno <endl;
}
};
int main(){
book b1 = {"Let us C","YPK",101};
b1.display();
return 0;
}