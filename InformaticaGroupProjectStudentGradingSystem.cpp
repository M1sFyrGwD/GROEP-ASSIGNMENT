#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

struct Student { //Dit is een structure dat bestaat uit de integer voor de id-nummer en de string van de namen
    int id;
    string name;
};

int main () {

vector<Student> database = { //vector is basically een array but on steroids, je kan het makkelijk vergroten of verkleinen en waarder plakken en weghalen.
    {1, "Abauna Xifra"},
    {2, "Amain Liane"},
    {3, "Bansi Wiraisha"},
    {4, "Bisnajak Ishara"},
    {5, "Chen Frankie"},
    {6, "Drenthe Serinio"},
    {7, "He Helen"},
    {8, "Houthakker Enrico"},
    {9, "Jugwels Julian"},
    {10, "Kali Prisha"},
    {11, "Sujal Kandhai"},
    {12, "Khedoe Rishaan"},
    {13, "Marie Felicio"},
    {14, "Pawirodikromo Chemaro"},
    {15, "Pika Savienta"},
    {16, "Pinas Keon"},
    {17, "Purperhart Nyuk-shi"},
    {18, "Ramautar Rohit"},
    {19, "Ramawadh Adi"},
    {20, "Sastroredjo Renaldo"},
    {21, "Sewratan Divyesh"},
    {22, "Soemeer Rishaan"},
    {23, "Simson Simeon"},
    {24, "Tekam Christopher"},
    {25, "Vasilda Darlene"},
    {26, "Warsosemito Argeo"},
    {27, "Wartim Donovan"},
    {28, "Weewee Shennetifah"},
    {29, "Yeung Faroek"}
}; 

// Zoals je ziet zijn alle id's (Nummer op de namenlijst A-Z) en namen in de vector opgeslapgen

// De map zegt basically we nemen de id nummer en de naam en zetten hem onder een functie IDTONAME (Which id do we associate with what name)
map<int, string> IDTONAME;
for (const Student& Student : database) { 
    IDTONAME[Student.id]= Student.name;
}

int InputID;
cout << "Welcome to the ET student database!" << endl; // dit is je startup text voor de gebruiker
cout << "Please enter your Student-ID:" << endl;
cin >> InputID; //Hier typ jij je id waarde in 

if (IDTONAME.count(InputID) > 0) {  // for is een voorwaarde, basically als je een geldige id intoetst krijg je de naam gekoppeld aan de id te zien.
    cout << "Name: " << IDTONAME[InputID] << endl;
} 
else {
    cout << "ID not in the database :C " << endl;
}

return 0;
}