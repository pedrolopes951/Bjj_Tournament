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
vector<Tournament *> entry_of_atheletes();

int main()
{
    // Vector that stores the participants which go into the tournament
    // Loop to request info about each participant
    vector<Tournament *> players;
    players = entry_of_atheletes();
    // std::cout << "test" << std::endl;
    // vector<Tournament *> players; 
    // vector<string> name;
    // vector<string> belt;
    // vector<int> age{};
    // vector<int> weight{};
    // for(auto itr = data.begin(); itr!=data.end(); itr++){
    //    if (itr->first== "Name")
    //    {
    //     name.push_back(itr->second);
    //    }
    //    if (itr->first== "Belt")
    //    {
    //     belt.push_back(itr->second);
    //    }
    //    if (itr->first== "Age")
    //    {
    //     age.push_back(stoi(itr->second));
    //    }
    //    if (itr->first== "weight")
    //    {
    //     weight.push_back(stoi(itr->second));
    //    }
       
    // }

    // while (players.size() < 2)
    // {
    //     std::cout << " Hello, welcome to the tournament please insert the info about each participant \n"
    //               << std::endl;
    //     std::cout << " Please type your Name \n";
    //     std::getline(std::cin, name);
    //     std::cout << " Please type your belt \n";
    //     std::cin >> belt;
    //     std::cout << " Please type your age \n";
    //     std::cin >> age;
    //     std::cout << " Please type your weight in kg \n";
    //     std::cin >> weight;
    //     std::cout << " Thanks!Your application was made \n"
    //               << std::endl;
    //     Tournament *participant = new Tournament(name, belt, age, weight);
    //     players.push_back(participant);
    //     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear buffer before taking new
    // }
    // for (int i = 0; i < players.size(); i++)
    // {
    //     std::cout << players[i]->getName() << " " << std::endl;
    // }
    // std::cout << "Tournament is full" << std::endl;
    
    return 0;
}