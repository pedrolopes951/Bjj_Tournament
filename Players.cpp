#include <iostream>
#include <sstream>
#include <fstream>
#include <ios>    //used to get stream size
#include <limits> //used to get numeric limits
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <random>
using std::string;
using std::vector;
class Players 
{
protected:
private:
    string m_Name;
    string m_Belt;
    int m_Age;
    int m_Weight;
public:
    Players(string name, string belt, int age, int weight);
    void setName(string); // Set method
    string getName(); // Get method
    void setBelt(string);
    string getBelt();
    void setAge(int);
    int getAge();
    void setWeight(int);
    int getWeight();
    ~Players();
};
void Players::setName(string name)
{
    m_Name = name;
}
string Players::getName()
{
    return m_Name;
}
void Players::setBelt(string belt)
{
    m_Belt = belt;
}
string Players::getBelt()
{
    return m_Belt;
}
void Players::setAge(int age)
{
    m_Age = age;
}
int Players::getAge()
{
    return m_Age;
}
void Players::setWeight(int weight)
{
    m_Weight = weight;
}
int Players::getWeight()
{
    return m_Weight;
}

Players::Players(string name, string belt, int age, int weight)
{
    m_Name = name;
    m_Age = age;
    m_Weight = weight;
    m_Belt = belt;
}

Players::~Players()
{
}

vector<Players *> entry_of_atheletes(){
    std::ifstream inf {"Tournament.txt"};
    string line;
    string key;
    string value;
    vector<string> name;
    vector<string> belt;
    vector<int> age{};
    vector<int> weight{};
    vector<Players *> players_list;
    // inf return 0 if we reach end of file 
    // If we couldn't open the output file stream for reading
    if (!inf)
    {
        // Print an error and exit
        std::cerr << "Uh oh, Players.txt could not be opened for reading!\n";
    }
    
    while (getline(inf,line))
    {
        if (line.empty() || line[0] == '#')
       {
           // skip blank or comment lines
       }
        else
       {
           std::istringstream ss(line);
           std::string key, value;
           // read first string (key)
           ss >> key;
           // read rest of line (value)
           getline(ss, value);
           if (key== "Name")
            {
                name.push_back(value);
            }
           if (key == "Belt")
            {
                belt.push_back(value);
            }
           if (key== "Age")
            {
                age.push_back(stoi(value));
            }
            if (key == "Weight")
            {
                weight.push_back(stoi(value));
            }       
       }
    }    
    for (int i = 0; i <= name.size()-1; i++)
    {    
        Players *participant = new Players(name[i], belt[i], age[i], weight[i]);
        players_list.push_back(participant);
    }
    
    return players_list;
}

void present_players (vector<Players*> players_list)
{
    std::cout << 
    "This is the list of participant for this tournament : \n" ;
    for (int i = 0; i < players_list.size(); i++)
    {
        std::cout << "Player : " << i+1 << "\n"<< std::endl; ;
        std::cout << "Name : " <<  players_list.at(i)->getName() << "\n" ;
        std::cout << "Belt : " <<  players_list.at(i)->getBelt() << "\n"; 
        std::cout << "Age : " <<  players_list.at(i)->getAge() << "\n" ;
        std::cout << "Weight : " <<  players_list.at(i)->getWeight() << "\n";
        std::cout << "\n" << std::endl;

    }
}