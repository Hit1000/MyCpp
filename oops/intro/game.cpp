#include <iostream>
using namespace std;

class GameObject
{
public:
    void display()
    {
        cout <<"Game Initialized"<<endl;
    }
    virtual void displayHealth() =0;//pure virtual function 
    virtual void displayPower() =0;//it is not calling it self but saying same type of function is in derived class
};

class Player1 : virtual public GameObject
{
public:
    int health;
    Player1(int playerHealth) : health(playerHealth) {}
    void displayHealth()
    {
        cout <<health<<endl;
    }
};

class Player2 : virtual public GameObject
{
public:
    int Power;
    Player2(int playerPower) : Power(playerPower) {}
    void displayPower()
    {
        cout <<Power<<endl;
    }
};

class Boss : public Player1, public Player2
{
public:
    Boss(int bossHealth, int bossPower)
        : Player1(bossHealth), Player2(bossPower) {}
};

int main()
{
    int health, power;
    health=150;
    power=75;
    Boss boss(health, power);
    boss.display();
    GameObject *game = &boss;
    game ->displayHealth();
    game ->displayPower();


    return 0;
}