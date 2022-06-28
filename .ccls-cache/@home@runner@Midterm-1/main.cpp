#include <iostream>

using namespace std;

class Money{
  private:
    long double mny;
  public:
    Money(){}
    Money(char s[]){
      mny = mstold(s);
    }
    long double mstold(string s); 
    string ldtoms(long double mney);
    void madd(Money m1, Money m2);
    void getmoney();
    void putmoney();
};

long double Money::mstold(string s){
  long double convet = stold(s);
  return convet;
}


string Money::ldtoms(long double mney){
  string mony = to_string(mney);
  return mony;
}

void Money::getmoney(){
   string new_money;
  cout<<"Insert money : "<<endl;
  cin>>new_money;
  mny = mstold(new_money);
}

void Money::putmoney(){
  cout<<"Money in string : "<<endl;
  cout<<ldtoms(mny)<<endl;
}

void Money::madd(Money m1, Money m2){
  mny = m1.mny + m2.mny;
}

int main(){
  int op;
  do{
  Money m , m2;
  Money res;
  cout<< "Enter money (in string) : "<<endl;
  m.getmoney();
  cout<< "Enter second quantity of money (in string) : "<<endl;
  m2.getmoney();
  res.madd(m,m2);
  m.putmoney();
  m2.putmoney();
  cout<<"The result of the sum is (long double): "<<endl;
  res.putmoney();

    
   
    cout<<"If you want to continue enter 1 : "<<endl;
    cin>>op;
    }while(op == 1);

  cout<<"Program finished!";
  


  
}