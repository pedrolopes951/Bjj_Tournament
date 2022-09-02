#include <iostream>
#include <ios>    //used to get stream size
#include <limits> //used to get numeric limits
#include <vector>
#include <string>
using std::string;
using std::vector;
/* Problem: Build a Tournament bracket using classes proporties. It should ask the user to input the characteristic of each athelete, organize the
matches by Division (age,weight and belt) and build a bracket system that displays the bracket at the terminal and ask to display the Division.

Conditions:
    No more than 6 players for now

Future aplication :
    - Search data from file first then maybe use a postgres database, instead of hard typing every thing
    - Given the winner the braket should update the division bracket and display the new matches, until a final winner is presented


*/

// Implement class tournament to build the tournament
// Ask for input of participants on constructor class
// It should ask for input from client of FirstName, Last Name, Age, Belt and Weight e.g = "PEDRO, LOPES, 25, blue, 88"
// When it is done client should write "end" and there should be no more objets of this class created

class Tournament
{
protected:
private:
    string m_Name;
    string m_Belt;
    int m_Age;
    int m_Weight;
public:
    Tournament(string name, string belt, int age, int weight);
    void setName(string); // Set method
    string getName(); // Get method
    void setBelt(string);
    string getBelt();
    void setAge(int);
    int geAge();
    void setWeight(int);
    int getWeight();
    void entry_of_atheletes(vector<Tournament*>); // Method to ask for atheltes info
    ~Tournament();
};
void Tournament::setName(string name)
{
    m_Name = name;
}
string Tournament::getName()
{
    return m_Name;
}
Tournament::Tournament(string name, string belt, int age, int weight)
{
    m_Name = name;
    m_Age = age;
    m_Weight = weight;
    m_Belt = belt;
}

Tournament::~Tournament()
{
}

