 #include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

const int max = 20;

void InsertCar();
void ShowCars();
void SearchCar();
void BuyCar();
void SellCars();

int index = 0;
int cindex = 0;

class Vehicle {
protected:
    char cname[50];

public:
    Vehicle() {}
};

class Car {
protected:
    int id;
    char engine[max];
    char color[max];
    char transmission[max];
    char name[max];
    char fuel[max];
    char price[max];

public:
    Car() {}
};

class HondaCar : public Car, public Vehicle {
private:
    char n[max];

public:
    HondaCar() {}

    void addCars(int i, char cn[], char n[], char e[], char t[], char c[], char f[], char p[]) {
        id = i;
        strcpy(cname, cn);
        strcpy(name, n);
        strcpy(engine, e);
        strcpy(transmission, t);
        strcpy(color, c);
        strcpy(fuel, f);
        strcpy(price, p);
    }

    void setCar() {
        std::cout << "-------------CAR INFORMATION-------------" << std::endl;
        std::cout << "Enter company Name:";
        std::cin.getline(cname, max);
        std::cin.getline(cname, max);
        std::cout << "Enter car name:";
        std::cin.getline(name, max);
        std::cout << "Enter engine number:";
        std::cin.getline(engine, max);
        std::cout << "Enter Transmission:";
        std::cin.getline(transmission, max);
        std::cout << "Enter car color:";
        std::cin.getline(color, max);
        std::cout << "Enter fuel type:";
        std::cin.getline(fuel, max);
        std::cout << "Enter car price:";
        std::cin.getline(price, max);
        id = index + 1;
    }

    void getCar() {
        std::cout.width(5);
        std::cout.setf(std::ios::left);
        std::cout << id;

        std::cout.width(10);
        std::cout << name;
        std::cout.width(10);
        std::cout << engine;
        std::cout.width(10);
        std::cout << color;
        std::cout.width(10);
        std::cout << fuel;
        std::cout.width(15);
        std::cout << transmission;
        std::cout.width(10);
        std::cout << cname;
        std::cout.width(10);
        std::cout << price;
    }

    void SearchACar(char *n) {
        if (strcmp(name, n) == 0) {
            std::cout << "\n\t\t---------------------Car found--------------------" << std::endl;
            std::cout << std::endl;
            std::cout << "S.no Car Engine Color Fuel Transmission Company Price" << std::endl;
            getCar();
            std::cout << std::endl;
            std::cout << "\t\t----------------------*********--------------------" << std::endl;
            std::cout << std::endl;
        }
    }
};

class customer {
private:
    char custname[max];
    char day[10];
    char carid[10];
    char month[10];
    char year[10];
    char contact[max];
    char billno[10];
    char qty[10];
    char total[max];

public:
    customer() {}

    void getCustInfo() {
        std::cout << "\n\n**** PLEASE ENTER YOUR INFORMATION ****\n";
        std::cout << "Enter customer name:";
        std::cin.getline(custname, max);
        std::cin.getline(custname, max);
        std::cout << "Enter contact number:";
        std::cin >> contact;
        std::cout << "Enter car serial number:";
        std::cin >> carid;
        std::cout << "Bill no:";
        std::cin >> billno;
        std::cout << "Quantity:";
        std::cin >> qty;
        std::cout << "Date:";
        std::cin >> day >> month >> year;
        std::cout << " Total:";
        std::cin >> total;
        std::cout << "\t\t*********THANK YOU**********";
    }

    void showCustInfo() {
        std::cout << "\t\n\n*********Sold Car Information*********\n\n";
        std::cout << "Customer: " << custname << std::endl;
        std::cout << "Contact number: " << contact << std::endl;
        std::cout << "Serial: " << carid << std::endl;
        std::cout << "BIll no. :" << billno;
        std::cout << "\nQuantity :" << qty;
        std::cout << "\nDate To Be Inserted. :" << day << "-" << month << "-" << year << std::endl;
        std::cout << "Total price:" << total;
    }
};

HondaCar h1[50];
customer cst[100];

int main() {
    char ch = ' ';
    h1[0].addCars(1, "Honda", "City", "1298", "Manual", "Silver ", "Petrol", "1,498,000");
    index++;
    h1[1].addCars(2, "Honda", "Civic", "1797", "Manual", "Metal", "Petrol", "1,973,000");
    index++;

    h1[2].addCars(3,"Suzuki","Mehran","796","Manual"
,"Silver","Petrol","575,000");
 index++;


 h1[3].addCars(4,"Suzuki","Cultus","993","Manual",
  "Aque-Blue","Petrol","985,000");
 index++;

h1[4].addCars(5,"Suzuki","Swift","1300","Manual",
  "Silver","Petrol","1,151,000");
 index++;
h1[5].addCars(6,"Toyota","Corolla","1298","Manual"
,"Deep Blue","Petrol","1,554,000");
 index++;
h1[6].addCars(7,"Toyota",
"Hilux","N/A","Manual","White","Petrol","1,779,200");
 index++;

 h1[7].addCars(8,"Toyota","Prado","2982",
               "Manual","Green","Petrol","11,99,000");
 index++;
h1[8].addCars(9,"Toyota","Camry","2362","Manual"
,"Black","Petrol","7,846,000");
 index++;
h1[9].addCars(10,"Toyota","Avanza","1495","Manual","Aqua",
    "Petrol","2,549,000");
 index++;
h1[10].addCars(11,"Toyota","Altis","1598","Auto",

"Mica","Petrol","2,104,500");

index++;
h1[11].addCars(12,"Suzuki","Liana","1298","Any",
"Gray","Petrol","1,432,000 ");
 index++;

    // Add more cars here

    while (1) {
        std::cout << std::endl << std::endl;
        std::cout << "\n\t\t\tWelcome to Car Showroom" << std::endl << std::endl;
        std::cout << "*******************************************" << std::endl;
        std::cout << "\t\t\t***---Press 1 to enter a new car" << std::endl;
        std::cout << "\t\t\t***---Press 2 to view all available cars" << std::endl;
        std::cout << "\t\t\t***---Press 3 to Search a car" << std::endl;
        std::cout << "\t\t\t***---Press 4 to see sold cars" << std::endl;
        std::cout << "\t\t\t***---Press 5 to exit the program" << std::endl << std::endl;
        std::cout << "*******************************************" << std::endl;
        std::cin >> ch;
        char in = ' ';
        switch (ch) {
        case '1':
            do {
                InsertCar();
                std::cout << std::endl;
                std::cout << "Do you want to insert a new car? Press Yes(y) or No(n)" << std::endl << std::endl;
                std::cin >> in;
            } while (in == 'y');
            break;
        case '2':
            std::cout << "S.no Car Engine Color Fuel Transmission Company Price" << std::endl;
            ShowCars();
            break;
        case '3':
            SearchCar();
            break;
        case '4':
            SellCars();
            break;
        case '5':
            exit(0);
            break;
        default:
            std::cout << "Please enter a valid number" << std::endl;
        }
    }
    return 0;
}

void InsertCar() {
    h1[index].setCar();
    index++;
}

void ShowCars() {
    if (index != 0) {
        for (int i = 0; i < index; i++) {
            h1[i].getCar();
        }
        std::cout << std::endl << std::endl;
        BuyCar();
    } else {
        std::cout << "Cars are not available" << std::endl;
        std::cout << "Press any key to continue...." << std::endl;
    }
}

void SearchCar() {
    char n[20];
    std::cout << std::endl;
    std::cout << "*************Search a Car****************" << std::endl << std::endl;
    std::cout << "Enter a car name to search:";
    std::cin >> n;
    for (int i = 0; i < index; i++) {
        h1[i].SearchACar(n);
    }
}

void BuyCar() {
    char c = ' ';
    std::cout << "************Purchase a Car***********" << std::endl << std::endl;
    std::cout << "Press y to purchase a car or n to goto Main menu" << std::endl;
    std::cin >> c;
    if (c == 'y' || c == 'Y') {
        cst[cindex].getCustInfo();
        cindex++;
    }
}

void SellCars() {
    if (cindex != 0) {
        for (int i = 0; i < cindex; i++) {
            cst[i].showCustInfo();
            if (i < index) {
                std::cout << "\nS.no Car Engine Color Fuel Transmission Company Price" << std::endl;
                h1[i].getCar();
            }
        }
    } else {
        std::cout << "No car has sold" << std::endl;
        std::cout << "Press any key to continue......" << std::endl;
    }
}
