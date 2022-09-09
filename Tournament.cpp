#include "Players.cpp"
class Players;
class Tournament;

class Tournament 
{
private:
  std::multimap<string, string> Adult_White;
  std::multimap<string, string> Adult_Blue;
  std::multimap<string, string> Adult_Purple;
  std::multimap<string, string> Adult_Brown;
  std::multimap<string, string> Adult_Black;
  std::multimap<string, string> Master_White;
  std::multimap<string, string> Master_Blue;
  std::multimap<string, string> Master_Purple;
  std::multimap<string, string> Master_Brown;
  std::multimap<string, string> Master_Black;

public:
    Tournament(/* args */);
    ~Tournament();
    void Organize_Divisions(vector<Players*>);
    void Show_Division();
};
void Tournament::Organize_Divisions(vector<Players*> players_list)
{
        // Iterate over all the players vector
            // For each iteration see info of players and insert him on the correct struct
        for (auto &it : players_list )
        {
            if (it->getBelt().find("White") != string::npos )
            {
                if (it->getAge() >= 18 && it->getAge() <= 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Adult_White.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Adult_White.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Adult_White.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Adult_White.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
                if ( it->getAge() > 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Master_White.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Master_White.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Master_White.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Master_White.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
            }
            if (it->getBelt().find("Blue") != string::npos)
            {
                if (it->getAge() >= 18 && it->getAge() <= 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Adult_Blue.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Adult_Blue.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Adult_Blue.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Adult_Blue.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
                if ( it->getAge() > 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Master_Blue.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Master_Blue.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Master_Blue.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Master_Blue.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
            }
            if (it->getBelt().find("Purple") != string::npos)
            {
                if (it->getAge() >= 18 && it->getAge() <= 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Adult_Purple.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Adult_Purple.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Adult_Purple.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Adult_Purple.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
                if ( it->getAge() > 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Master_Purple.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Master_Purple.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Master_Purple.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Master_Purple.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
            }
            if (it->getBelt().find("Brown")!= string::npos )
            {

                if (it->getAge() >= 18 && it->getAge() <= 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Adult_Brown.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Adult_Brown.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Adult_Brown.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Adult_Brown.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
                if ( it->getAge() > 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Master_Brown.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Master_Brown.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Master_Brown.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Master_Brown.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
            }
            if (it->getBelt().find("Black")!= string::npos )
            {

                if (it->getAge() >= 18 && it->getAge() <= 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Adult_Black.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Adult_Black.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Adult_Black.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Adult_Black.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
                if ( it->getAge() > 40)
                {
                    if (it->getWeight() <= 70)
                    {
                        Master_Black.insert(std::pair<string,string>("FeatherWeight",it->getName()));
                    }
                    if (70 < it->getWeight() && it->getWeight() <= 80)
                    {
                        Master_Black.insert(std::pair<string,string>("LightWeight",it->getName()));
                    }
                    if (80 < it->getWeight() && it->getWeight() <= 90)
                    {
                        Master_Black.insert(std::pair<string,string>("MiddleWeight",it->getName()));
                    }
                    if ( it->getWeight() > 90 )
                    {
                        Master_Black.insert(std::pair<string,string>("Heavyweight",it->getName()));
                    }
                }
            }
        }
        
    }

void Tournament::Show_Division(){
    // Ask for User to ask for which division he wants to see
    while (1)
    {
    string division;
    std::cout << "What Division do you want to see ('exit' to end) ? \n";
    std::cin >> division;
    if (division == "Blue")
    {   
        string category;
        std::cout << "What Category do you want to see (FeatherWeight,LightWeight,MiddleWeight,Heavyweight) ? \n";
        std::cin >> category;
        std::cout << std::endl;
        for (auto &itr : Adult_Blue) {
            if (itr.first.find( category) != string::npos)
            {
                std::cout << '\t' << itr.second << '\n';
            }
        }
    }
    else
    {
        std::cout << "Not found, try again" << '\n';
    }
    }
}
Tournament::Tournament(/* args */)
{
}

Tournament::~Tournament()
{
}

