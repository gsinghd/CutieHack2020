#include <iostream>
using namespace std;
//int hp =main.hp; 
string input;

int alleyEncounter() {
    cout << "You have decided to take a short cut to reduce the delivery time..."<< endl;
    cout << "THE SKETCHY ALLEY WAY" << endl;
    cout << "In the alley, you are faced with a thief and are forced to make a life or death decision..." << endl;
    cout << "Do you:" << endl;
    cout << " 1. Face the thief head-on in a fight!" << endl;
    cout << " 2. Attempt to run away!" << endl;
    cout << " 3. Surrender your wallet and try to leave." << endl;

    cin >> input;

    

    if (input == "1")
    {
      Combat obj;
      if (obj.initializeCombat() == 1)
      {
        cout << "You beat him!! Move on! " << endl;
        str++;
      }
      else{
         return 0;
      }
      
    }
    else if (input == "2")
    {
      //cout << /*something snarky idk*/;
      int chance = rand() % 10 + 1;
      if (chance <= 3)
      {
        cout << "You weren't fast enough, you got caught! " << endl;
        Combat obj;
        if (obj.initializeCombat() == 1)
      {
        cout << "You beat him!! Move on! " << endl;
      
      }
      else{
         return 0;
      }
      }
      else
      {
        cout << "You got away! " << endl;
        dex++;
      }
    }
    else if (input == "3")
    {
      
      int chance = rand() % 10 + 1;
      if (chance <= 3)
      {
        cout << "He still wants to fight you! " << endl;
        Combat obj;
        if (obj.initializeCombat() == 1)
        {
        cout << "You beat him and got your wallet back!";
        }
        else
        {
          return 0;
        }
      }
      else
      {
        cout << "You got away safetly!" << endl;
        wis++;
      }
      }}

  int hitByCar(){
    int chance = rand() % 10 + 1;
    cout << "Whew... that was a close one! But wait..." << endl;
    cout << " THERE IS A CAR SPEEDING IN YOUR DIRECTION!!!"<< endl;
    cout << endl;
    cout << "Do you..."<< endl;
    cout << " 1. Attempt to dodge the car!"<< endl;
    cout << "2. Take the hit!" << endl;
    if (input == "1")
    {
      if (chance <= 5)
      {
        cout << "You barely dodged it!" << endl;
        dex++;
      }
      else
      {
        hp = hp/2;
        cout << "Ouch, you survived but that'll leave a mark, you lose half your health" << endl;
      }
    }
    else if (input == "2")
    {
      if (chance <= 5)
      {
        cout << "Brave but you are severelly hurt";
        hp = hp/3;
      }
      else
      {
        return 0;
      }
    }
  }

int lost() {
  cout << "Uh oh... " << endl;
  cout << "Along the way, you have lost your sense of direction..." << endl;
  cout << "You see a stranger and want to ask for directions..." << endl; 
  cout << "but there is a possibility that they could have coronavirus :O" << endl;
  cout << endl;
  cout << "Do you.." <<endl;
  cout << "1. Risk getting covid and ask them" <<endl;
  cout << "2. Risk wandering around to get to your destination"<< endl;
cin >> input;


if (input== "1")
{
  int chance = rand() % 10 + 1;
  if (chance <=5)
  {
    cout << "You catch the coronavirus and become sick" << endl;
    hp =hp-5;
    dex = dex-5;
  }
  else
  {
    cout << "You find your way back to where you were going" << endl;
    wis = wis +10;
  }
}
else
{
  int chance = rand() % 10 + 1;
  if (chance <=5)
  {
    cout << "You eventually make your way back but the food goes cold" << endl;
    wis = wis-5;
  }
  else
  {
    cout << "You found your way!" << endl;
    wis = wis +5;
  }
  
  
}

  
  
}





}



    







/*
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};
*/