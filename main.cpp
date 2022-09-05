/* Problem: Build a Tournament bracket using classes proporties. It should ask the user to input the characteristic of each athelete, organize the
matches by Division (age,weight and belt) and build a bracket system that displays the bracket at the terminal and ask to display the Division.

Conditions:
    No more than 6 players for now

Future aplication :
    - Search data from file 
    - Use a postgres database, instead of hard typing every thing
    - Given the winner the braket should update the division bracket and display the new matches, until a final winner is presented


Implement :
    Implement class tournament to build the tournament
    Read from input file the data for participants
    Use template for each entrie 
    Create Unit testing to make sure 
*/
#include "Tournament_OOP.cpp"

/* Function Declaration- Function prototypes declaring each functino used in program*/
vector<Players *> entry_of_atheletes();
void present_playes(vector<Players*>);
int main()
{
    // Vector that stores the participants which go into the tournament
    // Loop to request info about each participant
    vector<Players *> players_list;
    players_list = entry_of_atheletes();
    present_players(players_list);  
    return 0;
}