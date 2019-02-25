/*--------------------------------------------------------------------------------------------------
FILE NAME:          cust_ports.cpp
DESCRIPTION:        Financial Portifolio Program
USAGE:              ./cust_ports
COMPILER:           GNU g++ compiler on Linux

MODIFICATION HISTORY:
Author                      Date               Version       Details
-----------------           ----------         --------      ---------------------------------------
Luiz Diego Garcia           2019-02-21         0.0.1         Created File
Luiz Diego Garcia           2019-02-21         0.0.2         Changed description / missing headers
Luiz Diego Garcia           2019-02-24         0.0.3         Added missing coments
Luiz Diego Garcia           2019-02-24         0.0.4         Created new function for new customers
Luiz Diego Garcia           2019-02-24         0.0.5         ofstream function to start cust. file
Luiz Diego Garcia           2019-02-24         0.0.6         Created strucs for customer ACCs
--------------------------------------------------------------------------------------------------*/

///////////////////////////////
//Libraries
///////////////////////////////
#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <cctype>

using namespace std;

///////////////////////////////
// Prototypes
///////////////////////////////
void NewCustomer();
void FileCreation(ofstream&);

///////////////////////////////
// Structures(Blueprints)
///////////////////////////////
struct ACCT_INFO
{
    int ACC_ID[6];
    double ACC_BALANCE;
    double GROWTH_RATE;
    int COMP_PER_YEAR;
};
struct CUSTOMER
{
    int CUSTOMER_ID;
    char LAST_NAME[21];
    char FIRST_NAME[21];
    char MIDDLE_NAME[21];
    int TAX_ID_NUMBER;
    ACCT_INFO account;
};

///////////////////////////////
// Macros
///////////////////////////////


///////////////////////////////
// Constant Variables
///////////////////////////////
const char PROGRAMMER_NAME[] = "Luiz Diego Garcia";

/*--------------------------------------------------------------------------------------------------
FUNCTION:           main()
DESCRIPTION:        start of the program
RETURNS:            0
--------------------------------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    //Variables used in multiple functions
    ofstream dataBaseFile;


    cout << endl;
    cout <<"Test main" << endl;

    
    //Creates a new customer file
    NewCustomer();
    FileCreation(dataBaseFile);

    dataBaseFile.close();
    cout << endl;
    cout << "File closed" << endl << endl;

    cout << endl;
    cout << "Programmed by: " << PROGRAMMER_NAME << " -- ";
    cout << __DATE__ << "  " __TIME__ << endl;
    cout << endl;

    cin.get();

    return 0;
}
/*--------------------------------------------------------------------------------------------------
FUNCTION:           NewCustomer()
DESCRIPTION:        Creates a new Customer file
RETURNS:            void
--------------------------------------------------------------------------------------------------*/
void NewCustomer()
{
    struct CUSTOMER Luiz;
    Luiz.CUSTOMER_ID = 97429;
    strcpy(Luiz.LAST_NAME, "Garcia");
    strcpy(Luiz.FIRST_NAME, "Luiz");
    strcpy(Luiz.MIDDLE_NAME, "Diego");
    Luiz.TAX_ID_NUMBER = 970229879;

    cout << endl;
    cout << "Test NewCustomer" << endl << endl;
    cout << Luiz.TAX_ID_NUMBER << " " << Luiz.CUSTOMER_ID << "\n";
    cout << Luiz.LAST_NAME << ", " << Luiz.FIRST_NAME << " ";
    cout << Luiz.MIDDLE_NAME << endl;

    return;
}
/*--------------------------------------------------------------------------------------------------
FUNCTION:           FileCreation()
DESCRIPTION:        Creates a new database file
RETURNS:            void
--------------------------------------------------------------------------------------------------*/
void FileCreation(ofstream& dataBaseFile)
{
    dataBaseFile.open("customerFile.txt", ios::app); // Opens file but does not ovewrites it
    if(!dataBaseFile.fail())
    {
        cout << endl << endl;
        cout << "File Open" << endl << endl;
    }
    else
    {
        cout << "Error openning file" << endl;
    }
    cout << "Test FileCreation" << endl;

    return;
}
