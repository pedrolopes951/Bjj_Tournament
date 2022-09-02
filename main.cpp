
#include "Tournament_OOP.cpp"

int main()
{
    vector<Tournament *> players; // Vector that stores the participants which go into the tournament
    // Loop to request info about each participant
    string name;
    string belt;
    int age{};
    int weight{};
    while (players.size() < 2)
    {
        std::cout << " Hello, welcome to the tournament please insert the info about each participant \n"
                  << std::endl;
        std::cout << " Please type your Name \n";
        std::getline(std::cin, name);
        std::cout << " Please type your belt \n";
        std::cin >> belt;
        std::cout << " Please type your age \n";
        std::cin >> age;
        std::cout << " Please type your weight in kg \n";
        std::cin >> weight;
        std::cout << " Thanks!Your application was made \n"
                  << std::endl;
        Tournament *participant = new Tournament(name, belt, age, weight);
        players.push_back(participant);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear buffer before taking new
    }
    for (int i = 0; i < players.size(); i++)
    {
        std::cout << players[i]->getName() << " " << std::endl;
    }
    std::cout << "Tournament is full" << std::endl;

    return 0;
}