#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FootballPlayer
{
    // Private data members
    private:
    string name;
    int age,goalsScored,goalsAssisted, yellowCards,redCards;
    string type;
    vector<string> teams;

public:
    // No-argument constructor
    FootballPlayer() : name(""), age(0), type(""), goalsScored(0), goalsAssisted(0), yellowCards(0), redCards(0) {}

    // Argument constructor
    FootballPlayer(std::string name, int age, std::string type, int goalsScored, int goalsAssisted, int yellowCards, int redCards, std::vector<std::string> teams) : name(name), age(age), type(type), goalsScored(goalsScored), goalsAssisted(goalsAssisted), yellowCards(yellowCards), redCards(redCards), teams(teams) {}

    // Copy constructor
    FootballPlayer(const FootballPlayer &other) : name(other.name), age(other.age), type(other.type), goalsScored(other.goalsScored), goalsAssisted(other.goalsAssisted), yellowCards(other.yellowCards), redCards(other.redCards), teams(other.teams) {}

    // Show function to display the details of the player
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Type: " << type << endl;
        cout << "Goals Scored: " << goalsScored <<endl;
        cout << "Goals Assisted: " << goalsAssisted <<endl;
        cout << "Yellow Cards: " << yellowCards << endl;
        cout << "Red Cards: " << redCards << endl;
        cout << "Teams: ";
        for (const string &team : teams)
        {
            cout << team << " ";
        }
        cout << endl;
    }
};

int main()
{
    // Create a vector of teams
    vector<string> teams = {"Real Madrid", "Barcelona", "Paris Saint-Germain", "Manchester United"};

    // Create a FootballPlayer object using the argument constructor
    FootballPlayer player1("Lionel Messi", 35, "Forward", 700, 300, 30, 5, teams);

    // Create a FootballPlayer object using the copy constructor
    FootballPlayer player2(player1);

    // Display the details of player1 and player2
    cout << "Player 1:" << endl;
    player1.show();
}
