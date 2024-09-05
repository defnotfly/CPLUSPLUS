#include <iostream>
#include <string>
using namespace std;



//function declarations for the agents
void printJett ();
void printRaze ();
void printReyna ();
void printYoru ();
void printSage ();
void printBrimstone ();
void printViper ();
void printOmen ();
void printAstra ();
void printHarbor (); 
void printIso (); 
void printSkye (); 
void printChamber (); 
void printBreach (); 
void printKilljoy (); 
void printSova (); 
void printCypher (); 
void displayAgents ();

    

int main()
{
    int choice;

    cout <<"Hi, this is Lloyd and I wrote a program that will show the information of VALORANT Agents." <<endl <<endl <<endl;

    displayAgents ();

return 0;
}



//function definitions for the agents
void printCypher ()
{
    string name = "Cypher";
    string role = "Sentinel";
    int powerlvl = 84;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Cypher is the only agent that can hold a bombsite alone, without even being there. No one can pass his Cameras and Trapwires undetected." <<endl
    <<"His Cyber Cages that acts like smokes, and can be activated remotely. Cypher's ultimate reveals the locations of enemies.";
}

void printSova ()
{
    string name = "Sova";
    string role = "Initiator";
    int powerlvl = 79;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Sova is a Russian agent who's an archery expert. His weapon has the ability to reveal the position of enemies by a wall-hack system, or by shocking nearby opponents." <<endl
    <<"One of his additional abilities allows him to deploy a reconnaissance drone to monitor the battlefield from the air.";
}

void printKilljoy ()
{
    string name = "Killjoy";
    string role = "Sentinel";
    int powerlvl = 70;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Killjoy is a wunderkind. She was added in Act 2 of the Ignition Series, and her robots help your team to hold an angle from the cover." <<endl
    <<"Her controversial turret guards an area, and shots to any enemy passing by. Killjoy ultimate ability can disarm enemy players if they are not fast enough.";
}

void printBreach ()
{
    string name = "Breach";
    string role = "Initiator";
    int powerlvl = 77;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Remember, Breach's kinetic blasts ensure that no fight is ever fair. Whether you're clearing paths or disrupting opponents, he's a force to be reckoned with!";
}

void printChamber ()
{
    string name = "Chamber";
    string role = "Sentinel";
    int powerlvl = 58;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Chamber, unveiled on Oct. 29, is a sentinel with a twist. He has a few similarities to agents like Killjoy and Cypher, but his kit has more of an emphasis on dealing damage." <<endl
    <<"He carries a bespoke pistol and summons a golden sniper rifle as his ultimate.";
}
void printSkye ()
{
    string name = "Skye";
    string role = "Initiator";
    int powerlvl = 60;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"A Radiant from Nimbin, Australia, Skye, whose real name is Kirra Foster, spent years battling against the ventures of the Kingdom Corporation in Eastern Australia.";
}

void printIso ()
{
    string name = "Iso";
    string role = "Duelist";
    int powerlvl = 70;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"chingchong.";
}

void printHarbor ()
{
    string name = "Harbor";
    string role = "Controller";
    int powerlvl = 60;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Harbor is depicted to be an agent with a cheerful personality, his speeches encouraging confidence among his teammates and filled with endearing mirth." <<endl
    <<"He has shown to be an individual with considerable experience in combat, coming from his extended period of time serving under REALM, wherein he built a reputation of being an exemplary soldier worthy of being deemed as a legend";
}

void printJett()
{
    string name = "Jett";
    string role = "Duelist";
    int powerlvl = 81;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Jett is the fastest of the agents, and only one that can levitate from boosted places without making any noise." <<endl
    <<"She has 3 powerful smokes called Cloudburst, that can be instantly thrown in front of her.";
}

void printRaze()
{
    string name = "Raze";
    string role = "Duelist";
    int powerlvl = 86;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Raze has the most damage abilities of all the Valorant agents, making her an ideal entry fragger." <<endl
    <<"With an arsenal that includes cluster grenades, detonating packs, and even an exploding robot on wheels," <<endl
    <<"she excels in sieging on offense and making enemies think twice about approaching on defense.";
}

void printReyna()
{
    string name = "Reyna";
    string role = "Duelist";
    int powerlvl = 91;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Reyna also known as a vampire is entry fragger agent, that gains Soul Orbs when she kills her enemies." <<endl
    <<"Reyna is feast or famine, and a big get frags agent. Her abilities only last a few seconds.";
}

void printYoru()
{
    string name = "Yoru";
    string role = "Duelist";
    int powerlvl = 89;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Yoru is a stealthy agent who can turn invisible or hop through dimensions. He is an infiltrating duelist who can teleport across short distances." <<endl
    <<"With his flashes, he blind his opponents. Yoru is the 5th duelist making it possible to play a whole duelist team.";
}

void printSage()
{
    string name = "Sage";
    string role = "Sentinel";
    int powerlvl = 69;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"whose abilities make her a key support in the game. Sage equips various orbs which can slow enemies, heal allies, or erect walls to control the battlefield." <<endl
    <<"Her ultimate, Resurrection, can even bring dead allies back to life, swinging the balance of power in a match in seconds.";
}

void printBrimstone()
{
    string name = "Brimstone";
    string role = "Controller";
    int powerlvl = 85;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Brimstone is a VALORANT agent, specializing in supporting allies and enabling fast site executes. Brimstone is unique in the way he uses the minimap to deploy some of his abilities," <<endl
    <<"making him dangerous even if he's not directly present in the fight.";
}

void printViper()
{
    string name = "Viper";
    string role = "Controller";
    int powerlvl = 78;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Viper is a VALORANT agent who deals with poison and acid, burning down and suffocating her enemies. She uses fuel to activate her powerful abilities" <<endl
    <<"Poison Cloud and Toxic Screen to melt passing targets and block vision. The fuel gauge recharges over time, allowing Viper to control areas for extended time.";
}

void printAstra()
{
    string name = "Astra";
    string role = "Controller";
    int powerlvl = 84;

    cout << "Name: " << name <<endl << "Role: " << role <<endl << "Power Level: " << powerlvl << endl <<endl;
    cout <<"Astra is a space-themed agent from Ghana, and she is able to command the cosmos, flinging stars left and right on the battlefield." <<endl
    <<"She is the master of gravitation and galaxies, and she is all about making life difficult for aggressive players. Astra is quite literally meant to slow things down and set the pace of the game.";
}



void displayAgents ()
{
    string choice;

        cout <<"Enter your Agent name: ";
        cin >>choice;
        if (choice == "Jett")
        {
            printJett ();
        }
        
        else if (choice == "Raze")
        {
            printRaze ();
        }

        else if (choice == "Reyna")
        {
            printReyna ();
        }
        
        else if (choice == "Yoru")
        {
            printYoru ();
        }

        else if (choice == "Sage")
        {
            printSage ();
        }

        else if (choice == "Brimstone")
        {
            printBrimstone ();
        }

        else if (choice == "Viper")
        {
            printViper ();
        }

        else if (choice == "Astra")
        {
            printAstra ();
        }

        else if (choice == "Harbor")
        {
            printHarbor ();
        }

         else if (choice == "Iso")
        {
            printIso ();
        }

         else if (choice == "Skye")
        {
            printSkye ();
        }

         else if (choice == "Sova")
        {
            printSova ();
        }

         else if (choice == "Killjoy")
        {
            printKilljoy ();
        }

         else if (choice == "Cypher")
        {
            printCypher ();
        }

         else if (choice == "Chamber")
        {
            printChamber ();
        }
        else 
        {
            cout <<"Agent not existing.";
        }

}