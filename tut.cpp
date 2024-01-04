
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <cstdlib>

using namespace std;
int xp = 0;
struct hero
{
     string h_characters[3] = {"MAGE", "WARRIOR", "ROGUE"};
     string h_weapons[3] = {"WAND", "SWORD", "ARCHER"};
     int h_attack[3] = {95, 85, 75};
     int h_damage[3] = {65, 60, 55};
     int h_defence[3] = {60, 70, 80};
     int h_agility[3] = {85, 90, 85};
     int h_health[3] = {100, 150, 120};

} heroes;

struct enemy
{
     string e_characters[3] = {"MINIONS","HANGMAN","MORGAROTH"};
     string e_weapons[3] = {"BLADES","NONE", "KATANA"};
     int e_attack[3] = {40,0,90};
     int e_damage[3] = {4,0,50};
     int e_defence[3] = {50,0,85};
     int e_agility[3] = {70,0,80};
     int e_health[3] = {60,0,2000};

} enemies;

void start(){
    char desiredkey = 's';
    system ("cls");
    cout <<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\__________________________________///////////////////////"<<endl;
    cout <<"<<-------------<-------<-------ADVENTURES OF ELDORIA------->------->------------->>"<<endl;
    cout <<"///////////////////////__________________________________\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
    cout <<"\n\n                              PRESS \"S\" to start                              "<<endl;
    cout <<"\n                                                                          "<<endl;
    char pressedkey;
    do {
        pressedkey = _getch();
        if(pressedkey == '0'){
            exit(0);
        }
    }while (pressedkey != desiredkey);
    cout <<"                                  LOADING.......                                "<<endl;
    cout <<"\n     NOTE: During the combat press \'j' for heavy attack and \n\t\t 'l' for light attack."<<endl;
    cout <<"\n To EXIT the game press 0 anytime on your keyboard";
    cout<<endl;
    system ("pause");
    system ("cls");
}
bool askForRetry() {
    char response;
    cout << "Do you want to retry? (y/n): ";
    cin >> response;
    return (response == 'y' || response == 'Y');
}

void menu(){
    system("color 4f");
    cout <<"                                 BACKGROUND                                      "<<endl;
    cout << "\nIn the mystical world of Eldoria, a powerful artifact known as the Crystal of Eternity \nhas been shattered into three pieces, scattering its immense energy across the lands\n.These fragments hold the key to either the salvation or doom of Eldoria. Dark forces led by \nthe malevolent sorcerer Morgaroth seek to harness this power for their nefarious purposes, \nplunging the world into eternal darkness. The fellowship of heroes must rise to prevent this \ncataclysmic event" <<endl;
    system ("pause");
    system ("cls");
}
int select(){ 
    cout << "\n                             SELECT YOUR CHARACTER                             "<<endl;
    cout <<"\nA.  MAGE                       B.  WARRIOR                      C.  ROGUE"<<endl;
    cout <<"\nWeapon : "<<heroes.h_weapons[0]<<"               Weapon:"<<heroes.h_weapons[1]<<"                     Weapon : "<<heroes.h_weapons[2]<<endl;
    cout <<"\nAttack "<<heroes.h_attack[0]<<"                      Attack "<<heroes.h_attack[1]<<"                     Attack "<<heroes.h_attack[2]<<endl;
    cout <<"\nDefence "<<heroes.h_defence[0]<<"                     Defence "<<heroes.h_defence[1]<<"                    Defence "<<heroes.h_defence[2]<<endl;
    cout <<"\nAgility "<<heroes.h_agility[0]<<"                     Agility "<<heroes.h_agility[1]<<"                    Agility "<<heroes.h_agility[2]<<endl;
    char choice = _getch();
    switch (choice){
        case 'a' :
            cout <<"You have selected MAGE"<<endl;
            system("pause");
            system("cls");
            return 0;
            break;
        case 'A' :
            cout <<"You have selected MAGE"<<endl;
            system("pause");
            system("cls");
            return 0;
            break;    
        case 'b' :
            cout <<"You have selected WARRIOR"<<endl;
            system("pause");
            system("cls");
            return 1;
            break;
        case 'B' :
            cout <<"You have selected WARRIOR"<<endl;
            system("pause");
            system("cls");
            return 1;
            break;    
        case 'c' :
            cout <<"You have selected ROGUE"<<endl;
            system("pause");
            system("cls");
            return 2;
            break;
        case 'C' :
            cout <<"You have selected ROGUE"<<endl;
            system("pause");
            system("cls");
            return 2;
            break;  
        case '0':    
            exit(0);
        default :
            system("cls");
            break;      
        }
        select();
        
    
    
}
void minions(){
    cout << "\t\t\t"<<enemies.e_characters[0]<<endl;
    cout << "\t\t\tWeapon : "<<enemies.e_weapons[0]<<endl;
    cout << "\t\t\tAttack : "<<enemies.e_attack[0]<<endl;
    cout << "\t\t\tDefense: "<<enemies.e_defence[0]<<endl;
    cout << "\t\t\tAgility: "<<enemies.e_agility[0]<<endl;
    cout << "\t\t\tHealth : "<<enemies.e_health[0]<<endl;
}


void wave1(int enem) {
    bool playersucceed = false;
    do{
    int hero = select();
    cout<<"\t\t\t\t\t\tXP: "<<xp;
    cout<< "\n"<<heroes.h_characters[hero]<<"\t\t\tVS      "<<enemies.e_characters[enem]<<endl;
     cout<< "Weapon : "<<heroes.h_weapons[hero]<< "\t\t\tWeapon : "<<enemies.e_weapons[enem]<<endl;
     cout<< "Attack : "<<heroes.h_attack[hero]<< "\t\t\tAttack : "<<enemies.e_attack[enem]<<endl;
     cout<< "Defense: "<<heroes.h_defence[hero]<< "\t\t\tDefense: "<<enemies.e_defence[enem]<<endl;
     cout<< "Agility: "<<heroes.h_agility[hero]<< "\t\t\tAgility: "<<enemies.e_agility[enem]<<endl;
     cout<< "Health : "<<heroes.h_health[hero]<< "\t\t\tHealth : "<<enemies.e_health[enem]<<endl;
    
     cout << "Wave 1 - Minions of the dark lord" << endl;
    cout << "\n\n   OO  " << "\tMINIONS: You are nothing in front of the might of Morgaroth" << endl;
    cout << " //||\\\\ " << "\t He will surely crush you and your desire to save the people" << endl;
    cout << " // \\\\ " << "\t         being destroyed." << endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp;
    cout<<"\n"<< heroes.h_characters[hero]<<"\t\t\tVS      "<<enemies.e_characters[enem]<<endl;
     cout<< "Weapon : "<<heroes.h_weapons[hero]<< "\t\t\tWeapon : "<<enemies.e_weapons[enem]<<endl;
     cout<< "Attack : "<<heroes.h_attack[hero]<< "\t\t\tAttack : "<<enemies.e_attack[enem]<<endl;
     cout<< "Defense: "<<heroes.h_defence[hero]<< "\t\t\tDefense: "<<enemies.e_defence[enem]<<endl;
     cout<< "Agility: "<<heroes.h_agility[hero]<< "\t\t\tAgility: "<<enemies.e_agility[enem]<<endl;
     cout<< "Health : "<<heroes.h_health[hero]<< "\t\t\tHealth : "<<enemies.e_health[enem]<<endl;
    cout << "\n\n   OO  " << "\t HEROES: We will send you and your devil thoughts back to " << endl;
    cout << " //||\\\\ " << "\t Hell. You cannot get away with your evil thoughts and no" << endl;
    cout << "  //\\\\ " << "\t         one can stop you from being destroyed." << endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp; 
    cout << "\n\n\n                                     BATTLE BEGINS!                     " << endl;
    cout<< "\n"<<heroes.h_characters[hero]<<"\t\t\tVS      "<<enemies.e_characters[enem]<<endl;
     cout<< "Weapon : "<<heroes.h_weapons[hero]<< "\t\t\tWeapon : "<<enemies.e_weapons[enem]<<endl;
     cout<< "Attack : "<<heroes.h_attack[hero]<< "\t\t\tAttack : "<<enemies.e_attack[enem]<<endl;
     cout<< "Defense: "<<heroes.h_defence[hero]<< "\t\t\tDefense: "<<enemies.e_defence[enem]<<endl;
     cout<< "Agility: "<<heroes.h_agility[hero]<< "\t\t\tAgility: "<<enemies.e_agility[enem]<<endl;
     cout<< "Health : "<<heroes.h_health[hero]<< "\t\t\tHealth : "<<enemies.e_health[enem]<<endl;
    
    int minionsRemaining = 5;
    int minion_health[5];
    for (int i = 0; i < 5; i++) {
        minion_health[i] = enemies.e_health[0];
    }

    int hero_health = heroes.h_health[hero];

    while (minionsRemaining > 0 && hero_health > 0) {
        cout << "\n\n\t\tYour Turn " << heroes.h_characters[hero] << endl;
        cout << "\t\t\tMINIONS REMAINING: " << minionsRemaining << endl;

        for (int i = 0; i < 5; ++i) {
            if (minion_health[i] > 0) {
                cout << "\n\t\t\tMINION " << i + 1 << "'s Health: " << minion_health[i] << endl;
            }
        }

        char h_turn = _getch();
        if (h_turn == 'j' || h_turn == 'J') {
            srand(static_cast<unsigned int>(time(0)));
            int hero_damage = rand() % heroes.h_damage[hero];
            int targetMinion = rand() % 5;

            if (minion_health[targetMinion] > 0) {
                minion_health[targetMinion] -= hero_damage;

                if (minion_health[targetMinion] <= 0) {
                    minionsRemaining--;
                    minion_health[targetMinion] = 0;
                }
            }
        } else if (h_turn == 'l' || h_turn == 'L') {
            srand(static_cast<unsigned int>(time(0)));
            int hero_damage = rand() % (heroes.h_damage[hero] / 2);
            int targetMinion = rand() % 5;

            if (minion_health[targetMinion] > 0) {
                minion_health[targetMinion] -= hero_damage;

                if (minion_health[targetMinion] <= 0) {
                    minionsRemaining--;
                    minion_health[targetMinion] = 0;
                }
            }
        } else if(h_turn == '0'){
            exit(0);
        }

        // Minions' turn
        for (int i = 0; i < 5; ++i) {
            if (minion_health[i] > 0) {
                srand(static_cast<unsigned int>(time(0)));
                int enemy_damage = rand() % enemies.e_damage[0];
                hero_health -= enemy_damage;
            }
        }

        // Display updated health
        cout << "\n   OO  " << endl;
        cout << " //||\\\\ " << endl;
        cout << "  //\\\\ ";
        cout << "\t         " << heroes.h_characters[hero] << "'s Health: " << hero_health << endl;
    }

    if (hero_health > 0) {
        cout << "\n\nYou defeated the minions in the first wave!" << endl;
        playersucceed = true;
        xp += 10;
    } else {
        cout << "\n\nThe minions have overwhelmed you." << endl;
        playersucceed = false;
        system("pause");
        system("cls");
    }
    }while(!playersucceed);
}    
void wave2( int enem){
    bool playersucceed = false;
    do{ 
    int hero = select();
    cout<< heroes.h_characters[hero]<<"\t\t\tVS      "<<enemies.e_characters[enem]<<endl;
     cout<< "Weapon : "<<heroes.h_weapons[hero]<< "\t\t\tWeapon : "<<enemies.e_weapons[enem]<<endl;
     cout<< "Attack : "<<heroes.h_attack[hero]<< "\t\t\tAttack : "<<enemies.e_attack[enem]<<endl;
     cout<< "Defense: "<<heroes.h_defence[hero]<< "\t\t\tDefense: "<<enemies.e_defence[enem]<<endl;
     cout<< "Agility: "<<heroes.h_agility[hero]<< "\t\t\tAgility: "<<enemies.e_agility[enem]<<endl;
     cout<< "Health : "<<heroes.h_health[hero]<< "\t\t\tHealth : "<<enemies.e_health[enem]<<endl;
     cout << "Wave 2 - The return of Minions" << endl;
    cout << "\n\n   OO  " << "\tMINIONS: You can\'t get through us. Your fate is decided." << endl;
    cout << " //||\\\\ " << "\t Die with our with our hands and get your defeat back to your" << endl;
    cout << " // \\\\ " << "\t         lost lands." << endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp;
    cout<< "\n"<<heroes.h_characters[hero]<<"\t\t\tVS      "<<enemies.e_characters[enem]<<endl;
     cout<< "Weapon : "<<heroes.h_weapons[hero]<< "\t\t\tWeapon : "<<enemies.e_weapons[enem]<<endl;
     cout<< "Attack : "<<heroes.h_attack[hero]<< "\t\t\tAttack : "<<enemies.e_attack[enem]<<endl;
     cout<< "Defense: "<<heroes.h_defence[hero]<< "\t\t\tDefense: "<<enemies.e_defence[enem]<<endl;
     cout<< "Agility: "<<heroes.h_agility[hero]<< "\t\t\tAgility: "<<enemies.e_agility[enem]<<endl;
     cout<< "Health : "<<heroes.h_health[hero]<< "\t\t\tHealth : "<<enemies.e_health[enem]<<endl;
    cout << "\n\n   OO  " << "\t HEROES: I will crush you into pieces. The fall of morgaroth" << endl;
    cout << " //||\\\\ " << "\t is destined by our swords. You better drop your weapons or else" << endl;
    cout << "  //\\\\ " << "\t         one can stop you from being destroyed." << endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp;
    cout << "\n\n\n                                     BATTLE BEGINS!                     " << endl;
    cout<<"\n"<< heroes.h_characters[hero]<<"\t\t\tVS      "<<enemies.e_characters[enem]<<endl;
     cout<< "Weapon : "<<heroes.h_weapons[hero]<< "\t\t\tWeapon : "<<enemies.e_weapons[enem]<<endl;
     cout<< "Attack : "<<heroes.h_attack[hero]<< "\t\t\tAttack : "<<enemies.e_attack[enem]<<endl;
     cout<< "Defense: "<<heroes.h_defence[hero]<< "\t\t\tDefense: "<<enemies.e_defence[enem]<<endl;
     cout<< "Agility: "<<heroes.h_agility[hero]<< "\t\t\tAgility: "<<enemies.e_agility[enem]<<endl;
     cout<< "Health : "<<heroes.h_health[hero]<< "\t\t\tHealth : "<<enemies.e_health[enem]<<endl;
    
    int minionsRemaining = 5;
    int minion_health[5];
    for (int i = 0; i < 5; ++i) {
        minion_health[i] = enemies.e_health[0];
    }

    int hero_health = heroes.h_health[hero];

    while (minionsRemaining > 0 && hero_health > 0) {
        cout << "\n\n\t\tYour Turn " << heroes.h_characters[hero] << endl;
        cout << "\t\t\tMINIONS REMAINING: " << minionsRemaining << endl;

        for (int i = 0; i < 5; ++i) {
            if (minion_health[i] > 0) {
                cout << "\n\t\t\tMINION " << i + 1 << "'s Health: " << minion_health[i] << endl;
            }
        }

        char h_turn = _getch();
        if (h_turn == 'j' || h_turn == 'J') {
            srand(static_cast<unsigned int>(time(0)));
            int hero_damage = rand() % heroes.h_damage[hero];
            int targetMinion = rand() % 5;

            if (minion_health[targetMinion] > 0) {
                minion_health[targetMinion] -= hero_damage;

                if (minion_health[targetMinion] <= 0) {
                    minionsRemaining--;
                    minion_health[targetMinion] = 0;
                }
            }
        } else if (h_turn == 'l' || h_turn == 'L') {
            srand(static_cast<unsigned int>(time(0)));
            int hero_damage = rand() % (heroes.h_damage[hero] / 2);
            int targetMinion = rand() % 5;

            if (minion_health[targetMinion] > 0) {
                minion_health[targetMinion] -= hero_damage;

                if (minion_health[targetMinion] <= 0) {
                    minionsRemaining--;
                    minion_health[targetMinion] = 0;
                }
            }
        }else if(h_turn == '0'){
            exit(0);
        }

        // Minions' turn
        for (int i = 0; i < 5; ++i) {
            if (minion_health[i] > 0) {
                srand(static_cast<unsigned int>(time(0)));
                int enemy_damage = rand() % enemies.e_damage[0];
                hero_health -= enemy_damage;
            }
        }

        // Display updated health
        cout << "\n   OO  " << endl;
        cout << " //||\\\\ " << endl;
        cout << "  //\\\\ ";
        cout << "\t         " << heroes.h_characters[hero] << "'s Health: " << hero_health << endl;
    }

    if (hero_health > 0) {
        cout << "\n\nYou have crushed the minions in the second wave!" << endl;
        xp += 20;
        playersucceed = true;
    } else {
        cout << "\n\nThe minions have overwhelmed you. Game over!" << endl;
        playersucceed = false;
        system("pause");
        system("cls");
    }
    } while(!playersucceed);
}
void wave3(int enem){
    bool playersucceed = false;
    do{
    int hero = select();
    cout<< heroes.h_characters[hero]<<"\t\t\tVS      "<<enemies.e_characters[enem]<<endl;
     cout<< "Weapon : "<<heroes.h_weapons[hero]<< "\t\t\tWeapon : "<<enemies.e_weapons[enem]<<endl;
     cout<< "Attack : "<<heroes.h_attack[hero]<< "\t\t\tAttack : "<<enemies.e_attack[enem]<<endl;
     cout<< "Defense: "<<heroes.h_defence[hero]<< "\t\t\tDefense: "<<enemies.e_defence[enem]<<endl;
     cout<< "Agility: "<<heroes.h_agility[hero]<< "\t\t\tAgility: "<<enemies.e_agility[enem]<<endl;
     cout<< "Health : "<<heroes.h_health[hero]<< "\t\t\tHealth : "<<enemies.e_health[enem]<<endl;
     cout << "Wave 3 - The Last Stand" << endl;
    cout << "\n\n   OO  " << "\tMINIONS: You haven\'t seen anything yet. We are going to take" << endl;
    cout << " //||\\\\ " << "\t away your world. It will be interesting to see how long you can" << endl;
    cout << " // \\\\ " << "\t         keep fighting." << endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp;
    cout<< "\n"<<heroes.h_characters[hero]<<"\t\t\tVS      "<<enemies.e_characters[enem]<<endl;
     cout<< "Weapon : "<<heroes.h_weapons[hero]<< "\t\t\tWeapon : "<<enemies.e_weapons[enem]<<endl;
     cout<< "Attack : "<<heroes.h_attack[hero]<< "\t\t\tAttack : "<<enemies.e_attack[enem]<<endl;
     cout<< "Defense: "<<heroes.h_defence[hero]<< "\t\t\tDefense: "<<enemies.e_defence[enem]<<endl;
     cout<< "Agility: "<<heroes.h_agility[hero]<< "\t\t\tAgility: "<<enemies.e_agility[enem]<<endl;
     cout<< "Health : "<<heroes.h_health[hero]<< "\t\t\tHealth : "<<enemies.e_health[enem]<<endl;
    cout << "\n\n   OO  " << "\t HEROES: Sounds like a terrible plan, villain. And we all know" << endl;
    cout << " //||\\\\ " << "\t that good will eventually triumph over evil. You are facing a " << endl;
    cout << "  //\\\\ " << "\t         hero who will ultimately defeat you." << endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp;
    cout << "\n\n\n                                     BATTLE BEGINS!                     " << endl;
    cout<< "\n"<<heroes.h_characters[hero]<<"\t\t\tVS      "<<enemies.e_characters[enem]<<endl;
     cout<< "Weapon : "<<heroes.h_weapons[hero]<< "\t\t\tWeapon : "<<enemies.e_weapons[enem]<<endl;
     cout<< "Attack : "<<heroes.h_attack[hero]<< "\t\t\tAttack : "<<enemies.e_attack[enem]<<endl;
     cout<< "Defense: "<<heroes.h_defence[hero]<< "\t\t\tDefense: "<<enemies.e_defence[enem]<<endl;
     cout<< "Agility: "<<heroes.h_agility[hero]<< "\t\t\tAgility: "<<enemies.e_agility[enem]<<endl;
     cout<< "Health : "<<heroes.h_health[hero]<< "\t\t\tHealth : "<<enemies.e_health[enem]<<endl;
    
    int minionsRemaining = 5;
    int minion_health[5];
    for (int i = 0; i < 5; i++) {
        minion_health[i] = enemies.e_health[0];
    }

    int hero_health = heroes.h_health[hero];

    while (minionsRemaining > 0 && hero_health > 0) {
        cout << "\n\n\t\tYour Turn " << heroes.h_characters[hero] << endl;
        cout << "\t\t\tMINIONS REMAINING: " << minionsRemaining << endl;

        for (int i = 0; i < 5; i++) {
            if (minion_health[i] > 0) {
                cout << "\n\t\t\tMINION " << i + 1 << "'s Health: " << minion_health[i] << endl;
            }
        }

        char h_turn = _getch();
        if (h_turn == 'j' || h_turn == 'J') {
            srand(static_cast<unsigned int>(time(0)));
            int hero_damage = rand() % heroes.h_damage[hero];
            int targetMinion = rand() % 5;

            if (minion_health[targetMinion] > 0) {
                minion_health[targetMinion] -= hero_damage;

                if (minion_health[targetMinion] <= 0) {
                    minionsRemaining--;
                    minion_health[targetMinion] = 0;
                }
            }
        } else if (h_turn == 'l' || h_turn == 'L') {
            srand(static_cast<unsigned int>(time(0)));
            int hero_damage = rand() % (heroes.h_damage[hero] / 2);
            int targetMinion = rand() % 5;

            if (minion_health[targetMinion] > 0) {
                minion_health[targetMinion] -= hero_damage;

                if (minion_health[targetMinion] <= 0) {
                    minionsRemaining--;
                    minion_health[targetMinion] = 0;
                }
            }
        }else if(h_turn == '0'){
            exit(0);
        }

        // Minions' turn
        for (int i = 0; i < 5; ++i) {
            if (minion_health[i] > 0) {
                srand(static_cast<unsigned int>(time(0)));
                int enemy_damage = rand() % enemies.e_damage[0];
                hero_health -= enemy_damage;
            }
        }

        // Display updated health
        cout << "\n   OO  " << endl;
        cout << " //||\\\\ " << endl;
        cout << "  //\\\\ ";
        cout << "\t         " << heroes.h_characters[hero] << "'s Health: " << hero_health << endl;
    }

    if (hero_health > 0) {
        cout << "\n\nThe minions are destroyed in the third wave!" << endl;
        xp += 30;
        playersucceed = true;
    } else {
        cout << "\n\nThe minions have overwhelmed you. Game over!" << endl;
        playersucceed = false;
        system("pause");
        system("cls");
    }
   }while(!playersucceed);

}
void stage1(){
    cout<<"\n_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/ ------- _/_/_/_/_/_/_/_/_/_/_/_/_/_/_/"<<endl;
    cout<<"_/_/_/_/_/_/_/_/_/_/ STAGE 1 : THE BATTLE FOR DAWN _/_/_/_/_/_/_/_/_/_/"<<endl;
    cout<<"_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/ _______ _/_/_/_/_/_/_/_/_/_/_/_/_/_/_/"<<endl;
    cout<<"\nThe adventure commences in the serene domain of Elaria, where the initial \nfragment lies concealed. Participants have the option to select from a \nvaried array of characters, each possessing distinctive abilities and \nweaponry. The player's team is tasked with safeguarding the sacred \ngrounds from successive waves of Morgaroth's minions. The defender, equipped with a \nshield and robust armor, steadfastly holds the frontline against the unyielding assailants\n, while the attacker, a proficient warrior, dispatches adversaries using an \nassortment of weapons. As the conflict escalates, players must harmonize \ntheir offensives and defenses to preserve the integrity of the fragment"<<endl;
    system("pause");
    system("cls");
    wave1(0);
    system("pause");
    system("cls");
    wave2(0);
    system("pause");
    system("cls");
    wave3(0);
    system("pause");
    system("cls");    
}
void hangman(){
     bool playersucceed = false;
    do{
    int chances = 6;
    string message = "You have 6 lives left";
    int misses=0;
    char letter;
    int checkguess(char , string, string&);
   
    
    cout<<"_/_/_/_/_/_/_/_/_/_/_/_/_/_/ THE HANGMAN _/_/_/_/_/_/_/_/_/_/_/_/_/_/"<<endl;
    cout<<" \nThe Oracle unveils the way forward, rewarding the heroes with insight into \nthe Crystal's whereabouts. Fail, and the shadows of Mystaria threaten to consume \nthe fellowship, obstructing their quest to save Eldoria from the encroaching darkness.\n The Hangman game becomes a pivotal test of intellect and teamwork, a crucial step in\n the epic journey to safeguard the realms of eternity."<<endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp;
    cout <<"\n"<< "=====================\n";
    cout <<        "Hangman       \n";
    cout << "=====================\n";
    cout << "Instructions: Save ELDORIA by guessing the letters in the codeword.\n";
    string word;
    string words[10] = {
        "eldoria",
        "morgaroth",
        "crystal",
        "fragment",
        "hangman",
        "oracle",
        "mystaria",
        "fellowship",
        "darkness",
        "salvation"
    };
    srand(time(NULL));
    int word_number = rand()%10;
    word = words[word_number];
    string hide_word(word.length(), '_');
    


    

    while (chances != 0)
    {
         
        cout <<"\t\t\t\t LIFE: "<<chances <<endl;
        cout <<hide_word <<endl;
        cout <<"Guess a Letter: ";
        letter = _getch();
        if(letter == '0'){
            exit(0);
        }
        system("cls");
        cout<<"\t\t\t\t\t\tXP: "<<xp<<endl;
        if(checkguess(letter, word, hide_word) == 0 ){
        message = "Incorrect Letter!";
        cout<<message; 
        misses++;
        chances--;
        if(misses==0)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==1)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==2)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==3)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==4)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==5)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==6)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
        }else{
            message = "Nice! Correct guess";
            cout<<message;
            if(misses==0) 
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==1)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==2)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==3)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==4)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==5)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==6)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
        }
        if(hide_word == word){
            message = "You succeeded";
            cout<<message;
            cout <<"\t\t\t\t LIFE: "<<chances <<endl;
            cout <<"\t\t\t\t"<<"The word is "<<word<<endl;
            xp += 60;
            system("pause");
            system("cls");
            cout<<"\t\t\t\t\t\tXP: "<<xp<<endl;
            playersucceed = true;
            break;
        }
    }
    if(chances == 0){
        message = "You lost, Eldoria is destroyed";
        cout<<message;
        cout <<"\t\t\t\t LIFE: "<<chances <<endl;
        cout <<"\t\t\t\t"<<"The word is "<<word<<endl;
        system("pause");
        system("cls");
    }
    }while(!playersucceed);
}

int checkguess(char guess, string real_word, string &hidden_word)
{
    int matches = 0;
    int len = real_word.length();

    for (int i = 0; i < len; i++)
    {
        if (guess == hidden_word[i])
        {
            return 0;
        }
        if (guess == real_word[i])
        {
            hidden_word[i] = guess;
            matches++;
        }
    }

    return matches;
}

void stage2(){
    cout<<"\n_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/ ------- _/_/_/_/_/_/_/_/_/_/_/_/_/_/_/"<<endl;
    cout<<"_/_/_/_/_/_/_/_/_ STAGE 2 :RIDDLES OF THE FORGOTTEN ORACLE _/_/_/_/_/_/"<<endl;
    cout<<"_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/ _______ _/_/_/_/_/_/_/_/_/_/_/_/_/_/_/"<<endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp<<endl;
    hangman();
}

void boss(){
    int heroesRemaining = 3;
    int heroes_health[3] = {heroes.h_health[0],heroes.h_health[1],heroes.h_health[2]};
    int enemy_health = enemies.e_health[2];
    bool playersucceed = false;
    do{
    while (heroesRemaining > 0 && enemy_health > 0){
        cout <<"\n\n\t\tYour Turn HEROES"<< endl;
        cout <<"\t\t\t HEROES: "<<heroesRemaining<<endl;
        cout << "\n\t\t\t\t\t\t\tMorgaroth's Health: " << enemy_health << endl;
        for(int i = 0; i < 3; i++){
            if (heroes_health[i] > 0){
                 
                cout <<"\n\t\t\t" <<heroes.h_characters[i]<<"'s Health: "<<heroes_health[i]<<endl;
            }
        }
        char h_turn = _getch();
        if(h_turn == 'j' || h_turn == 'J'){
            srand(static_cast<unsigned int>(time(0)));
            int enemy_damage = rand() % (enemies.e_damage[2]/2);
            int targetHero = rand() % 5;
            if(heroes_health[targetHero] > 0) {
                heroes_health[targetHero] -= enemy_damage;
                if (heroes_health[targetHero] <= 0){
                    heroesRemaining--;
                    heroes_health[targetHero] = 0;
                }
            }
        }else if(h_turn == 'l' || h_turn == 'L'){
            srand(static_cast<unsigned int>(time(0)));
            int enemy_damage = rand() % enemies.e_damage[2];
            int targetHero = rand() % 5;
            if(heroes_health[targetHero] > 0) {
                heroes_health[targetHero] -= enemy_damage;
                if (heroes_health[targetHero] <= 0){
                    heroesRemaining--;
                    heroes_health[targetHero] = 0;
                }
            }
        }else if(h_turn == '0'){
            exit(0);
        }
        // Heroes' turn
        for(int i = 0; i < 3; i++) {
             srand(static_cast<unsigned int>(time(0)));
             int hero_damage = rand() % heroes.h_damage[i];
             enemy_health -= hero_damage;
        }
          // Display updated health
        cout << "\n   OO  " << endl;
        cout << " //||\\\\ " << endl;
        cout << "  //\\\\ ";
        for (int i = 0; i < 3; i++){
        cout << "\t         " << heroes.h_characters[i] << "'s Health: " << heroes_health[i] << endl;
        
         }
         
    }
    if (heroes_health > 0) {
        cout << "\n\nCongrats You destroyed Morgoroth and saved Eldoria!" << endl;
        xp += 100;
        playersucceed = true;
    } else {
        cout << "\n\nEldoria is destroyed. Game over!" << endl;
        playersucceed = false;
        system("pause");
        system("cls");
    }
    }while(!playersucceed);
}

void stage3(){
    cout<<"\n_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/ ------- _/_/_/_/_/_/_/_/_/_/_/_/_/_/_/"<<endl;
    cout<<"_/_/_/_/_/_/_/_/__/_/_ STAGE 3 :MORGAROTH'S LAST STAND _/_/_/_/_/_/_/_/_/_/"<<endl;
    cout<<"_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/ _______ _/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/"<<endl;
    cout << "         ,----, " << endl;
    cout << "       ,;||. '    " << endl;
    cout << "      // ||       " << endl;
    cout << "     |'----'    " << endl;
    cout << "     | _______ | " << endl;
    cout << "   _||_______||_ " << endl;
    cout << "  / |  |     |  |\\ " << endl;
    cout << " |  |  |     |  | | " << endl;
    cout << " |  |  |_____|  | | " << endl;
    cout << " |  |  |_____   | | " << endl;
    cout << " |  |  |     |  | | " << endl;
    cout << " |  |  |     |  | | " << endl;
    cout << " |  |  |_____|  | | " << endl;
    cout << " |__|___________|_| ";  
    cout <<"\tMorgaroth: ERrrrrrr! You are lucky you made it till here. I will tear you apart"<<endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp;
    cout<<"\n\n_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/ ------- _/_/_/_/_/_/_/_/_/_/_/_/_/_/_/"<<endl;
    cout<<"_/_/_/_/_/_/_/_/__/_/_ STAGE 3 :MORGAROTH'S LAST STAND _/_/_/_/_/_/_/_/_/_/"<<endl;
    cout<<"_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/ _______ _/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/"<<endl;
    cout << "\n   OO  " << endl;
    cout << " //||\\\\ " << endl;
    cout << "  //\\\\ "; 
    cout <<"\t HEROES: You are the last to be defeated and indeed Eldoria will see the next sunrise\n in peace"<<endl;
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\tXP: "<<xp;
    cout <<"\nNote: All the three heroes will fight against morgaroth"<<endl;
    cout << "\n\n\n                                     BATTLE BEGINS!                     " << endl;
    boss();
}
void end(){
    
    
    system ("pause");
    system("cls");
    cout <<"\n\n\n\n\t\t\t\t THANKS FOR PLAYING!"<<endl;
}
int main(){
    start();
    menu();

    stage1();
    
    stage2();
     
    stage3();


    

    
    return 0;
}

