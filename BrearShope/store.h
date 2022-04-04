#include<iostream>
#include<utility>
#include<vector>
using namespace std;

class STORE{
private:
  int units = 0;
  float real_price = 0.00;
  float discount = 0.00;
  vector<pair<float, int>> history;

protected:

public:
  STORE(){
    units = 0;
    real_price = 0.00;
    discount = 0.00;
  }

  STORE(float real_price,int units){
    this -> real_price = real_price;
    this -> units = units;
    discount = 0.00;
  }

  void Price(float real_price){
      this -> real_price = real_price;
  }

  void Units(int units){
    this -> units += units;
    History(PriceIs(), units);
  }

  void Discount(float discount){
    this -> discount = discount;
  }

  void Sell(int units){
    this -> units -= units;
    History(PriceIs(), -units);
  }

  float PriceIs(){
    float price = real_price - (real_price * (discount/100));
    return price;
  }

  int UnitsIs(){
    return units;
  }

  pair<float, int> Price_Units(){
    return {PriceIs(), UnitsIs()};
  }

  void History(float x, int y){
    history.push_back({x, y});
  }

  void History(){
    int len = history.size();
    cout << endl;
    for(int i = len -  1; i >= 0; i --){
      if(history[i].second > 0){
        cout << "BUY PRODUCT : " << history[i].first << " PRICE  " << history[i].second << " UNITS " << endl;
      }
      else{
        cout << "SELL PRODUCT : " << history[i].first << " PRICE  " << - history[i].second << " UNITS " << endl;
      }
    }
  }

  void display(){
    cout << units << real_price << discount << endl;
  }
};
