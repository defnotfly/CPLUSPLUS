#include <iostream>
#include <vector>
using namespace std;

// Structure to represent a hotel room
struct Room 
{
    string name;
    string description;
    string details;
    int price;
};

// Declaration of a function to display the information of a room
void displayRoom(const Room& room);

class hotel
{
public:

    ~hotel()
    {
        cout <<"Thank you for Booking! Welcome to StaySync Hotel!";
    }

    string name;
    string mob_number;
    int month;
    int day;
    int year;
    int days;
    int choice;
    int cash;
    int totalPrice;
    int change;

    void getInformation() //get the information
    {
    cout <<"Enter your name\t: ";
    getline(cin, name);


    cout <<"Enter your phone number\t: ";
    getline(cin, mob_number);
 

    cout <<"Enter your preferred date to check-in:" <<endl;
    cout <<"Month\t: ";
    cin >> month;


    while (true) //for negative testing
    {
        if (month >= 1 && month <= 12)
        {
            break;
        }
        else
        {
            cout << "Invalid Input. Please enter a number between 1 and 12." << endl;
            cout << "Month\t: ";
            cin >> month;
        }
    }


    cout <<"Day\t: ";
    cin >> day;
    while (true) //for negative testing
    {
        if (day >= 1 && day <= 30)
        {
            break;
        }
        else
        {
            cout << "Invalid Input. Please enter a number between 1 and 30." << endl;
            cout << "Day\t: ";
            cin >> day;
        }
    }


    cout <<"Year\t: ";
    cin >> year;


    cout <<"How many days will you be staying (Min: 2, Max: 12)\t: ";
    cin >> days;
    while (true) //for negative testing
    {
        if (days >= 2 && days <= 12)
        {
            break;
        }
        else
        {
            cout << "Invalid Input. Please enter a number between 2 and 12." << endl;
            cout << "How many days will you be staying\t: ";
            cin >> days;
        }
    }


    cout <<"Enter the choice of room (1-4 only)\t: ";
    cin >> choice;
    while (true) //for negative testing
    {
        if (choice >= 1 && choice <= 4)
        {
            break;
        }
        else
        {
            cout << "Invalid Input. Please enter a number between 1 and 4." << endl;
            cout << "Enter the choice of room\t: ";
            cin >> choice;
        }
    }

   
    cout <<"Enter your payment\t:";
    cin >> cash;
    cin.ignore();
} //end of getting information



    int calculateTotal (int days, int choice) //calculate the rate per days stay in total
    {
        if (choice == 1)
        {
            choice = 111000;
        }

        else if (choice == 2)
        {
            choice = 10500;
        }

        else if (choice == 3)
        {
            choice = 10500;
        }

        else if (choice == 4)
        {
            choice = 5000;
        }

        totalPrice  = days * choice;

        cout <<"Total\t\t\t:$" << totalPrice << endl; 
        cout <<"Cash entered\t\t:$" <<cash << endl;

        
        if (cash < totalPrice) {
            cout << "Your change is\t\t:Your cash is insufficient!" << endl;
        }
        else{
            change = cash - totalPrice;
            cout << "Your change is\t\t:$";
        }
        return change; 
    } //end of total calculation



    void displayInfo () //display client's information
    {
    cout <<"========================================CLIENT'S INFORMATION========================================" <<endl;


    cout <<"Name\t\t\t:" <<name <<endl;

    cout <<"Mobile no.\t\t:" <<mob_number <<endl;

    cout <<"Date of check-in\t:" <<month <<"/" <<day <<"/" <<year <<endl;

    cout <<"Days staying\t\t:" <<days <<endl;

    cout <<"Chosen room\t\t:";
    switch (choice)
    {
    case 1:
        cout <<"Presidential Suite" <<endl;
            break;
    case 2:
        cout <<"Deluxe King Room" <<endl;
            break;
      
    case 3:
        cout <<"Deluxe Queen Room" <<endl;
            break;
      
    case 4:
        cout <<"Standard Double Room" <<endl;
            break;
       
    default:
        break;
       }

    calculateTotal(days, choice);

    cout <<endl;
    system("pause");
    } //end of display
}; 


int main() 
{   
    hotel hotel;
    // Vector to store room information
    vector<Room> rooms = 
    {
        {
        "I. StaySync Deluxe Presidential Suite", 
        "Our Presidential Suite is the epitome of luxury, combining indulgence and unsurpassed comfort. Providing exceptional room service to provide an amazing guest experience.", 
        "- 8 Seater Dining Area\n- Entertainment Room\n- Bathrooms\n- 3 Flat LED TV Satellites\n- Luxury Bath Amenities\n- Hair dryer\n- Private pantry", 
        111000
        },
        
        {
        "II. StaySync Deluxe King Room", 
        "Welcome to our StaySync King Room, where elegance and comfort combine to provide you with a memorable stay.", 
        "- Smart Television with Satellite Channels\n- High Speed Wifi\n- Coffee/Tea Maker\n- Individually Air-conditioning System\n- Hair Dryer\n- Bath Robe\n- In room Refrigerator\n- Rain Shower/ Bathtub\n- Electronic Safety locks\n- Personal Bar\n- Closet\n- Safety Deposit box\n- 76” x 80” King Bed size", 
        10500
        },
        
        {
        "III. StaySync Deluxe Queen Room", 
        "Welcome to our StaySync Queen Room, Sink into the luxurious luxury of our queen-sized bed, which is draped in fresh sheets and fluffy cushions, offering nights of unrivaled relaxation", 
        "- Smart Television with Satellite Channels\n- High Speed Wifi\n- Coffee/Tea Maker\n- Individually Air-conditioning System\n- Hair Dryer\n- Bath Robe\n- In room Refrigerator\n- Rain Shower/ Bathtub\n- Electronic Safety locks\n- Personal Bar\n- Closet\n- Safety Deposit box\n- 60” x 80” Queen Bed size", 
        10500
        },
        
        {
        "IV. StaySync Standard Double Room", 
        "Our StaySync standard double room offers comfort and convenience. Step inside and relax in your comfortable hideaway away from home.", 
        "- Smart Television with Satellite Channels\n- High Speed Wifi\n- Coffee/Tea Maker\n- Individually Air-conditioning System\n- Hair Dryer\n- Bath Robe\n- In room Refrigerator\n- Rain Shower/ Bathtub\n- Electronic Safety locks\n- Personal Bar\n- Closet\n- Safety Deposit box", 
        5000
        }
    };

    cout << "Welcome to our StaySync Hotel! Press enter to view more details." << endl;
    cin.get(); // Pause

    // Display room details
    for (const auto room : rooms) {
        displayRoom(room);
    }

    cout <<"Would you like to proceed for due process? Press Enter if affirmative." <<endl;
    cin.get(); // Pause

    hotel.getInformation();
    cout <<"Press enter to view your information..." <<endl;
    cin.get(); //Pause

    hotel.displayInfo();
    
    return 0;
}

void displayRoom(const Room& room)
{
    cout << "========================================" << room.name << "========================================" << endl;
    cout << room.description << endl << endl;
    cout << "Room Details:" << endl;
    cout << room.details << endl;
    cout << "Price Rate: $" << room.price << " per night" << endl << endl;
}