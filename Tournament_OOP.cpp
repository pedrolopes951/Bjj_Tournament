#include <iostream>
#include <sstream>
#include <fstream>
#include <ios>    //used to get stream size
#include <limits> //used to get numeric limits
#include <vector>
#include <string>
#include <map>
using std::string;
using std::vector;

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


vector<Tournament *> entry_of_atheletes(){
    std::ifstream inf {"Tournament.txt"};
    string line;
    string key;
    string value;
    vector<string> name;
    vector<string> belt;
    vector<int> age{};
    vector<int> weight{};
    vector<Tournament *> players;
    // inf return 0 if we reach end of file 
    // If we couldn't open the output file stream for reading
    if (!inf)
    {
        // Print an error and exit
        std::cerr << "Uh oh, Tournament.txt could not be opened for reading!\n";
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
        Tournament *participant = new Tournament(name[i], belt[i], age[i], weight[i]);
        players.push_back(participant);
    }
    for (int i = 0; i < players.size(); i++)
    {
        std::cout << players[i]->getName() << " " << std::endl;
    }
    return players;
}

