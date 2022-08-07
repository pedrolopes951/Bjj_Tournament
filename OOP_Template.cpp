
#include <iostream>
#include <vector>
using std::string;
using std::vector;
class Bjj
{
protected:
private:
    string Name;
    string Belt;
    int Age;
    int Weight; // In lbs
public:
    vector<string> moves;
    Bjj(string, string, int, int);
    ~Bjj();
    void Introduction_Player();
    vector<string> Make_Move(string);
    bool End_Game(vector<string>);
    void setName(string); // Set method
    string getName();
};


void Bjj::setName(string name){
    Name = name;
}
string Bjj::getName(){
    return Name;
}

void Bjj::Introduction_Player()
{
    std::cout << "Name - " << Name << std::endl;
    std::cout << "Belt - " << Belt << std::endl;
    std::cout << "Age - " << Age << std::endl;
    std::cout << "Weight - " << Weight << std::endl;
    std::cout << "\n"
              << std::endl;
}
vector<string> Bjj::Make_Move(string move)
{
    moves.push_back(move);
    return moves;
}
bool Bjj::End_Game(vector<string> moves)
{
    int size;
    size = moves.size();
    if (size > 10)
    {
        std::cout << " Winner : " << Name << std::endl;
        return false;
    }
    else
    {
        return true;
    }
}
Bjj::Bjj(string name, string belt, int age, int weight) // Constructor
{
    Name = name;
    Belt = belt;
    Age = age;
    Weight = weight;
}

Bjj::~Bjj() // Deconstructor
{
}

int main()
{
    Bjj player1 = Bjj("Pedro", "Blue", 25, 195);
    player1.Introduction_Player();

    Bjj player2 = Bjj("Henrique", "Brown", 25, 185);
    player2.Introduction_Player();
    player1.setName("JT");
    std::cout << player1.getName() << " New Name" << std::endl;
    // bool game = true;
    // while (game)
    // {
    //     // Each player get to push one move to vector
    //     // who get to first to 10 moves wins
    //     string move;
    //     vector<string> save_move;
    //     std ::cin >> move;
    //     std::cout << player1.Name << " make the move : " << move << std::endl;
    //     save_move = player1.Make_Move(move);
    //     game = player1.End_Game(save_move);
    //     string move2;
    //     vector<string> save_move2;
    //     std ::cin >> move2;
    //     std::cout << player2.Name << " make the move : " << move2 << std::endl;
    //     save_move2 = player2.Make_Move(move2);
    //     game = player2.End_Game(save_move2);
    // }

    return 0;
}