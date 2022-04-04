#include<iostream>
#include<utility>
#include<queue>
#include "store.h"
// #include "history.h"
using namespace std;

// store items with its price and units value
STORE S_kingfisher(200, 500);
STORE S_budweiser(180, 300);
STORE S_bira91(170, 340);
STORE S_tuborg(160, 240);
STORE S_carlsberg(190, 430);

    // set values in function
    pair<float, int> kingfisher = S_kingfisher.Price_Units();
    pair<float, int> budweiser = S_budweiser.Price_Units();
    pair<float, int> bira91 = S_bira91.Price_Units();
    pair<float, int> tuborg = S_tuborg.Price_Units();
    pair<float, int> carlsberg = S_carlsberg.Price_Units();

// items values
class ITEMS{
private:
  pair<float, int> kingfisher;
  pair<float, int> budweiser;
  pair<float, int> bira91;
  pair<float, int> tuborg;
  pair<float, int> carlsberg;

protected:
public:
  ITEMS(){
    kingfisher = {0.00, 0};
    budweiser = {0.00, 0};
    bira91 = {0.00, 0};
    tuborg = {0.00, 0};
    carlsberg = {0.00, 0};
  }

  ITEMS(pair<float ,int> kingfisher, pair<float, int> budweiser, pair<float, int> bira91, pair<float, int> tuborg, pair<float, int> carlsberg){
    this -> kingfisher = kingfisher;
    this -> budweiser = budweiser;
    this -> bira91 = bira91;
    this -> tuborg = tuborg;
    this -> carlsberg = carlsberg;
  }

  void TEMPLATE(){
    cout << "-*- MANUE TEMPLATE -*-" << endl;

    // Kingfisher
    {
      cout << "\n";
      if(kingfisher.second == 0){
        cout << "Kingfisher is not available Now" << endl;
      }
      else{
        cout << "Kingfisher price is : " << kingfisher.first << endl;
        cout << "Kingfisher available units is : " << kingfisher.second << endl;
      }
    }

    // Budweiser
    {
      cout << "\n";
      if(budweiser.second == 0){
        cout << "Budweiser is not available Now" << endl;
      }
      else{
        cout << "Budweiser price is : " << budweiser.first << endl;
        cout << "Budweiser available units is : " << budweiser.second << endl;
      }
    }

    // Bira91
    {
      cout << "\n";
      if(bira91.second == 0){
        cout << "Bira91 is not available Now" << endl;
      }
      else{
        cout << "Bira91 price is : " << bira91.first << endl;
        cout << "Bira91 available units is : " << bira91.second << endl;
      }
    }

    // Tuborg
    {
      cout << "\n";
      if(tuborg.second == 0){
        cout << "Tuborg is not available Now" << endl;
      }
      else{
        cout << "Tuborg price is : " << tuborg.first << endl;
        cout << "Tuborg available units is : " << tuborg.second << endl;
      }
    }

    // Carlsberg
    {
      cout << "\n";
      if(carlsberg.second == 0){
        cout << "Carlsberg is not available Now" << endl;
      }
      else{
        cout << "Carlsberg price is : " << carlsberg.first << endl;
        cout << "Carlsberg available units is : " << carlsberg.second << endl;
      }
    }
  }
};

// update values
class UPDATE : public STORE{
private:
protected:
public:

  UPDATE(){
    kingfisher = S_kingfisher.Price_Units();
    budweiser = S_budweiser.Price_Units();
    bira91 = S_bira91.Price_Units();
    tuborg = S_tuborg.Price_Units();
    carlsberg = S_carlsberg.Price_Units();
  }
};

// main function
int main(){

  //kingfisher update block
  {
    S_kingfisher.Units(3000);
    S_kingfisher.Price(300);
    S_kingfisher.Discount(20);
    S_kingfisher.Sell(1000);
    UPDATE value;

  }

  // budweiser update block
  {
    S_budweiser.Discount(50);
    S_budweiser.Sell(200);
    UPDATE value;
  }

  // bira91 update block
  {
    S_bira91.Discount(10);
    UPDATE value;
  }

  // tuborg update block
  {
    S_tuborg.Discount(30);
    UPDATE value;
  }

  // carlsberg update block
  {
    S_carlsberg.Discount(40);
    UPDATE value;
  }

  ITEMS t1(kingfisher,budweiser,bira91,tuborg,carlsberg);
  t1.TEMPLATE();

  // S_kingfisher.History();
  S_budweiser.History();
}
