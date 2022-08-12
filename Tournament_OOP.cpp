#include <iostream>


/* Problem: Build a Tournament bracket using classes proporties. It should be ask from the user to input the characteristic of each athelete, organize the
matches by Division (age,weight and belt) and build a bracket system that displays the bracket at the terminal and ask to display the Division.

Future aplication :
    Given the winner the braket should update the division bracket and display the new matches, until a final winner is presented
*/

// Implement class tournament to build the tournament
// Implement class child of tournament athelete which takes the info from each athelete
// Ask for input of participants on constructor class
    // It should ask for input from client of FirstName, Last Name, Age, Belt and Weight e.g = "PEDRO, LOPES, 25, blue, 88"
    // When it is done client should write "end" and there should be no more objets of this class created

class Tournament
{
protected :

private:
    /* data */
public:
    Tournament(/* args */);
    ~Tournament();
};

Tournament::Tournament(/* args */)
{
}

Tournament::~Tournament()
{
}

class Athlete: public Tournament
{
protected:

private:

public:
    Athlete(/* args */);
    ~Athlete();
};

Athlete::Athlete(/* args */)
{
}

Athlete::~Athlete()
{
}

int main (){
    return 0;
}