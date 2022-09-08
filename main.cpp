/* Goal: Build a Tournament bracket using classes proporties. 
   Requirements:- It read txt file for the characteristic of each athelete
                - Organize the matches by Division (age,weight and belt) 
                - Build a bracket system that displays the bracket at the terminal
                - Ask to disply the Division Bracket

Conditions:
    No more than 6 players for now

Future aplication :
    - Use a postgres database, instead of hard typing every thing
    - Given the winner the braket should update the division bracket and display the new matches, until a final winner is presented


Implement :
    - Implement class tournament to build the tournament
    - Read from input file the data for participants
    - Use template for each entrie 
    - Create Unit testing to test the code 
*/
#include "Tournament_OOP.cpp"

/* Function Declaration- Function prototypes declaring each functino used in program*/
vector<Players *> entry_of_atheletes();
void present_players(vector<Players*>);
int main()
{
    // Vector that stores the participants which go into the tournament
    // Loop to request info about each participant
    vector<Players *> players_list;
    players_list = entry_of_atheletes();
    present_players(players_list);  
    //Create object Tournament
    Tournament ADCC;
    //Method consumes PLayers Vector and organizes based on belt, weight and age 
    ADCC.Organize_Divisions(players_list);
    ADCC.Show_Division();
    // Ask for user to write which division he wants to check up
    ADCC.Show_Division();
    return 0;
}