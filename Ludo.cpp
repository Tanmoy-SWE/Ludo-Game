/***************************************************************
CSCI 240         Program 8     Spring 2021

Test the Die class
***************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

//**********   Put the Die class definition after this line   **********

class Die{
    static const int NUM_SIDES;
    public:
      int dice;
      Die();
      int getSide();
      void roll();

};
void roll();
const int Die::NUM_SIDES = 6;


int main()
{
//seed the random number generator
//Note: this must be done BEFORE creating any Die class objects
srand(9);


//Create a Die class object and display the side that is currently up
Die die1;
int range;
cout << "How many times you want to catch a fish? ";
cin >> range;

int pts = 0;
//Roll the die 10 times to test the roll and getSide methods

for( int cnt = 1; cnt <= range; cnt++ )
  {
  die1.roll();


  cout << "Roll " << cnt << ":" << endl;

  switch(die1.getSide()){
     case 1 :

       cout <<    " -----\n";
       cout <<   "|     |\n";
       cout <<   "|  O  |\n";
       cout <<   "|     |\n";
       cout <<    " -----\n";
          cout << "You caught a big fish! 20 points" << endl;
          pts += 20;
          break;
     case 2 :
       cout <<    " -----\n";
       cout <<   "|O    |\n";
       cout <<   "|     |\n";
       cout <<   "|    O|\n";
       cout <<    " -----\n";
          cout << "You caught a old shoe! -10 points" << endl;
          pts -= 10;
          break;
     case 3 :
       cout <<    " -----\n";
       cout <<   "|O    |\n";
       cout <<   "|  O  |\n";
       cout <<   "|    O|\n";
       cout <<    " -----\n";
          cout << "You caught a goldfish! 5 points" << endl;
          pts += 5;
          break;
     case 4 :
       cout <<    " -----\n";
       cout <<   "|O   O|\n";
       cout <<   "|     |\n";
       cout <<   "|O   O|\n";
       cout <<    " -----\n";
          cout << "You caught a fish! 10 points" << endl;
          pts += 10;
          break;
     case 5 :
       cout <<    " -----\n";
       cout <<   "|O   O|\n";
       cout <<   "|  O  |\n";
       cout <<   "|O   O|\n";
       cout <<    " -----\n";
          cout << "You caught a toilet seat! -20 points" << endl;
          pts -= 20;
          break;
     case 6 :
       cout <<    " -----\n";
       cout <<   "|O O O|\n";
       cout <<   "|O O O|\n";
       cout <<   "|O O O|\n";
       cout <<    " -----\n";
          cout << "You caught a shark! 40 points" << endl;
          pts += 40;
          break;
       }
  }

  cout << "\n\n";
  cout << "Your final score is " << pts << " points." << endl;
return 0;
}

//**********   Code the Die class constructor and methods after this line   **********

Die::Die(){
    roll();
}

void Die::roll(){
   dice = (rand()%NUM_SIDES)+1;
}


int Die::getSide(){
    return dice;
}
