#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>

using namespace std;

struct Student { //Dit is een structure dat bestaat uit de integer voor de id-nummer en de string van de namen
    int id;
    string name;
};

int main () { 
    bool restart = true;
    while (restart){
        
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

// Zoals je ziet zijn alle id's (Nummer op de namenlijst A-Z) en namen in de vector opgeslagen

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
    restart = false;
    
    float SUB1;
   float SUB2;
   float SUB3;
   float SUB4;
   float SUB5;
   float Average;
   float Percentage;

   cout << "Please enter your grade for Liniar algebra1: " << endl;
   cin >> SUB1;
   cout << "Please enter your grade for Electrical Circuits: " << endl;
   cin >> SUB2;
   cout << "Please enter your grade for Calculus 1: " << endl;
   cin >> SUB3;
   cout << "Please enter your grade for ETM 1: " << endl;
   cin >> SUB4;
   cout << "Please enter your grade for EV: " << endl;
   cin >> SUB5;
    
   Average = ((SUB1 + SUB2 + SUB3 + SUB4 + SUB5)/5);
   Percentage = ((Average/10)*100);

   cout << "Here is the evaluation of student: " << IDTONAME[InputID] << endl;
   cout << "The average off all grades: " <<Average << endl;
   cout << "Average in percentages: " << Percentage << "%" << endl;

   string grade;
   string message;

   if (Percentage >= 80){
    grade = ("Grade: A");
    message = ("Okay NERD!!!");
    //cout << "Grade A" << endl;
    //cout << "Okay NERD!!!" << endl;
    cout << grade << endl;
    cout << message << endl;
   }

   else if (Percentage >=65 && Percentage <80){
    grade = ("Grade: B");
    message = ("You can do better than that");
    //cout << "Grade  B" << endl;
    //cout << "You can do better than that" << endl;
    cout << grade << endl;
    cout << message << endl;
   }

   else if (Percentage >= 55 && Percentage <65){
    grade = ("Grade: C");
    message = ("Oof, try harder");
    //cout << "Grade C" << endl; 
   // cout << "Oof, try harder" << endl;
    cout << grade << endl;
    cout << message << endl;
   }

   else if (Percentage >= 50 && Percentage <55){
    grade = ("Grade: D");
    message = ("Congrats? At least you aren't dumb ig");
    //cout << "Grade D" << endl; 
    //cout << "Congrats? At least you aren't dumb ig" << endl;
    cout << grade << endl;
    cout << message << endl;
   }

   else if (Percentage <50){
    grade = ("Grade: F");
    message = ("Womp womp, beter luck next time");
    //cout << "Grade F" << endl; 
    //cout << "Womp womp, beter luck next time" << endl;
    cout << grade << endl;
    cout << message << endl;
   }

   cout << "Printing your results in a text file: Evaluation.exe..." << endl;
   //Start van de code om in een file te printen.
 ofstream output ("Evaluation.exe");
 output << "Name: " << IDTONAME[InputID] << endl;
 output << "Here is the evaluation of student: " << IDTONAME[InputID] << endl;
 output << "Your grade for Subject: Liniar Algebra is: " << SUB1 << endl;
 output << "Your grade for Subject: Electrical Circuits is: " << SUB2 << endl;
 output << "Your grade for Subject: Calculus 1 is: " << SUB3 << endl;
 output << "Your grade for Subject: ETM 1 is: " << SUB4 << endl;
 output << "Your grade for Subject: EV is: " << SUB5 << endl;
 output << "The average off all grades: " << Average << endl;
 output << "Average in percentages: " << Percentage << "%" << endl;
 output << grade << endl;
 output << message << endl;
 output.close();
} 
else {
    cout << "ID not in the database :C " << endl;
   // cout << "Thank you for using the student database! " << endl;
    cout << "Restarting the student grading system... " << endl;
    restart = true;
    }
}
    
return 0;
}