
#include <iostream>
#include <vector>
using std::string;
using std::vector;
class AbstarctPlayer
{ // abstract class
  // serve as contract
    virtual void Promotion() = 0;
};
class Bjj : AbstarctPlayer
{
protected:
    string Name; // Makes this property avaible to child classes
private:
    string Belt;
    int Age;
    int Weight; // In lbs
public:
    vector<string> moves;
    Bjj(string Name, string Belt, int Age, int Weight);
    ~Bjj();
    void Introduction_Player();
    vector<string> Make_Move(string);
    bool End_Game(vector<string>);
    void setName(string); // Set method
    string getName();
    void setBelt(string); // Set method
    string getBelt();
    void Promotion()

    {
        if (Belt == "Brown")
        {
            std::cout << Name << "Got Promoted!" << std::endl;
        }
        else
        {
            std::cout << Name << "Not Promoted :(" << std::endl;
        }
    }
    virtual void Work()
    {
        std::cout << Name << " is rolling" << std::endl;
    }
};

void Bjj::setName(string name)
{
    Name = name;
}
string Bjj::getName()
{
    return Name;
}
void Bjj::setBelt(string belt)
{
    if (belt == "Black")
        Belt = "Black";
    if (belt == "Blue")
        Belt = "Blue";
    if (belt == "Purple")
        Belt = "Purple";
    if (belt == "Brown")
        Belt = "Brown";
}
string Bjj::getBelt()
{
    return Belt;
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
class Student : public Bjj // Child Classes are private by default
{
    string FavPosition;

public:
    Student(string Name, string Belt, int Age, int Weight, string FavPosition)
        : Bjj(Name, Belt, Age, Weight)
    {
        FavPosition = FavPosition;
    };
    void Call_Student();
    void Work()
    {
        std::cout << Name << " is rolling" << std::endl;
    }
};
class Master : public Bjj
{
    string Speciality;

public:
    void preparemove()
    {
        std::cout << Name << " is showing" << Speciality << "Move" << std::endl;
    }
    Master(string Name, string Belt, int Age, int Weight, string Speciality) : Bjj(Name, Belt, Age, Weight)
    {
        Speciality = Speciality;
    };
    // void Work()
    // {
    //     std::cout << Name << " is teching" << Speciality << std::endl;
    // }
};
void Student::Call_Student()
{
    std::cout << Name << "favorite position is " << FavPosition << std::endl;
}
int main()
{
    Bjj player1 = Bjj("Pedro ", "Blue", 25, 195);
    player1.Introduction_Player();

    Bjj player2 = Bjj("Henrique", "Brown", 25, 185);
    player2.Introduction_Player();

    // player2.setBelt("Black");
    // std::cout << player2.getName() << " "
    //           << "Promoted to " << player2.getBelt() << std::endl;

    // player1.Promotion();
    // player2.Promotion();

    Student p = Student("Pedro ", "Blue", 25, 195, "Close Guard");
    // p.Call_Student();
    // p.Promotion();
    Master h = Master("Helio ", "Black", 35, 175, "Open Guard");
    // h.preparemove();
    // h.Promotion();

    // p.Work();
    // h.Work();
    // Common use for parent class reference is uses to refer to a child class object;
    Bjj *e1  = &p;
    Bjj *e2 = &h;

    e1->Work();
    e2->Work();


    return 0;
}