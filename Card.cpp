/*---------------------------------------------------------*/
/* Card class implementation                               */
/* filename: Card.cpp                                      */
#include "Card.h" //Required for Card
#include<cctype> //Required for toupper()
#include<string> //Required for string
#include<iostream> //require for ostream
using namespace std;
//Constructors.
Card::Card():rank(2), suit('S')
{}
Card::Card(char ch, int i): rank(i)
{
  suit=toupper(ch);
}
//Accessor Methods
int Card::getRank() const
{
  return rank;
}
char Card::getSuit() const
{
  return suit;
}
//Formatted display method
void Card::displayCard(ostream& out) const
{
  string suitString;
  //Establish suit string
  //Constructors and mutators guarantee uppercase suit
  switch(suit){
  case 'S':
    suitString = "Spades";
    break;
  case 'H':
    suitString = "Hearts";
    break;
  case 'D':
    suitString = "Diamonds";
    break;
  case 'C':
    suitString = "Clubs";
    break;
  default:
    suitString = "Invalid Suit";
  }//end switch suit
  if(rank >= 2 && rank < 11)
  { //output the rank and suit string
    out << rank << " of " << suitString;
  } //end if
  else
  { //Establish rank string(Ace, King, Queen, or Jack)
    switch(rank)
    {
      case 11:
        out << "JACK of " << suitString;
      break;
      case 12:
        out << "QUEEN of " << suitString;
      break;
      case 13:
        out << "KING of " << suitString;
      break;
      case 14:
        out << "ACE of " << suitString;
      break;
    }//end switch rank
  }//end else
  return;
}//end Display
/*---------------------------------------------------------*/
