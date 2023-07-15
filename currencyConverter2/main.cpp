#include <iostream>
#include <time.h>
#include <vector>
#include <string>
#include <list>
using namespace std;

class HotelServices
{
private:
    int Avail_room = 0;
    int Avail_hall = 0;
    int price_lundary = 0;
    double sumMeal =0, sumDrink = 0;
    vector<string>Avail_meal;
    vector<double>Price_meal;
    vector<int>Quant_meal;
    vector<string>Avail_drink;
    vector<double>Price_drink;
    vector<int>Quant_drink;

    //for the receipt
    int GQroom =0;
    int GFood =0;



public:
//set room
    void setAvail_room()
    {
        cout<<"\n\n Number of rooms available for booking  : ";
        cin>>Avail_room;
    }
//set Hall
    void setAvail_hall()
    {
        cout<<"\n\n Number of Halls available for booking  : ";
        cin>>Avail_room;
    }
//set Meal
    void setAvail_meal()
    {
        int Num_meals, Nquant;
        string Name_meal ="";
        double Nprice;
        cout<<"\n\tEnter available number of different meals available for sales(e.g 5, 10, 20 e.t.c): ";
        cin>>Num_meals;
        cout<<"\n\tEnter available meals with their prices: ";
        for(int i = 0; i < Num_meals; i++)
        {
            cout<<"\n\tMeal: ";
            //getline(cin, Name_meal);
            cin>>Name_meal;
            Avail_meal.push_back(Name_meal);
            cout<<"\n\tPrice: ";
            cin>>Nprice;
            Price_meal.push_back(Nprice);
            cout<<"\n\tQuantity: ";
            cin>>Nquant;
            Quant_meal.push_back(Nquant);
            Name_meal ="";
            Nprice = 0;
            Nquant = 0;
        }
    }
//set Drink
    void setAvail_drink()
    {
        int Num_drinks, Nquant;
        string Name_drink ="";
        double Nprice;  
        cout<<"\n\tEnter available number of different brands of Drinks available for sales(e.g 5, 10, 20 e.t.c): ";
        cin>>Num_drinks;
        cout<<"\n\tEnter available drinks with their prices: ";
        for(int i = 0; i < Num_drinks; i++)
        {
            cout<<"\n\tDrink: ";
            //getline(cin, Name_drink);
            cin>>Name_drink;
            Avail_drink.push_back(Name_drink);
            cout<<"\n\tPrice: ";
            cin>>Nprice;
            Price_drink.push_back(Nprice);
            cout<<"\n\tQuantity: ";
            cin>>Nquant;
            Quant_drink.push_back(Nquant);

            // Set back to zero value for the next iteration
            Name_drink ="";
            Nprice = 0;
            Nquant = 0;

        }
    }
    //set laundry
    int laundryService()
    {
        cout<<"\n\t\t Welcome to our lundary Department"<<endl;
        int Quantity_lundary;
        cout<<"Quantity :";
        cin>>Quantity_lundary;
        price_lundary += Quantity_lundary * 30; // 30 per cloth.
        return price_lundary;

    }
    //void menu();
    //void Administrator();
    //void Rooms();
    //void Halls();
    //void Meals();
    //void Drinks();
    //void printSalesRecords();
    //void receipt();
    //void exit();

//menu
    void menu()
    {
    system("cls");
    int choice;
    cout<<"\n\t|____________MENU_______________|"<<endl;
    cout<<"\n\t 1) Administrator";
    cout<<"\n\t 2) Rooms";
    cout<<"\n\t 3) Halls";
    cout<<"\n\t 4) Meals ";
    cout<<"\n\t 5) Drinks";
    cout<<"\n\t 6) Laundry";
    cout<<"\n\t 7) Receipt";
    cout<<"\n\t 8) Currency conversion";
    cout<<"\n\t 9) Return to main option";
    cout<<"\n\t 10) Exit";
    cout<<"\n\t|_______"<<__DATE__<<__TIME__<<"__________|"<<endl<<endl;
    cout<<"\n\t Enter your option: "<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        Administrator();
        break;
    case 2:
        Rooms();
        break;
    case 3:
        Halls();
        break;
    case 4:
        Meals();
        break;
    case 5:
        Drinks();
        break;
    case 6:
        laundryService();
        break;
    case 7:
        receipt();
        break;
    case 8:
        //currencyConversion();
        break;
    case 9:
        menu();
        break;
    case 10:
        exit(0);
        break;
    default:
        cout<<"\n\n\t\tEnter current option!!!!!";
        menu();
    }

}
//administrator 
    void Administrator()
    {
    L:
    system ("cls");
    int count = 0, option;
    string adminId, check_adminId = "Admin123";
    cout<<"\n\t Enter your Id :";
    cin>>adminId;
    if(adminId == check_adminId)
    {
        setAvail_meal();
        setAvail_drink();
        setAvail_room();
        setAvail_hall();
        cout<<"\n\t Items are Successfully stored";
        cout<<"\n\n\t Select Option :";
        cout<<"\n\t 1)main menu :";
        cout<<"\n\t 2)Print sales records:";
        cout<<"\n\t 3)Exit :";
        cout<<"\n\n\t  Enter Option: ";
        cin>>option;
        system("cls");
        switch (option)
        {
        case 1:
            menu();
            break;
        case 2:
            printSalesRecords();
            break;
        case 3:
            exit(0);
            break;
        }
    }
    else
    {
        while(count < 3)
        {
            goto L;
            count++;
        }
        cout<<"Access Denied!!!";
        menu();
    }
    }
//room
    void Rooms()
    {
    system("cls");
    N:
    int Qroom = 0;
    cout<<"\n\t Enter number of rooms needed ";
    cin>>Qroom;
    if(Qroom <= Avail_room)
    {
        cout<<"\n\t\t"<<Qroom<<" rooms have been alloted"<<endl;
        GQroom = Qroom;
        Avail_room -= Qroom;
        menu();
    }
    else{
        if(Avail_room == 0)
        {
            cout<<"\n\t\tUnavailable";
            menu();
        }
        else
        {
            cout<<"\n\tOnly"<<Avail_room<<"is/are available"<<endl;
            goto N;
        }
    }
}

//Hall
    void Halls()
    {
        system("cls");
        Z:
        int QHall = 0;
        cout<<"\n\t Enter number of Halls needed";
        cin>>QHall;
        if(QHall <= Avail_hall)
        {
            cout<<"\t\n"<<QHall<<"hall/halls has/have been alloted"<<endl;
            Avail_hall -= QHall;
        }
        else{
            if(Avail_hall == 0)
            {
                cout<<"\n\tUnavailable";
                menu();
            }
            else
            {
                cout<<"\n\tOnly"<<Avail_hall<<"is/her available"<<endl;
                goto Z;
            }
            
        }
    }
//Meal
    void Meals()
    {
        O:
        int opt, meal_quant = 0;
        double getMealPrice = 1;
        system("cls");
        cout<<"\n\t Available foods \n\n";
        for(int i = 0; i < Avail_meal.size(); i++)
            {
                cout<<i+1<<") "<<Avail_meal[i]<<endl;
                cout<<"Price: "<<Price_meal[i]<<endl<<endl;
            }
        k:
        cout<<"\n\t Enter your option according to the above list :";
        cin>>opt;
        getMealPrice = Price_meal[opt -1];
        cout<<"\n\t Quantity :";
        cin>>meal_quant;
        if(!(opt >= 1 && opt <= Avail_meal.size()))
        {
            goto k;
        }
        else
        {
            if(meal_quant <= Quant_meal[opt-1]) // 1 is subtracted from opt becuase we added 1 while numbering the food list 
            {
                cout<<"\n\t Order has been sent";
                sumMeal += meal_quant *  getMealPrice;
                Quant_meal[opt-1] -= meal_quant;
            }

            else
            {
                cout<<"\n\t Sorry you can only order "<<Quant_meal[opt-1]<<" quantity/quantities of "<<Avail_meal[opt-1]<<endl<<endl;
                goto O;
                
            }
        }

}

//Drink
    void Drinks()
    {
        Q:
        int opt, drink_quant = 0;
        double getDrinkPrice = 1;
        system("cls");
        cout<<"\n\t Available foods \n\n";
        for(int i = 0; i < Avail_drink.size(); i++)
            {
                cout<<i+1<<") "<<Avail_drink[i]<<endl;
                cout<<"Price: "<<Price_drink[i]<<endl<<endl;
            }
        P:
        cout<<"\n\t Enter your option according to the above list :";
        cin>>opt;
        getDrinkPrice = Price_drink[opt -1];
        cout<<"\n\t Quantity :";
        cin>>drink_quant;
        if(!(opt >= 1 && opt <= Avail_drink.size()))
        {
            goto P;
        }
        else
        {
            if(drink_quant <= Quant_meal[opt-1]) // 1 is subtracted from opt becuase we added 1 while numbering the drink list 
            {
                cout<<"\n\t Order has been sent";
                sumDrink += getDrinkPrice* drink_quant;
                Quant_drink[opt-1] -= drink_quant;
            }

            else
            {
                cout<<"\n\t Sorry you can only order "<<Quant_drink[opt-1]<<" quantity/quantities of "<<Avail_drink[opt-1]<<endl<<endl;
                goto Q;
                
            }
        }

    }

//printSalesRecords
    void printSalesRecords()
    {
        int optn;
        system("cls");
        cout<<"\n\n\t\t\t|____________Invoice________________|";
        cout<<"\n\n\t\t\t|____________________________________|";
        cout<<"\n\n\t\t\t The total amount of Meal sold: "<<sumMeal;
        cout<<"\n\n\t\t\t The total amount of drink sold: "<<sumDrink<<endl;
        cout<<"\n\n\t\t\t Laundry sales "<<price_lundary<<endl;
        cout<<"\n\n\n\t\t\t 1) Exit "<<endl;
        cout<<"\n\n\t\t\t 2) Return back to menu "<<endl;
        cin>>optn;
        if(optn == 1)
            exit(0);
        else
            menu();
        
    }
    void receipt()
    {
        string Custom_Name;
    
        cout<<"\n\n\t\tPlease Enter your name"<<endl;
        cin>>Custom_Name;
        system("cls");
        cout<<"\n\t\t|________RECEIPT SLIP________|";
        cout<<"\n\t\tRoom = "<<GQroom*120;
        cout<<"\n\t\tFood = "<<sumMeal;
        cout<<"\n\t\tDrink = "<<sumDrink;
        cout<<"<<\n\t\tLundary = "<<price_lundary;
        cout<<"\n\t\t|____________________________|";
        cout<<"\n\t\t|________END__________________|";

    }

};

class Currencyconverter
{
private:
    int optcurr;
    double localCurrency;

public:
    void getLocalCurrencydetails()
    {
        int optLocal, localAmount;

        cout<<"\n\t\t|__________________________________________________________|"<<endl;
        cout<<"\n\t\t_________________________WELCOME___________________________"<<endl;
        cout<<"\n\t\t Select your Local Currency from below list\n\n\n";
        displayCountryList();
        cout<<"\n\t\t Enter your option: ";
        cin>>optLocal;
        optcurr = optLocal;
        cout<<"\n\t\t Enter amount of your local currency(in digit) you are about to convert: ";
        cin>>localAmount;
        localCurrency = localAmount;
    }

    void displayCountryList()
        {
            //cout<<"|*******************WELCOME*********************|"<<endl<<endl<<endl;
            //cout<<"|*********SELECT YOUR LOCAL CURRENCY************|"<<endl;
            cout<<"\t\t 1) Afghan Afghani  "<<endl;
            cout<<"\t\t 2) Algerian Dinar "<<endl;
            cout<<"\t\t 3) Angolan Kwanza   "<<endl;
            cout<<"\t\t 4) Argentine Peso  "<<endl;
            cout<<"\t\t 5) Armenian Dram  "<<endl;
            cout<<"\t\t 6) Australian Dollar  "<<endl;
            cout<<"\t\t 7) Bangladeshi Taka  "<<endl;
            cout<<"\t\t 8) Cambodian riel  "<<endl;
            cout<<"\t\t 9) Canadian Dollar  "<<endl;
            cout<<"\t\t 10) Chinese Yuan  "<<endl;
            cout<<"\t\t 11) Colombian Peso  "<<endl;
            cout<<"\t\t 12) Egyptian Pound  "<<endl;
            cout<<"\t\t 13) Euro  "<<endl;
            cout<<"\t\t 14) Indian Rupee  "<<endl;
            cout<<"\t\t 15) Japanese Yen  "<<endl;
            cout<<"\t\t 16) Kuwaiti Dinar  "<<endl;
            cout<<"\t\t 17) Netherlands Antillean  "<<endl;
            cout<<"\t\t 18) Nigerian Naira  "<<endl;
            cout<<"\t\t 19) Pound sterling   "<<endl;
            cout<<"\t\t 20) United States Dollar  "<<endl;
            cout<<"\t\t 21) West African CFA franc  "<<endl;
              
        }

};

//declaration of fns that displays welcome design
void displaywelcome();
//declaration of fns that displays only welcome design
void displaywelcome2();

int main(int argc, char** argv)
{
    int opt, opt2 = 0;
    HotelServices hotel;
	displaywelcome();
    m:
    cout<<"\n\t\t   SELECT FROM THE BELOW OPTIONS FOR YOUR TRANSACTION ";
    cout<<"\n\n\t\t 1) Hotel Services";
    cout<<"\n\n\t\t 2) Currency conversion system";
    cout<<"\n\n\t\t Enter your option: ";
    cin>>opt;
    switch (opt)
    {
    case 1:
        hotel.menu();
        hotel.Administrator();
        /*hotel.setAvail_drink();
        hotel.setAvail_meal();
        hotel.setAvail_room();
        hotel.setAvail_hall();*/
        break;
    case 2:
        system("cls");
        Currencyconverter currency;
        currency.getLocalCurrencydetails();
        break;

    default:
    system ("cls");
        cout<<"\n\t\tYou've entered wrong option"<<endl;
        goto m;
    }

	
	return (0);
}

//Initialization of fns that displays welcome design
void displaywelcome()
{
    cout<<"\t\t|__________________________________________________________|"<<endl;

    cout<<"\t\t\t      "<<"__"<<"      __ "<<" __  "<<"      "<<"__"<<endl;
    cout<<"\t\t\t|  | "<<"|__ "<<"|   "<<"|   "<<"|  | "<<"|\\/| "<<"|__"<<endl;
    cout<<"\t\t\t|/\\| "<<"|__ "<<"|__ "<<"|__ "<<"|__| "<<"|  | "<<"|__"<<endl<<endl;
    cout<<"\t\t\t          _____    __"<<endl;
    cout<<"\t\t\t            |     |  | "<<endl;
    cout<<"\t\t\t            |     |__| "<<endl<<endl;
    cout<<"\t\t\t      __         __     __   __ "<<endl;
    cout<<"\t\t\t|__| |  | |\\/|  |__    |  | |__ "<<endl;
    cout<<"\t\t\t|  | |__| |  |  |__    |__| |   "<<endl<<endl;
    cout<<"\t\t\t __   __         __   __    __   ___"<<endl;
    cout<<"\t\t\t|    |  | |\\/|  |__  |  |  |__|   | "<<endl;
    cout<<"\t\t\t|__  |__| |  |  |    |__|  | \\    | "<<endl<<endl<<endl;
    cout<<"\t\t************* DATE: "<<__DATE__<<" TIME: "<<__TIME__<<" **********"<<endl<<endl;
    cout<<"\t\t|__________________________________________________________|\n\n\n";
}
//Initialization of fns that displays only welcome design
void displaywelcome2()
{
    
    cout<<"\n\n";
    cout<<"\t\t\t      "<<"__"<<"      __ "<<" __  "<<"      "<<"__"<<endl;
    cout<<"\t\t\t|  | "<<"|__ "<<"|   "<<"|   "<<"|  | "<<"|\\/| "<<"|__"<<endl;
    cout<<"\t\t\t|/\\| "<<"|__ "<<"|__ "<<"|__ "<<"|__| "<<"|  | "<<"|__"<<endl<<endl;
}

//declaration of fns that displays list of countries
