// ItemTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Weapon.h"
#include "Armor.h"
#include "Player.h"

void CreateItem();
void CreateArmor(Player player);
void CreateWeapon(Player player);

int main()
{
    bool run = true;
    Player player("Supertappaja", 3, 3);
    player.equippedItems.push_back(make_unique<Weapon>("BattleAxe", 3, 4.5f));
    player.equippedItems.push_back(make_unique<Armor>("ChainMail", 3, 3));
    player.inventoryItems.push_back(make_unique<Armor>("Platebody", 5, 8));
    //Manager::LevelBuilder(10, 20);

    char selection;

    while (run)
    {
        cout << "Character name: " << player.name << endl;
        cout << "Currently equipped items:" << endl;
        for (auto& item : player.equippedItems)
        {
            cout << item->itemName << endl;
        }

        cout << "Items in inventory: " << endl;

        for (auto& item : player.inventoryItems)
        {
            cout << item->itemName << endl;
        }

        cout << "Player total weight: " << player.CalculateWeight() << endl;
        cout << "Choose what to do: " << endl;

        cout << "1: Create a new item" << endl;
        cout << "2: Equip an item" << endl;

        cin >> selection;

        switch (selection)
        {
        default:
            cout << "Invalid input" << endl;
            break;

        case '1':
            CreateWeapon(player);
            break;

        case '2':

            break;
        }
    }
    
}

//void CreateItem(Player player)
//{
//    char itemToCreate;
//
//    cout << "Press 1 to create a weapon" << endl;
//    cout << "Press 2 to create an armor" << endl;
//
//    cin >> itemToCreate;
//
//    switch (itemToCreate)
//    {
//    default:
//        cout << "Invalid input";
//        break;
//
//    case 1:
//        CreateWeapon(player);
//
//        break;
//    case 2:
//
//        break;
//    }
//}
//
void CreateWeapon(Player player)
{
    string wpnName;
    int dmgType;
    int wpnDmg;
    float wpnWeight;


    cout << "Give a name: ";
    cin >> wpnName;
    cout << endl << "Give weapon damage: ";
    cin >> wpnDmg;
    cout << endl << "Give weapon weight: ";

    player.inventoryItems.push_back(make_unique<Weapon>(wpnName, wpnDmg, wpnWeight));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
